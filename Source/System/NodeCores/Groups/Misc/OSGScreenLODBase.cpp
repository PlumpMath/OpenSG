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
 **     class ScreenLOD!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESCREENLODINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGScreenLODBase.h"
#include "OSGScreenLOD.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ScreenLOD
    A ScreenLOD node enables smart LOD selection based on screen size.  It must be used in combination with 
    the RenderTraversal Action.

    See Ref:ScreenLOD
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          ScreenLODBase::_mfCoverageOverride
    A list of percentages to override the default LOD behavior.  These percentages are used
    to determine which lod to use based on screen size percentage.  If the percentage covered by
    the node bounding volume is less then entry 0, we use child 0.  If is is greater then entry 0
    less then entry 1, then we use child 1 and so on.
    Ex: [0.05, 0.01, 0.001]
*/


void ScreenLODBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFReal32::Description(
        MFReal32::getClassType(),
        "coverageOverride",
        "A list of percentages to override the default LOD behavior.  These percentages are used\n"
        "to determine which lod to use based on screen size percentage.  If the percentage covered by\n"
        "the node bounding volume is less then entry 0, we use child 0.  If is is greater then entry 0\n"
        "less then entry 1, then we use child 1 and so on.\n"
        "Ex: [0.05, 0.01, 0.001]\n",
        CoverageOverrideFieldId, CoverageOverrideFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ScreenLODBase::editHandleCoverageOverride),
        static_cast<FieldGetMethodSig >(&ScreenLODBase::getHandleCoverageOverride));

    oType.addInitialDesc(pDesc);
}


ScreenLODBase::TypeObject ScreenLODBase::_type(
    ScreenLODBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ScreenLODBase::createEmptyLocal,
    ScreenLOD::initMethod,
    ScreenLOD::exitMethod,
    (InitalInsertDescFunc) &ScreenLODBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ScreenLOD\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "        isNodeCore=\"true\"\n"
    ">\n"
    "A ScreenLOD node enables smart LOD selection based on screen size.  It must be used in combination with \n"
    "the RenderTraversal Action.\n"
    "\n"
    "See Ref:ScreenLOD\n"
    "\t<Field\n"
    "\t\tname=\"coverageOverride\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tA list of percentages to override the default LOD behavior.  These percentages are used\n"
    "       to determine which lod to use based on screen size percentage.  If the percentage covered by\n"
    "       the node bounding volume is less then entry 0, we use child 0.  If is is greater then entry 0\n"
    "       less then entry 1, then we use child 1 and so on.\n"
    "       Ex: [0.05, 0.01, 0.001]\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A ScreenLOD node enables smart LOD selection based on screen size.  It must be used in combination with \n"
    "the RenderTraversal Action.\n"
    "\n"
    "See Ref:ScreenLOD\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ScreenLODBase::getType(void)
{
    return _type;
}

const FieldContainerType &ScreenLODBase::getType(void) const
{
    return _type;
}

UInt32 ScreenLODBase::getContainerSize(void) const
{
    return sizeof(ScreenLOD);
}

/*------------------------- decorator get ------------------------------*/


MFReal32 *ScreenLODBase::editMFCoverageOverride(void)
{
    editMField(CoverageOverrideFieldMask, _mfCoverageOverride);

    return &_mfCoverageOverride;
}

const MFReal32 *ScreenLODBase::getMFCoverageOverride(void) const
{
    return &_mfCoverageOverride;
}

#ifdef OSG_1_GET_COMPAT
MFReal32            *ScreenLODBase::getMFCoverageOverride(void)
{
    return this->editMFCoverageOverride();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ScreenLODBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CoverageOverrideFieldMask & whichField))
    {
        returnValue += _mfCoverageOverride.getBinSize();
    }

    return returnValue;
}

void ScreenLODBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CoverageOverrideFieldMask & whichField))
    {
        _mfCoverageOverride.copyToBin(pMem);
    }
}

void ScreenLODBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CoverageOverrideFieldMask & whichField))
    {
        _mfCoverageOverride.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ScreenLODTransitPtr ScreenLODBase::create(void)
{
    ScreenLODTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ScreenLOD>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ScreenLODTransitPtr ScreenLODBase::createLocal(BitVector bFlags)
{
    ScreenLODTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ScreenLOD>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ScreenLOD *ScreenLODBase::createEmpty(void)
{
    ScreenLOD *returnValue;

    newPtr<ScreenLOD>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

ScreenLOD *ScreenLODBase::createEmptyLocal(BitVector bFlags)
{
    ScreenLOD *returnValue;

    newPtr<ScreenLOD>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ScreenLODBase::shallowCopy(void) const
{
    ScreenLOD *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const ScreenLOD *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr ScreenLODBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ScreenLOD *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ScreenLOD *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ScreenLODBase::ScreenLODBase(void) :
    Inherited(),
    _mfCoverageOverride       ()
{
}

ScreenLODBase::ScreenLODBase(const ScreenLODBase &source) :
    Inherited(source),
    _mfCoverageOverride       (source._mfCoverageOverride       )
{
}


/*-------------------------- destructors ----------------------------------*/

ScreenLODBase::~ScreenLODBase(void)
{
}


GetFieldHandlePtr ScreenLODBase::getHandleCoverageOverride (void) const
{
    MFReal32::GetHandlePtr returnValue(
        new  MFReal32::GetHandle(
             &_mfCoverageOverride, 
             this->getType().getFieldDesc(CoverageOverrideFieldId)));

    return returnValue;
}

EditFieldHandlePtr ScreenLODBase::editHandleCoverageOverride(void)
{
    MFReal32::EditHandlePtr returnValue(
        new  MFReal32::EditHandle(
             &_mfCoverageOverride, 
             this->getType().getFieldDesc(CoverageOverrideFieldId)));

    editMField(CoverageOverrideFieldMask, _mfCoverageOverride);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ScreenLODBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ScreenLODBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ScreenLODBase::createAspectCopy(void) const
{
    ScreenLOD *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ScreenLOD *>(this));

    return returnValue;
}
#endif

void ScreenLODBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfCoverageOverride.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ScreenLOD *>::_type("ScreenLODPtr", "GroupPtr");
#endif


OSG_END_NAMESPACE
