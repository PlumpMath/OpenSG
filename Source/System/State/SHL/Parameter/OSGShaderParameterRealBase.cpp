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
 **     class ShaderParameterReal!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERPARAMETERREALINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderParameterRealBase.h"
#include "OSGShaderParameterReal.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderParameterReal
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          ShaderParameterRealBase::_sfValue
    parameter value
*/


void ShaderParameterRealBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_GET_COMPAT
    typedef const SFReal32 *(ShaderParameterRealBase::*GetSFValueF)(void) const;

    GetSFValueF GetSFValue = &ShaderParameterRealBase::getSFValue;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "value",
        "parameter value\n",
        ValueFieldId, ValueFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShaderParameterRealBase::editSFValue),
#ifdef OSG_1_GET_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFValue));
#else
        reinterpret_cast<FieldGetMethodSig >(&ShaderParameterRealBase::getSFValue));
#endif

    oType.addInitialDesc(pDesc);
}


ShaderParameterRealBase::TypeObject ShaderParameterRealBase::_type(
    ShaderParameterRealBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ShaderParameterRealBase::createEmpty,
    ShaderParameterReal::initMethod,
    (InitalInsertDescFunc) &ShaderParameterRealBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderParameterReal\"\n"
    "\tparent=\"ShaderParameter\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"value\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tparameter value\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderParameterRealBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderParameterRealBase::getType(void) const
{
    return _type;
}

UInt32 ShaderParameterRealBase::getContainerSize(void) const
{
    return sizeof(ShaderParameterReal);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *ShaderParameterRealBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFReal32 *ShaderParameterRealBase::getSFValue(void) const
{
    return &_sfValue;
}

#ifdef OSG_1_GET_COMPAT
SFReal32            *ShaderParameterRealBase::getSFValue          (void)
{
    return this->editSFValue          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ShaderParameterRealBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void ShaderParameterRealBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void ShaderParameterRealBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
ShaderParameterRealPtr ShaderParameterRealBase::createEmpty(void)
{
    ShaderParameterRealPtr returnValue;

    newPtr<ShaderParameterReal>(returnValue);

    return returnValue;
}

FieldContainerPtr ShaderParameterRealBase::shallowCopy(void) const
{
    ShaderParameterRealPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ShaderParameterReal *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ShaderParameterRealBase::ShaderParameterRealBase(void) :
    Inherited(),
    _sfValue                  ()
{
}

ShaderParameterRealBase::ShaderParameterRealBase(const ShaderParameterRealBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  )
{
}

/*-------------------------- destructors ----------------------------------*/

ShaderParameterRealBase::~ShaderParameterRealBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void ShaderParameterRealBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ShaderParameterRealBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ShaderParameterRealBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderParameterRealBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ShaderParameterRealBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ShaderParameterRealBase::createAspectCopy(void) const
{
    ShaderParameterRealPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderParameterReal *>(this));

    return returnValue;
}
#endif

void ShaderParameterRealBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderParameterRealPtr>::_type("ShaderParameterRealPtr", "ShaderParameterPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderParameterRealPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ShaderParameterRealPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ShaderParameterRealPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
