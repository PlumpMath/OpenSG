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
 **     class RootGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGRootGroupBase.h"
#include "OSGRootGroup.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RootGroup
    A group that stores its children not in the parent node but in a 
    sfNodePtr locally with the core.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RootGroup *>::_type("RootGroupPtr", "NodeCorePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RootGroup *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           RootGroup *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           RootGroup *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void RootGroupBase::classDescInserter(TypeObject &oType)
{
}


RootGroupBase::TypeObject RootGroupBase::_type(
    RootGroupBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    RootGroup::initMethod,
    RootGroup::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RootGroup::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"RootGroup\"\n"
    "   parent=\"NodeCore\"\n"
    "   library=\"System\"\n"
    "   structure=\"abstract\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   isNodeCore=\"true\"\n"
    "   docGroupBase=\"GrpSystemNodeCoreGroups\"\n"
    "   >\n"
    "\n"
    "  A group that stores its children not in the parent node but in a \n"
    "  sfNodePtr locally with the core.\n"
    "</FieldContainer>\n",
    "A group that stores its children not in the parent node but in a \n"
    "sfNodePtr locally with the core.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RootGroupBase::getType(void)
{
    return _type;
}

const FieldContainerType &RootGroupBase::getType(void) const
{
    return _type;
}

UInt32 RootGroupBase::getContainerSize(void) const
{
    return sizeof(RootGroup);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 RootGroupBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void RootGroupBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void RootGroupBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}




/*------------------------- constructors ----------------------------------*/

RootGroupBase::RootGroupBase(void) :
    Inherited()
{
}

RootGroupBase::RootGroupBase(const RootGroupBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

RootGroupBase::~RootGroupBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void RootGroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RootGroup *pThis = static_cast<RootGroup *>(this);

    pThis->execSync(static_cast<RootGroup *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void RootGroupBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
