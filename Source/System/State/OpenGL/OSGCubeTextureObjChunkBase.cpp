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
 **     class CubeTextureObjChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECUBETEXTUREOBJCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGImage.h> // PosZImage Class
#include <OSGImage.h> // PosXImage Class
#include <OSGImage.h> // NegXImage Class
#include <OSGImage.h> // PosYImage Class
#include <OSGImage.h> // NegYImage Class

#include "OSGCubeTextureObjChunkBase.h"
#include "OSGCubeTextureObjChunk.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CubeTextureObjChunk
    \ingroup GrpSystemState

    See \ref PageSystemCubeTextureObjChunk for a description.

    The CubeTexture is defined by 6 separate texture images. As it is derived from 
    the standard texture chunk it already has an image, which is used for the 
    negative Z direction. The other 5 images are stored in variables that are named
    according to the direction they represent (osg::CubeTextureObjChunk::_sfPosZImage,
    osg::CubeTextureObjChunk::_sfNegYImage, osg::CubeTextureObjChunk::_sfPosYImage, 
    osg::CubeTextureObjChunk::_sfNegXImage, osg::CubeTextureObjChunk::_sfPosXImage).
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var ImagePtr        CubeTextureObjChunkBase::_sfPosZImage
    The image for the positive Z direction of the cube texture.
*/

/*! \var ImagePtr        CubeTextureObjChunkBase::_sfPosXImage
    The image for the positive X direction of the cube texture.
*/

/*! \var ImagePtr        CubeTextureObjChunkBase::_sfNegXImage
    The image for the negative X direction of the cube texture.
*/

/*! \var ImagePtr        CubeTextureObjChunkBase::_sfPosYImage
    The image for the positive Y direction of the cube texture.
*/

/*! \var ImagePtr        CubeTextureObjChunkBase::_sfNegYImage
    The image for the negative Y direction of the cube texture.
*/

/*! \var bool            CubeTextureObjChunkBase::_sfIsReflectionMap
    
*/


void CubeTextureObjChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "posZImage",
        "The image for the positive Z direction of the cube texture.\n",
        PosZImageFieldId, PosZImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeTextureObjChunkBase::editHandlePosZImage),
        static_cast<FieldGetMethodSig >(&CubeTextureObjChunkBase::getHandlePosZImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "posXImage",
        "The image for the positive X direction of the cube texture.\n",
        PosXImageFieldId, PosXImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeTextureObjChunkBase::editHandlePosXImage),
        static_cast<FieldGetMethodSig >(&CubeTextureObjChunkBase::getHandlePosXImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "negXImage",
        "The image for the negative X direction of the cube texture.\n",
        NegXImageFieldId, NegXImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeTextureObjChunkBase::editHandleNegXImage),
        static_cast<FieldGetMethodSig >(&CubeTextureObjChunkBase::getHandleNegXImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "posYImage",
        "The image for the positive Y direction of the cube texture.\n",
        PosYImageFieldId, PosYImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeTextureObjChunkBase::editHandlePosYImage),
        static_cast<FieldGetMethodSig >(&CubeTextureObjChunkBase::getHandlePosYImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "negYImage",
        "The image for the negative Y direction of the cube texture.\n",
        NegYImageFieldId, NegYImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeTextureObjChunkBase::editHandleNegYImage),
        static_cast<FieldGetMethodSig >(&CubeTextureObjChunkBase::getHandleNegYImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "isReflectionMap",
        "",
        IsReflectionMapFieldId, IsReflectionMapFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&CubeTextureObjChunkBase::editHandleIsReflectionMap),
        static_cast<FieldGetMethodSig >(&CubeTextureObjChunkBase::getHandleIsReflectionMap));

    oType.addInitialDesc(pDesc);
}


CubeTextureObjChunkBase::TypeObject CubeTextureObjChunkBase::_type(
    CubeTextureObjChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &CubeTextureObjChunkBase::createEmptyLocal,
    CubeTextureObjChunk::initMethod,
    CubeTextureObjChunk::exitMethod,
    (InitalInsertDescFunc) &CubeTextureObjChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CubeTextureObjChunk\"\n"
    "\tparent=\"TextureObjChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemCubeTextureObjChunk for a description.\n"
    "\n"
    "The CubeTexture is defined by 6 separate texture images. As it is derived from \n"
    "the standard texture chunk it already has an image, which is used for the \n"
    "negative Z direction. The other 5 images are stored in variables that are named\n"
    "according to the direction they represent (osg::CubeTextureObjChunk::_sfPosZImage,\n"
    "osg::CubeTextureObjChunk::_sfNegYImage, osg::CubeTextureObjChunk::_sfPosYImage, \n"
    "osg::CubeTextureObjChunk::_sfNegXImage, osg::CubeTextureObjChunk::_sfPosXImage).\n"
    "\t<Field\n"
    "\t\tname=\"posZImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the positive Z direction of the cube texture.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"posXImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the positive X direction of the cube texture.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"negXImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the negative X direction of the cube texture.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"posYImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the positive Y direction of the cube texture.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"negYImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the negative Y direction of the cube texture.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"isReflectionMap\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemCubeTextureObjChunk for a description.\n"
    "\n"
    "The CubeTexture is defined by 6 separate texture images. As it is derived from \n"
    "the standard texture chunk it already has an image, which is used for the \n"
    "negative Z direction. The other 5 images are stored in variables that are named\n"
    "according to the direction they represent (osg::CubeTextureObjChunk::_sfPosZImage,\n"
    "osg::CubeTextureObjChunk::_sfNegYImage, osg::CubeTextureObjChunk::_sfPosYImage, \n"
    "osg::CubeTextureObjChunk::_sfNegXImage, osg::CubeTextureObjChunk::_sfPosXImage).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CubeTextureObjChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &CubeTextureObjChunkBase::getType(void) const
{
    return _type;
}

UInt32 CubeTextureObjChunkBase::getContainerSize(void) const
{
    return sizeof(CubeTextureObjChunk);
}

/*------------------------- decorator get ------------------------------*/


//! Get the CubeTextureObjChunk::_sfPosZImage field.
const SFUnrecImagePtr *CubeTextureObjChunkBase::getSFPosZImage(void) const
{
    return &_sfPosZImage;
}

//! Get the CubeTextureObjChunk::_sfPosXImage field.
const SFUnrecImagePtr *CubeTextureObjChunkBase::getSFPosXImage(void) const
{
    return &_sfPosXImage;
}

//! Get the CubeTextureObjChunk::_sfNegXImage field.
const SFUnrecImagePtr *CubeTextureObjChunkBase::getSFNegXImage(void) const
{
    return &_sfNegXImage;
}

//! Get the CubeTextureObjChunk::_sfPosYImage field.
const SFUnrecImagePtr *CubeTextureObjChunkBase::getSFPosYImage(void) const
{
    return &_sfPosYImage;
}

//! Get the CubeTextureObjChunk::_sfNegYImage field.
const SFUnrecImagePtr *CubeTextureObjChunkBase::getSFNegYImage(void) const
{
    return &_sfNegYImage;
}

SFBool *CubeTextureObjChunkBase::editSFIsReflectionMap(void)
{
    editSField(IsReflectionMapFieldMask);

    return &_sfIsReflectionMap;
}

const SFBool *CubeTextureObjChunkBase::getSFIsReflectionMap(void) const
{
    return &_sfIsReflectionMap;
}

#ifdef OSG_1_GET_COMPAT
SFBool              *CubeTextureObjChunkBase::getSFIsReflectionMap(void)
{
    return this->editSFIsReflectionMap();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 CubeTextureObjChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PosZImageFieldMask & whichField))
    {
        returnValue += _sfPosZImage.getBinSize();
    }
    if(FieldBits::NoField != (PosXImageFieldMask & whichField))
    {
        returnValue += _sfPosXImage.getBinSize();
    }
    if(FieldBits::NoField != (NegXImageFieldMask & whichField))
    {
        returnValue += _sfNegXImage.getBinSize();
    }
    if(FieldBits::NoField != (PosYImageFieldMask & whichField))
    {
        returnValue += _sfPosYImage.getBinSize();
    }
    if(FieldBits::NoField != (NegYImageFieldMask & whichField))
    {
        returnValue += _sfNegYImage.getBinSize();
    }
    if(FieldBits::NoField != (IsReflectionMapFieldMask & whichField))
    {
        returnValue += _sfIsReflectionMap.getBinSize();
    }

    return returnValue;
}

void CubeTextureObjChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PosZImageFieldMask & whichField))
    {
        _sfPosZImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PosXImageFieldMask & whichField))
    {
        _sfPosXImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NegXImageFieldMask & whichField))
    {
        _sfNegXImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PosYImageFieldMask & whichField))
    {
        _sfPosYImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NegYImageFieldMask & whichField))
    {
        _sfNegYImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IsReflectionMapFieldMask & whichField))
    {
        _sfIsReflectionMap.copyToBin(pMem);
    }
}

void CubeTextureObjChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PosZImageFieldMask & whichField))
    {
        _sfPosZImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PosXImageFieldMask & whichField))
    {
        _sfPosXImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NegXImageFieldMask & whichField))
    {
        _sfNegXImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PosYImageFieldMask & whichField))
    {
        _sfPosYImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NegYImageFieldMask & whichField))
    {
        _sfNegYImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IsReflectionMapFieldMask & whichField))
    {
        _sfIsReflectionMap.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CubeTextureObjChunkTransitPtr CubeTextureObjChunkBase::create(void)
{
    CubeTextureObjChunkTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CubeTextureObjChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CubeTextureObjChunkTransitPtr CubeTextureObjChunkBase::createLocal(BitVector bFlags)
{
    CubeTextureObjChunkTransitPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CubeTextureObjChunk>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
CubeTextureObjChunkPtr CubeTextureObjChunkBase::createEmpty(void)
{
    CubeTextureObjChunkPtr returnValue;

    newPtr<CubeTextureObjChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

CubeTextureObjChunkPtr CubeTextureObjChunkBase::createEmptyLocal(BitVector bFlags)
{
    CubeTextureObjChunkPtr returnValue;

    newPtr<CubeTextureObjChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CubeTextureObjChunkBase::shallowCopy(void) const
{
    CubeTextureObjChunkPtr tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const CubeTextureObjChunk *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr CubeTextureObjChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CubeTextureObjChunkPtr tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CubeTextureObjChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

CubeTextureObjChunkBase::CubeTextureObjChunkBase(void) :
    Inherited(),
    _sfPosZImage              (NullFC),
    _sfPosXImage              (NullFC),
    _sfNegXImage              (NullFC),
    _sfPosYImage              (NullFC),
    _sfNegYImage              (NullFC),
    _sfIsReflectionMap        (bool(true))
{
}

CubeTextureObjChunkBase::CubeTextureObjChunkBase(const CubeTextureObjChunkBase &source) :
    Inherited(source),
    _sfPosZImage              (NullFC),
    _sfPosXImage              (NullFC),
    _sfNegXImage              (NullFC),
    _sfPosYImage              (NullFC),
    _sfNegYImage              (NullFC),
    _sfIsReflectionMap        (source._sfIsReflectionMap        )
{
}


/*-------------------------- destructors ----------------------------------*/

CubeTextureObjChunkBase::~CubeTextureObjChunkBase(void)
{
}

void CubeTextureObjChunkBase::onCreate(const CubeTextureObjChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setPosZImage(source->getPosZImage());

        this->setPosXImage(source->getPosXImage());

        this->setNegXImage(source->getNegXImage());

        this->setPosYImage(source->getPosYImage());

        this->setNegYImage(source->getNegYImage());
    }
}

GetFieldHandlePtr CubeTextureObjChunkBase::getHandlePosZImage       (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfPosZImage, 
             this->getType().getFieldDesc(PosZImageFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeTextureObjChunkBase::editHandlePosZImage      (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfPosZImage, 
             this->getType().getFieldDesc(PosZImageFieldId)));

    returnValue->setSetMethod(boost::bind(&CubeTextureObjChunk::setPosZImage, 
                                          static_cast<CubeTextureObjChunk *>(this), _1));

    editSField(PosZImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeTextureObjChunkBase::getHandlePosXImage       (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfPosXImage, 
             this->getType().getFieldDesc(PosXImageFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeTextureObjChunkBase::editHandlePosXImage      (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfPosXImage, 
             this->getType().getFieldDesc(PosXImageFieldId)));

    returnValue->setSetMethod(boost::bind(&CubeTextureObjChunk::setPosXImage, 
                                          static_cast<CubeTextureObjChunk *>(this), _1));

    editSField(PosXImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeTextureObjChunkBase::getHandleNegXImage       (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfNegXImage, 
             this->getType().getFieldDesc(NegXImageFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeTextureObjChunkBase::editHandleNegXImage      (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfNegXImage, 
             this->getType().getFieldDesc(NegXImageFieldId)));

    returnValue->setSetMethod(boost::bind(&CubeTextureObjChunk::setNegXImage, 
                                          static_cast<CubeTextureObjChunk *>(this), _1));

    editSField(NegXImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeTextureObjChunkBase::getHandlePosYImage       (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfPosYImage, 
             this->getType().getFieldDesc(PosYImageFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeTextureObjChunkBase::editHandlePosYImage      (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfPosYImage, 
             this->getType().getFieldDesc(PosYImageFieldId)));

    returnValue->setSetMethod(boost::bind(&CubeTextureObjChunk::setPosYImage, 
                                          static_cast<CubeTextureObjChunk *>(this), _1));

    editSField(PosYImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeTextureObjChunkBase::getHandleNegYImage       (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfNegYImage, 
             this->getType().getFieldDesc(NegYImageFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeTextureObjChunkBase::editHandleNegYImage      (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfNegYImage, 
             this->getType().getFieldDesc(NegYImageFieldId)));

    returnValue->setSetMethod(boost::bind(&CubeTextureObjChunk::setNegYImage, 
                                          static_cast<CubeTextureObjChunk *>(this), _1));

    editSField(NegYImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr CubeTextureObjChunkBase::getHandleIsReflectionMap (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfIsReflectionMap, 
             this->getType().getFieldDesc(IsReflectionMapFieldId)));

    return returnValue;
}

EditFieldHandlePtr CubeTextureObjChunkBase::editHandleIsReflectionMap(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfIsReflectionMap, 
             this->getType().getFieldDesc(IsReflectionMapFieldId)));

    editSField(IsReflectionMapFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void CubeTextureObjChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<CubeTextureObjChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr CubeTextureObjChunkBase::createAspectCopy(void) const
{
    CubeTextureObjChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CubeTextureObjChunk *>(this));

    return returnValue;
}
#endif

void CubeTextureObjChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CubeTextureObjChunk *>(this)->setPosZImage(NullFC);

    static_cast<CubeTextureObjChunk *>(this)->setPosXImage(NullFC);

    static_cast<CubeTextureObjChunk *>(this)->setNegXImage(NullFC);

    static_cast<CubeTextureObjChunk *>(this)->setPosYImage(NullFC);

    static_cast<CubeTextureObjChunk *>(this)->setNegYImage(NullFC);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CubeTextureObjChunkPtr>::_type("CubeTextureObjChunkPtr", "TextureObjChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CubeTextureObjChunkPtr)

OSG_EXPORT_PTR_SFIELD_FULL(FieldContainerPtrSField, 
                           CubeTextureObjChunkPtr, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(FieldContainerPtrMField, 
                           CubeTextureObjChunkPtr, 
                           0);

OSG_END_NAMESPACE
