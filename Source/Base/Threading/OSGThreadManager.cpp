/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2003 by the OpenSG Forum                   *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#if defined(OSG_USE_SPROC)
#include <cerrno>
#endif

#include <iostream>

#include "OSGThreadManager.h"
#include "OSGBaseInitFunctions.h"

OSG_USING_NAMESPACE

ThreadManager *ThreadManager::_pThreadManager      = NULL;
BaseThread    *ThreadManager::_pAppThread          = NULL;

bool           ThreadManager::_bShutdownInProgress = false;
UInt32         ThreadManager::_uiNumAspects        = OSG_DEFAULT_NUM_ASPECTS;

Char8         *ThreadManager::_szAppThreadType     = NULL;


/*-------------------------- Get / Set ------------------------------------*/

void ThreadManager::setAppThreadType(const Char8 *szAppThreadType)
{
    osgStringDup(szAppThreadType, _szAppThreadType);
}


ThreadManager *ThreadManager::the(void)
{
    if(_pThreadManager == NULL)
        _pThreadManager = new ThreadManager();

    return _pThreadManager;
}


BaseThread *ThreadManager::getAppThread(void)
{
    return _pAppThread;
}


void ThreadManager::setNumAspects(UInt32 uiNumAspects)
{
    if(GlobalSystemState == Startup)
    {
        _uiNumAspects = uiNumAspects;
    }
    else
    {
        SWARNING << "ThreadManager::setNumAspects must be called "
                 << "before osgInit is called"
                 << std::endl;
    }
}


/*-------------------- Create Threading Elements --------------------------*/

BaseThread *ThreadManager::getThread(const Char8 *szName,
                                     const Char8 *szTypeName)
{
    BaseThread *returnValue = NULL;

    _storePLock->acquire();

    returnValue = _sThreadStore.getMPField(szName, szTypeName);

    _storePLock->release();

    return returnValue;
}

Barrier *ThreadManager::getBarrier(const Char8 *szName,
                                   const Char8 *szTypeName)
{
    Barrier *returnValue = NULL;

    _storePLock->acquire();

    returnValue = _sBarrierStore.getMPField(szName, szTypeName);

    _storePLock->release();

    return returnValue;
}

CondVar *ThreadManager::getCondVar(const Char8 *szName,
                                   const Char8 *szTypeName)
{
    CondVar *returnValue = NULL;

    _storePLock->acquire();

    returnValue = _sCondVarStore.getMPField(szName, szTypeName);

    _storePLock->release();

    return returnValue;
}

Lock *ThreadManager::getLock(const Char8 *szName,
                             const Char8 *szTypeName)
{
    Lock *returnValue = NULL;

    _storePLock->acquire();

    returnValue = _sLockStore.getMPField(szName, szTypeName);

    _storePLock->release();

    return returnValue;
}

LockPool *ThreadManager::getLockPool(const Char8 *szName,
                                     const Char8 *szTypeName)
{
    LockPool *returnValue = NULL;

    _storePLock->acquire();

    returnValue = _sLockPoolStore.getMPField(szName, szTypeName);

    _storePLock->release();

    return returnValue;
}

BaseThread  *ThreadManager::findThread(const Char8 *szName)
{
    BaseThread *returnValue = NULL;

    _storePLock->acquire();
    
    returnValue = _sThreadStore.findMPField(szName);

    _storePLock->release();

    return returnValue;
}

Barrier *ThreadManager::findBarrier(const Char8 *szName)
{
    Barrier *returnValue = NULL;

    _storePLock->acquire();
    
    returnValue = _sBarrierStore.findMPField(szName);

    _storePLock->release();

    return returnValue;
}

CondVar *ThreadManager::findCondVar(const Char8 *szName)
{
    CondVar *returnValue = NULL;

    _storePLock->acquire();
    
    returnValue = _sCondVarStore.findMPField(szName);

    _storePLock->release();

    return returnValue;
}

Lock *ThreadManager::findLock(const Char8 *szName)
{
    Lock *returnValue = NULL;

    _storePLock->acquire();
    
    returnValue = _sLockStore.findMPField(szName);

    _storePLock->release();

    return returnValue;
}

LockPool *ThreadManager::findLockPool(const Char8 *szName)
{
    LockPool *returnValue = NULL;

    _storePLock->acquire();
    
    returnValue = _sLockPoolStore.findMPField(szName);

    _storePLock->release();

    return returnValue;
}

/*------------------------------- Get -------------------------------------*/

#if defined(OSG_USE_SPROC)
usptr_t *ThreadManager::getArena(void)
{
    return _pArena;
}
#endif

/*------------------------------ Helper -----------------------------------*/

bool ThreadManager::initialize(void)
{
    return the()->init();
}

bool ThreadManager::terminate (void)
{
    bool returnValue = the()->shutdown();

    delete _pThreadManager;

    _pThreadManager = NULL;

    return returnValue;
}

void ThreadManager::removeThread(BaseThread *pThread)
{
    if(_bShutdownInProgress == true)
        return;

    _storePLock->acquire();

    _sThreadStore.removeMPField(pThread);
    
    _storePLock->release();
}

void ThreadManager::removeBarrier(Barrier *pBarrier)
{
    if(_bShutdownInProgress == true)
        return;

    _storePLock->acquire();

    _sBarrierStore.removeMPField(pBarrier);
    
    _storePLock->release();
}

void ThreadManager::removeCondVar(CondVar *pCondVar)
{
    if(_bShutdownInProgress == true)
        return;

    _storePLock->acquire();

    _sCondVarStore.removeMPField(pCondVar);
    
    _storePLock->release();
}

void ThreadManager::removeLock(Lock *pLock)
{
    if(_bShutdownInProgress == true)
        return;

    _storePLock->acquire();

    _sLockStore.removeMPField(pLock);
    
    _storePLock->release();
}

void ThreadManager::removeLockPool(LockPool *pLockPool)
{
    if(_bShutdownInProgress == true)
        return;

    _storePLock->acquire();

    _sLockPoolStore.removeMPField(pLockPool);
    
    _storePLock->release();
}

UInt32 ThreadManager::registerThreadType(MPThreadType *pType)
{
    return _sThreadStore.registerMPType(pType);
}

UInt32 ThreadManager::registerBarrierType(MPBarrierType *pType)
{
    return _sBarrierStore.registerMPType(pType);
}

UInt32 ThreadManager::registerCondVarType(MPCondVarType *pType)
{
    return _sCondVarStore.registerMPType(pType);
}

UInt32 ThreadManager::registerLockType(MPLockType *pType)
{
    return _sLockStore.registerMPType(pType);
}

UInt32 ThreadManager::registerLockPoolType(MPLockPoolType *pType)
{
    return _sLockPoolStore.registerMPType(pType);
}


#ifdef __sgi
#pragma set woff 1209
#endif

bool ThreadManager::init(void)
{
    bool returnValue = true;

    FDEBUG(("OSGThreadManager init\n"))

#if defined(OSG_USE_SPROC)
    usconfig(CONF_AUTOGROW,   1);
    usconfig(CONF_INITUSERS, 20);
    usconfig(CONF_INITSIZE, 10 * 1048576);
    usconfig(CONF_CHMOD, 0666);

    _pArena = usinit("/dev/zero");

    if(_pArena == NULL)
    {
        SFATAL << "OSGTM : could not initialize arena " << errno << std::endl;
        returnValue = false;
    }
    else
    {
        SINFO << "OSGTM : got arena " << _pArena << std::endl;
    }
#endif

    _storePLock = _sLockStore.getMPField("OSGTMStoreLock", "OSGLock");
    
    if(_storePLock == NULL)
    {
        SFATAL << "OSGTM : could not get table lock" << std::endl;

        returnValue = false;
    }
    else
    {
        SINFO << "OSGTM : got table lock " << _storePLock << std::endl;
    }

    if(_szAppThreadType == NULL)
    {
        FINFO(("OSGTM : create -OSGBaseThread- app thread\n"))

        _pAppThread = getThread("OSGAppThread", "OSGBaseThread");
    }
    else
    {
        FINFO(("OSGTM : create -%s- app thread\n", _szAppThreadType))
        _pAppThread = getThread("OSGAppThread", _szAppThreadType);
    }

    FFASSERT((_pAppThread != NULL), 1, 
             ("OSGTM : could not get application thread \n");)
             

    FINFO(("OSGTM : got application thread %p\n", _pAppThread))

    _pAppThread->init();

    OSG::addRef(_pAppThread);

    return returnValue;
}

#ifdef __sgi
#pragma reset woff 1209
#endif

bool ThreadManager::shutdown(void)
{
    FDEBUG(("OSGThreadManager shutdown\n"))

    _bShutdownInProgress = true;

    _pAppThread->shutdown();

#ifdef OSG_DEBUG

    ThreadStore::MPFieldMapCIt tI = _sThreadStore._mFieldMap.begin();
    ThreadStore::MPFieldMapCIt tE = _sThreadStore._mFieldMap.end  ();

    for(; tI != tE; ++tI)
    {
        FWARNING(("ThreadManager::shutdown: "
                  "thread [%s|%p] is still alive ([%d]). \n", 
                  (*tI).first.c_str(),
                  (*tI).second,
                  (*tI).second->exists()));

    }

    BarrierStore::MPFieldMapCIt bI = _sBarrierStore._mFieldMap.begin();
    BarrierStore::MPFieldMapCIt bE = _sBarrierStore._mFieldMap.end  ();

    for(; bI != bE; ++bI)
    {
        FWARNING(("ThreadManager::shutdown: "
                  "barrier [%s|%p] is still alive\n", 
                  (*bI).first.c_str(),
                  (*bI).second));

    }

    CondVarStore::MPFieldMapCIt cI = _sCondVarStore._mFieldMap.begin();
    CondVarStore::MPFieldMapCIt cE = _sCondVarStore._mFieldMap.end  ();

    for(; cI != cE; ++cI)
    {
        FWARNING(("ThreadManager::shutdown: "
                  "condvar [%s|%p] is still alive\n", 
                  (*cI).first.c_str(),
                  (*cI).second));

    }

    LockStore::MPFieldMapCIt lI = _sLockStore._mFieldMap.begin();
    LockStore::MPFieldMapCIt lE = _sLockStore._mFieldMap.end  ();

    for(; lI != lE; ++lI)
    {
        FWARNING(("ThreadManager::shutdown: "
                  "lock [%s|%p] is still alive\n", 
                  (*lI).first.c_str(),
                  (*lI).second));

    }

    LockPoolStore::MPFieldMapCIt lpI = _sLockPoolStore._mFieldMap.begin();
    LockPoolStore::MPFieldMapCIt lpE = _sLockPoolStore._mFieldMap.end  ();

    for(; lpI != lpE; ++lpI)
    {
        FWARNING(("ThreadManager::shutdown: "
                  "lockpool [%s|%p] is still alive\n", 
                  (*lpI).first.c_str(),
                  (*lpI).second));

    }

#endif

    FDEBUG(("Sizes: ThreadStore: %d BarrierStore: %d CondVarStore: %d"
            "LockStore: %d LockPoolStore: %d\n",
            _sThreadStore._mFieldMap.size(),
            _sBarrierStore._mFieldMap.size(),
            _sCondVarStore._mFieldMap.size(),
            _sLockStore._mFieldMap.size(),
            _sLockPoolStore._mFieldMap.size()));
          
    _sThreadStore  .clear();
    _sBarrierStore .clear();
    _sCondVarStore .clear();
    _sLockStore    .clear();
    _sLockPoolStore.clear();

#if defined(OSG_USE_SPROC)
    if(_pArena != NULL)
        usdetach(_pArena);
#endif

    return true;
}

/*--------------------------- Constructors --------------------------------*/

ThreadManager::ThreadManager(void) :
    _sThreadStore  (    ),
    _sBarrierStore (    ),
    _sCondVarStore    (    ),
    _sLockStore    (    ),
    _sLockPoolStore(    ),

    _storePLock    (NULL)
{
#if defined(OSG_USE_SPROC)
    _pArena = NULL;
#endif
}

/*---------------------------- Destructo ----------------------------------*/

ThreadManager::~ThreadManager(void)
{
    delete [] _szAppThreadType;
}

