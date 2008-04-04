/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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


/***************************************************************************\
*                             Includes                                    *
\***************************************************************************/

#include <OSGGraphOpFactory.h>

#include "OSGSingletonHolder.ins"

OSG_BEGIN_NAMESPACE

OSG_SINGLETON_INST(GraphOpFactoryBase)

template class SingletonHolder<GraphOpFactoryBase>;

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GraphOpFactory
    \ingroup GrpSystemNodeCoresDrawablesGeometry
    
A base class used to traverse geometries.

*/

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  public                                                                 -
\*-------------------------------------------------------------------------*/


void GraphOpFactoryBase::registerOp(GraphOp* prototype)
{
    MapIt iIt = _typeMap.find(prototype->getName());

    if(iIt != _typeMap.end())
    {
        addRef(prototype);
        subRef(iIt->second);

        iIt->second = prototype;
    }
    else
    {
        _typeMap[prototype->getName()] = prototype;

        addRef(prototype);
    }
}

void GraphOpFactoryBase::unRegisterOp(GraphOp* prototype)
{
    unRegisterOp(prototype->getName().c_str());
}

void GraphOpFactoryBase::unRegisterOp(const char* name)
{
    MapIt iIt = _typeMap.find(name);
    
    if(iIt != _typeMap.end())
    {
        subRef(iIt->second);

        _typeMap.erase(iIt);
    }
}
    
GraphOp *GraphOpFactoryBase::create(const char* name)
{
    iterator iIt = _typeMap.find(name);
    
    if(iIt != _typeMap.end())
    {
        if(iIt->second != NULL)
            return iIt->second->create();
        else
            return NULL;
    }
    else
    {
        return NULL;
    }
}

GraphOpFactoryBase::iterator GraphOpFactoryBase::begin()
{
    return _typeMap.begin();
}

GraphOpFactoryBase::iterator GraphOpFactoryBase::end()
{
    return _typeMap.end();
}

/*-------------------------------------------------------------------------*\
 -  private                                                                -
\*-------------------------------------------------------------------------*/

GraphOpFactoryBase::GraphOpFactoryBase()
{
}

GraphOpFactoryBase::~GraphOpFactoryBase(void)
{
    MapIt    iIt  = _typeMap.begin();
    iterator iEnd = _typeMap.end  ();

    while(iIt != iEnd)
    {
        subRef(iIt->second);

        iIt->second = NULL;

        ++iIt;
    }
}

OSG_END_NAMESPACE
