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
 **     class GrabForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGRABFOREGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGImage.h> // Image Class

#include "OSGGrabForegroundBase.h"
#include "OSGGrabForeground.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GrabForeground
    \ingroup GrpSystemWindowForegrounds

    The GrabForeground is used for grabbing a rendered viewport into an Image.
    See \ref PageSystemWindowForegroundGrab for a description.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var ImagePtr        GrabForegroundBase::_sfImage
    The image to write to.
*/

/*! \var bool            GrabForegroundBase::_sfAutoResize
    Automatically resize the image when the viewport size changes.
*/


void GrabForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "image",
        "The image to write to.\n",
        ImageFieldId, ImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GrabForegroundBase::editHandleImage),
        static_cast<FieldGetMethodSig >(&GrabForegroundBase::getHandleImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "autoResize",
        "Automatically resize the image when the viewport size changes.\n",
        AutoResizeFieldId, AutoResizeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GrabForegroundBase::editHandleAutoResize),
        static_cast<FieldGetMethodSig >(&GrabForegroundBase::getHandleAutoResize));

    oType.addInitialDesc(pDesc);
}


GrabForegroundBase::TypeObject GrabForegroundBase::_type(
    GrabForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &GrabForegroundBase::createEmptyLocal,
    GrabForeground::initMethod,
    GrabForeground::exitMethod,
    (InitalInsertDescFunc) &GrabForegroundBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GrabForeground\"\n"
    "\tparent=\"Foreground\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "The GrabForeground is used for grabbing a rendered viewport into an Image.\n"
    "See \\ref PageSystemWindowForegroundGrab for a description.\n"
    "\t<Field\n"
    "\t\tname=\"image\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image to write to.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"autoResize\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tAutomatically resize the image when the viewport size changes.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowForegrounds\n"
    "\n"
    "The GrabForeground is used for grabbing a rendered viewport into an Image.\n"
    "See \\ref PageSystemWindowForegroundGrab for a description.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GrabForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &GrabForegroundBase::getType(void) const
{
    return _type;
}

UInt32 GrabForegroundBase::getContainerSize(void) const
{
    return sizeof(GrabForeground);
}

/*------------------------- decorator get ------------------------------*/


//! Get the GrabForeground::_sfImage field.
const SFUnrecImagePtr *GrabForegroundBase::getSFImage(void) const
{
    return &_sfImage;
}

SFBool *GrabForegroundBase::editSFAutoResize(void)
{
    editSField(AutoResizeFieldMask);

    return &_sfAutoResize;
}

const SFBool *GrabForegroundBase::getSFAutoResize(void) const
{
    return &_sfAutoResize;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *GrabForegroundBase::getSFAutoResize     (void)
{
    return this->editSFAutoResize     ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 GrabForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        returnValue += _sfImage.getBinSize();
    }
    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        returnValue += _sfAutoResize.getBinSize();
    }

    return returnValue;
}

void GrabForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        _sfImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        _sfAutoResize.copyToBin(pMem);
    }
}

void GrabForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        _sfImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
    {
        _sfAutoResize.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GrabForegroundTransitPtr GrabForegroundBase::create(void)
{
    GrabForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GrabForeground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GrabForegroundTransitPtr GrabForegroundBase::createLocal(BitVector bFlags)
{
    GrabForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GrabForeground>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
GrabForegroundPtr GrabForegroundBase::createEmpty(void)
{
    GrabForegroundPtr returnValue;

    newPtr<GrabForeground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

GrabForegroundPtr GrabForegroundBase::createEmptyLocal(BitVector bFlags)
{
    GrabForegroundPtr returnValue;

    newPtr<GrabForeground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GrabForegroundBase::shallowCopy(void) const
{
    GrabForegroundPtr tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const GrabForeground *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr GrabForegroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GrabForegroundPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GrabForeground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

GrabForegroundBase::GrabForegroundBase(void) :
    Inherited(),
    _sfImage                  (NullFC),
    _sfAutoResize             (bool(false))
{
}

GrabForegroundBase::GrabForegroundBase(const GrabForegroundBase &source) :
    Inherited(source),
    _sfImage                  (NullFC),
    _sfAutoResize             (source._sfAutoResize             )
{
}


/*-------------------------- destructors ----------------------------------*/

GrabForegroundBase::~GrabForegroundBase(void)
{
}

void GrabForegroundBase::onCreate(const GrabForeground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setImage(source->getImage());
    }
}

GetFieldHandlePtr GrabForegroundBase::getHandleImage           (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfImage, 
             this->getType().getFieldDesc(ImageFieldId)));

    return returnValue;
}

EditFieldHandlePtr GrabForegroundBase::editHandleImage          (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfImage, 
             this->getType().getFieldDesc(ImageFieldId)));

    returnValue->setSetMethod(boost::bind(&GrabForeground::setImage, 
                                          static_cast<GrabForeground *>(this), _1));

    editSField(ImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr GrabForegroundBase::getHandleAutoResize      (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfAutoResize, 
             this->getType().getFieldDesc(AutoResizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr GrabForegroundBase::editHandleAutoResize     (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfAutoResize, 
             this->getType().getFieldDesc(AutoResizeFieldId)));

    editSField(AutoResizeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void GrabForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GrabForegroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr GrabForegroundBase::createAspectCopy(void) const
{
    GrabForegroundPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GrabForeground *>(this));

    return returnValue;
}
#endif

void GrabForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<GrabForeground *>(this)->setImage(NullFC);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GrabForegroundPtr>::_type("GrabForegroundPtr", "ForegroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GrabForegroundPtr)

OSG_EXPORT_PTR_SFIELD_FULL(FieldContainerPtrSField, 
                           GrabForegroundPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(FieldContainerPtrMField, 
                           GrabForegroundPtr, 
                           0);

OSG_END_NAMESPACE
