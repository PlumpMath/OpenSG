/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class CallbackAlgorithm!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECALLBACKALGORITHMINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGCallbackAlgorithmBase.h"
#include "OSGCallbackAlgorithm.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CallbackAlgorithm
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var RenderFunctorCallback CallbackAlgorithmBase::_sfCallback
    Inherited the parent target if none is set  
*/


void CallbackAlgorithmBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFRenderFunctorCallback::Description(
        SFRenderFunctorCallback::getClassType(),
        "callback",
        "Inherited the parent target if none is set  \n",
        CallbackFieldId, CallbackFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&CallbackAlgorithmBase::invalidEditField),
        static_cast     <FieldGetMethodSig >(&CallbackAlgorithmBase::invalidGetField));

    oType.addInitialDesc(pDesc);
}


CallbackAlgorithmBase::TypeObject CallbackAlgorithmBase::_type(
    CallbackAlgorithmBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &CallbackAlgorithmBase::createEmptyLocal,
    CallbackAlgorithm::initMethod,
    CallbackAlgorithm::exitMethod,
    (InitalInsertDescFunc) &CallbackAlgorithmBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CallbackAlgorithm\"\n"
    "\tparent=\"Algorithm\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "        <Field\n"
    "                name=\"callback\"\n"
    "                type=\"RenderFunctorCallback\"\n"
    "                cardinality=\"single\"\n"
    "                visibility=\"external\"\n"
    "                access=\"none\"\n"
    "        >\n"
    "        Inherited the parent target if none is set  \n"
    "        </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CallbackAlgorithmBase::getType(void)
{
    return _type;
}

const FieldContainerType &CallbackAlgorithmBase::getType(void) const
{
    return _type;
}

UInt32 CallbackAlgorithmBase::getContainerSize(void) const
{
    return sizeof(CallbackAlgorithm);
}

/*------------------------- decorator get ------------------------------*/







/*------------------------------ access -----------------------------------*/

UInt32 CallbackAlgorithmBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CallbackFieldMask & whichField))
    {
        returnValue += _sfCallback.getBinSize();
    }

    return returnValue;
}

void CallbackAlgorithmBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CallbackFieldMask & whichField))
    {
        _sfCallback.copyToBin(pMem);
    }
}

void CallbackAlgorithmBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CallbackFieldMask & whichField))
    {
        _sfCallback.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CallbackAlgorithmTransitPtr CallbackAlgorithmBase::create(void)
{
    CallbackAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CallbackAlgorithm>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CallbackAlgorithmTransitPtr CallbackAlgorithmBase::createLocal(BitVector bFlags)
{
    CallbackAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CallbackAlgorithm>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
CallbackAlgorithmPtr CallbackAlgorithmBase::createEmpty(void)
{
    CallbackAlgorithmPtr returnValue;

    newPtr<CallbackAlgorithm>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

CallbackAlgorithmPtr CallbackAlgorithmBase::createEmptyLocal(BitVector bFlags)
{
    CallbackAlgorithmPtr returnValue;

    newPtr<CallbackAlgorithm>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CallbackAlgorithmBase::shallowCopy(void) const
{
    CallbackAlgorithmPtr tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const CallbackAlgorithm *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr CallbackAlgorithmBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CallbackAlgorithmPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CallbackAlgorithm *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

CallbackAlgorithmBase::CallbackAlgorithmBase(void) :
    Inherited(),
    _sfCallback               ()
{
}

CallbackAlgorithmBase::CallbackAlgorithmBase(const CallbackAlgorithmBase &source) :
    Inherited(source),
    _sfCallback               (source._sfCallback               )
{
}


/*-------------------------- destructors ----------------------------------*/

CallbackAlgorithmBase::~CallbackAlgorithmBase(void)
{
}


GetFieldHandlePtr CallbackAlgorithmBase::getHandleCallback        (void) const
{
    SFRenderFunctorCallback::GetHandlePtr returnValue(
        new  SFRenderFunctorCallback::GetHandle(
             &_sfCallback, 
             this->getType().getFieldDesc(CallbackFieldId)));

    return returnValue;
}

EditFieldHandlePtr CallbackAlgorithmBase::editHandleCallback       (void)
{
    SFRenderFunctorCallback::EditHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CallbackAlgorithmBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<CallbackAlgorithmBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr CallbackAlgorithmBase::createAspectCopy(void) const
{
    CallbackAlgorithmPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CallbackAlgorithm *>(this));

    return returnValue;
}
#endif

void CallbackAlgorithmBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CallbackAlgorithmPtr>::_type("CallbackAlgorithmPtr", "AlgorithmPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CallbackAlgorithmPtr)

OSG_EXPORT_PTR_SFIELD_FULL(FieldContainerPtrSField, 
                           CallbackAlgorithmPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(FieldContainerPtrMField, 
                           CallbackAlgorithmPtr, 
                           0);

OSG_END_NAMESPACE
