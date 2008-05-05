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
 **     class ShearedStereoCameraDecorator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHEAREDSTEREOCAMERADECORATORINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShearedStereoCameraDecoratorBase.h"
#include "OSGShearedStereoCameraDecorator.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShearedStereoCameraDecorator
    \ingroup GrpSystemWindowCameraDecorators

    The OSG::CameraDecorator for standard sheared stereo projections, see \ref
    PageSystemWindowCameraDecoratorsStereoSheared for a description.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          ShearedStereoCameraDecoratorBase::_sfZeroParallaxDistance
    The distance to the zero parallax plane.
*/

/*! \var Real32          ShearedStereoCameraDecoratorBase::_sfOverlap
    The overlap between left and right eye.
*/


void ShearedStereoCameraDecoratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "zeroParallaxDistance",
        "The distance to the zero parallax plane.\n",
        ZeroParallaxDistanceFieldId, ZeroParallaxDistanceFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShearedStereoCameraDecoratorBase::editHandleZeroParallaxDistance),
        static_cast<FieldGetMethodSig >(&ShearedStereoCameraDecoratorBase::getHandleZeroParallaxDistance));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "overlap",
        "The overlap between left and right eye.\n",
        OverlapFieldId, OverlapFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&ShearedStereoCameraDecoratorBase::editHandleOverlap),
        static_cast<FieldGetMethodSig >(&ShearedStereoCameraDecoratorBase::getHandleOverlap));

    oType.addInitialDesc(pDesc);
}


ShearedStereoCameraDecoratorBase::TypeObject ShearedStereoCameraDecoratorBase::_type(
    ShearedStereoCameraDecoratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ShearedStereoCameraDecoratorBase::createEmptyLocal,
    ShearedStereoCameraDecorator::initMethod,
    ShearedStereoCameraDecorator::exitMethod,
    (InitalInsertDescFunc) &ShearedStereoCameraDecoratorBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShearedStereoCameraDecorator\"\n"
    "\tparent=\"StereoCameraDecorator\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowCameraDecorators\n"
    "\n"
    "The OSG::CameraDecorator for standard sheared stereo projections, see \\ref\n"
    "PageSystemWindowCameraDecoratorsStereoSheared for a description.\n"
    "\t<Field\n"
    "\t\tname=\"zeroParallaxDistance\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe distance to the zero parallax plane.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"overlap\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe overlap between left and right eye.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowCameraDecorators\n"
    "\n"
    "The OSG::CameraDecorator for standard sheared stereo projections, see \\ref\n"
    "PageSystemWindowCameraDecoratorsStereoSheared for a description.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShearedStereoCameraDecoratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShearedStereoCameraDecoratorBase::getType(void) const
{
    return _type;
}

UInt32 ShearedStereoCameraDecoratorBase::getContainerSize(void) const
{
    return sizeof(ShearedStereoCameraDecorator);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *ShearedStereoCameraDecoratorBase::editSFZeroParallaxDistance(void)
{
    editSField(ZeroParallaxDistanceFieldMask);

    return &_sfZeroParallaxDistance;
}

const SFReal32 *ShearedStereoCameraDecoratorBase::getSFZeroParallaxDistance(void) const
{
    return &_sfZeroParallaxDistance;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *ShearedStereoCameraDecoratorBase::getSFZeroParallaxDistance(void)
{
    return this->editSFZeroParallaxDistance();
}
#endif

SFReal32 *ShearedStereoCameraDecoratorBase::editSFOverlap(void)
{
    editSField(OverlapFieldMask);

    return &_sfOverlap;
}

const SFReal32 *ShearedStereoCameraDecoratorBase::getSFOverlap(void) const
{
    return &_sfOverlap;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *ShearedStereoCameraDecoratorBase::getSFOverlap        (void)
{
    return this->editSFOverlap        ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ShearedStereoCameraDecoratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ZeroParallaxDistanceFieldMask & whichField))
    {
        returnValue += _sfZeroParallaxDistance.getBinSize();
    }
    if(FieldBits::NoField != (OverlapFieldMask & whichField))
    {
        returnValue += _sfOverlap.getBinSize();
    }

    return returnValue;
}

void ShearedStereoCameraDecoratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ZeroParallaxDistanceFieldMask & whichField))
    {
        _sfZeroParallaxDistance.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OverlapFieldMask & whichField))
    {
        _sfOverlap.copyToBin(pMem);
    }
}

void ShearedStereoCameraDecoratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ZeroParallaxDistanceFieldMask & whichField))
    {
        _sfZeroParallaxDistance.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OverlapFieldMask & whichField))
    {
        _sfOverlap.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShearedStereoCameraDecoratorTransitPtr ShearedStereoCameraDecoratorBase::create(void)
{
    ShearedStereoCameraDecoratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShearedStereoCameraDecorator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShearedStereoCameraDecoratorTransitPtr ShearedStereoCameraDecoratorBase::createLocal(BitVector bFlags)
{
    ShearedStereoCameraDecoratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShearedStereoCameraDecorator>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
ShearedStereoCameraDecorator *ShearedStereoCameraDecoratorBase::createEmpty(void)
{
    ShearedStereoCameraDecorator *returnValue;

    newPtr<ShearedStereoCameraDecorator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

ShearedStereoCameraDecorator *ShearedStereoCameraDecoratorBase::createEmptyLocal(BitVector bFlags)
{
    ShearedStereoCameraDecorator *returnValue;

    newPtr<ShearedStereoCameraDecorator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShearedStereoCameraDecoratorBase::shallowCopy(void) const
{
    ShearedStereoCameraDecorator *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const ShearedStereoCameraDecorator *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr ShearedStereoCameraDecoratorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShearedStereoCameraDecorator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShearedStereoCameraDecorator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ShearedStereoCameraDecoratorBase::ShearedStereoCameraDecoratorBase(void) :
    Inherited(),
    _sfZeroParallaxDistance   (Real32(1)),
    _sfOverlap                (Real32(1))
{
}

ShearedStereoCameraDecoratorBase::ShearedStereoCameraDecoratorBase(const ShearedStereoCameraDecoratorBase &source) :
    Inherited(source),
    _sfZeroParallaxDistance   (source._sfZeroParallaxDistance   ),
    _sfOverlap                (source._sfOverlap                )
{
}


/*-------------------------- destructors ----------------------------------*/

ShearedStereoCameraDecoratorBase::~ShearedStereoCameraDecoratorBase(void)
{
}


GetFieldHandlePtr ShearedStereoCameraDecoratorBase::getHandleZeroParallaxDistance (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfZeroParallaxDistance, 
             this->getType().getFieldDesc(ZeroParallaxDistanceFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShearedStereoCameraDecoratorBase::editHandleZeroParallaxDistance(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfZeroParallaxDistance, 
             this->getType().getFieldDesc(ZeroParallaxDistanceFieldId)));

    editSField(ZeroParallaxDistanceFieldMask);

    return returnValue;
}

GetFieldHandlePtr ShearedStereoCameraDecoratorBase::getHandleOverlap         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfOverlap, 
             this->getType().getFieldDesc(OverlapFieldId)));

    return returnValue;
}

EditFieldHandlePtr ShearedStereoCameraDecoratorBase::editHandleOverlap        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfOverlap, 
             this->getType().getFieldDesc(OverlapFieldId)));

    editSField(OverlapFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShearedStereoCameraDecoratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShearedStereoCameraDecoratorBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShearedStereoCameraDecoratorBase::createAspectCopy(void) const
{
    ShearedStereoCameraDecorator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShearedStereoCameraDecorator *>(this));

    return returnValue;
}
#endif

void ShearedStereoCameraDecoratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShearedStereoCameraDecorator *>::_type("ShearedStereoCameraDecoratorPtr", "StereoCameraDecoratorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShearedStereoCameraDecorator *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           ShearedStereoCameraDecorator *, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           ShearedStereoCameraDecorator *, 
                           0);

OSG_END_NAMESPACE
