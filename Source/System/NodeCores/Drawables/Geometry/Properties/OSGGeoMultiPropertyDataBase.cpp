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
 **     class GeoMultiPropertyData!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGEOMULTIPROPERTYDATAINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGGeoMultiPropertyDataBase.h"
#include "OSGGeoMultiPropertyData.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GeoMultiPropertyData
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var UInt8           GeoMultiPropertyDataBase::_mfIData
    The data for the multi-properties.
*/

/*! \var UInt32          GeoMultiPropertyDataBase::_sfGLId
    The internal GL object id for the VBO, if used.
*/


void GeoMultiPropertyDataBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUInt8::Description(
        MFUInt8::getClassType(),
        "iData",
        "The data for the multi-properties.\n",
        IDataFieldId, IDataFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast<FieldEditMethodSig>(&GeoMultiPropertyDataBase::editHandleIData),
        static_cast<FieldGetMethodSig >(&GeoMultiPropertyDataBase::getHandleIData));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "GLId",
        "The internal GL object id for the VBO, if used.\n",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&GeoMultiPropertyDataBase::editHandleGLId),
        static_cast<FieldGetMethodSig >(&GeoMultiPropertyDataBase::getHandleGLId));

    oType.addInitialDesc(pDesc);
}


GeoMultiPropertyDataBase::TypeObject GeoMultiPropertyDataBase::_type(
    GeoMultiPropertyDataBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &GeoMultiPropertyDataBase::createEmptyLocal,
    GeoMultiPropertyData::initMethod,
    GeoMultiPropertyData::exitMethod,
    (InitalInsertDescFunc) &GeoMultiPropertyDataBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GeoMultiPropertyData\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"Drawable\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"iData\"\n"
    "\t\ttype=\"UInt8\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe data for the multi-properties.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"GLId\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "                defaultValue=\"0\"\n"
    "\t\tfieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\tThe internal GL object id for the VBO, if used.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoMultiPropertyDataBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeoMultiPropertyDataBase::getType(void) const
{
    return _type;
}

UInt32 GeoMultiPropertyDataBase::getContainerSize(void) const
{
    return sizeof(GeoMultiPropertyData);
}

/*------------------------- decorator get ------------------------------*/


MFUInt8 *GeoMultiPropertyDataBase::editMFIData(void)
{
    editMField(IDataFieldMask, _mfIData);

    return &_mfIData;
}

const MFUInt8 *GeoMultiPropertyDataBase::getMFIData(void) const
{
    return &_mfIData;
}

#ifdef OSG_1_GET_COMPAT
MFUInt8             *GeoMultiPropertyDataBase::getMFIData          (void)
{
    return this->editMFIData          ();
}
#endif

SFUInt32 *GeoMultiPropertyDataBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFUInt32 *GeoMultiPropertyDataBase::getSFGLId(void) const
{
    return &_sfGLId;
}

#ifdef OSG_1_GET_COMPAT
SFUInt32            *GeoMultiPropertyDataBase::getSFGLId           (void)
{
    return this->editSFGLId           ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 GeoMultiPropertyDataBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (IDataFieldMask & whichField))
    {
        returnValue += _mfIData.getBinSize();
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }

    return returnValue;
}

void GeoMultiPropertyDataBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (IDataFieldMask & whichField))
    {
        _mfIData.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
}

void GeoMultiPropertyDataBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (IDataFieldMask & whichField))
    {
        _mfIData.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GeoMultiPropertyDataTransitPtr GeoMultiPropertyDataBase::create(void)
{
    GeoMultiPropertyDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GeoMultiPropertyData>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GeoMultiPropertyDataTransitPtr GeoMultiPropertyDataBase::createLocal(BitVector bFlags)
{
    GeoMultiPropertyDataTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GeoMultiPropertyData>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
GeoMultiPropertyData *GeoMultiPropertyDataBase::createEmpty(void)
{
    GeoMultiPropertyData *returnValue;

    newPtr<GeoMultiPropertyData>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

GeoMultiPropertyData *GeoMultiPropertyDataBase::createEmptyLocal(BitVector bFlags)
{
    GeoMultiPropertyData *returnValue;

    newPtr<GeoMultiPropertyData>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GeoMultiPropertyDataBase::shallowCopy(void) const
{
    GeoMultiPropertyData *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const GeoMultiPropertyData *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr GeoMultiPropertyDataBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GeoMultiPropertyData *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GeoMultiPropertyData *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

GeoMultiPropertyDataBase::GeoMultiPropertyDataBase(void) :
    Inherited(),
    _mfIData                  (),
    _sfGLId                   (UInt32(0))
{
}

GeoMultiPropertyDataBase::GeoMultiPropertyDataBase(const GeoMultiPropertyDataBase &source) :
    Inherited(source),
    _mfIData                  (source._mfIData                  ),
    _sfGLId                   (source._sfGLId                   )
{
}


/*-------------------------- destructors ----------------------------------*/

GeoMultiPropertyDataBase::~GeoMultiPropertyDataBase(void)
{
}


GetFieldHandlePtr GeoMultiPropertyDataBase::getHandleIData           (void) const
{
    MFUInt8::GetHandlePtr returnValue(
        new  MFUInt8::GetHandle(
             &_mfIData, 
             this->getType().getFieldDesc(IDataFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeoMultiPropertyDataBase::editHandleIData          (void)
{
    MFUInt8::EditHandlePtr returnValue(
        new  MFUInt8::EditHandle(
             &_mfIData, 
             this->getType().getFieldDesc(IDataFieldId)));

    editMField(IDataFieldMask, _mfIData);

    return returnValue;
}

GetFieldHandlePtr GeoMultiPropertyDataBase::getHandleGLId            (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfGLId, 
             this->getType().getFieldDesc(GLIdFieldId)));

    return returnValue;
}

EditFieldHandlePtr GeoMultiPropertyDataBase::editHandleGLId           (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfGLId, 
             this->getType().getFieldDesc(GLIdFieldId)));

    editSField(GLIdFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void GeoMultiPropertyDataBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<GeoMultiPropertyDataBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GeoMultiPropertyDataBase::createAspectCopy(void) const
{
    GeoMultiPropertyData *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GeoMultiPropertyData *>(this));

    return returnValue;
}
#endif

void GeoMultiPropertyDataBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfIData.terminateShare(Thread::getCurrentAspect(), 
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GeoMultiPropertyData *>::_type("GeoMultiPropertyDataPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GeoMultiPropertyData *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           GeoMultiPropertyData *, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           GeoMultiPropertyData *, 
                           0);

OSG_END_NAMESPACE
