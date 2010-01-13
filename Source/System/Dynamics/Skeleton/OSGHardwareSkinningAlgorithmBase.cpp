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
 **     class HardwareSkinningAlgorithm!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGShaderProgramVariableChunk.h" // ShaderData Class

#include "OSGHardwareSkinningAlgorithmBase.h"
#include "OSGHardwareSkinningAlgorithm.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::HardwareSkinningAlgorithm
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ShaderProgramVariableChunk * HardwareSkinningAlgorithmBase::_sfShaderData
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<HardwareSkinningAlgorithm *>::_type("HardwareSkinningAlgorithmPtr", "SkinningAlgorithmPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(HardwareSkinningAlgorithm *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           HardwareSkinningAlgorithm *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           HardwareSkinningAlgorithm *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void HardwareSkinningAlgorithmBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecShaderProgramVariableChunkPtr::Description(
        SFUnrecShaderProgramVariableChunkPtr::getClassType(),
        "shaderData",
        "",
        ShaderDataFieldId, ShaderDataFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&HardwareSkinningAlgorithm::editHandleShaderData),
        static_cast<FieldGetMethodSig >(&HardwareSkinningAlgorithm::getHandleShaderData));

    oType.addInitialDesc(pDesc);
}


HardwareSkinningAlgorithmBase::TypeObject HardwareSkinningAlgorithmBase::_type(
    HardwareSkinningAlgorithmBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&HardwareSkinningAlgorithmBase::createEmptyLocal),
    HardwareSkinningAlgorithm::initMethod,
    HardwareSkinningAlgorithm::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&HardwareSkinningAlgorithm::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"HardwareSkinningAlgorithm\"\n"
    "   parent=\"SkinningAlgorithm\"\n"
    "   library=\"Dynamics\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   childFields=\"none\"\n"
    "   parentFields=\"none\"\n"
    ">\n"
    "  <Field\n"
    "     name=\"shaderData\"\n"
    "     type=\"ShaderProgramVariableChunk\"\n"
    "     category=\"pointer\"\n"
    "     cardinality=\"single\"\n"
    "     visibility=\"external\"\n"
    "     access=\"public\"\n"
    "     defaultValue=\"NULL\"\n"
    "     >\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &HardwareSkinningAlgorithmBase::getType(void)
{
    return _type;
}

const FieldContainerType &HardwareSkinningAlgorithmBase::getType(void) const
{
    return _type;
}

UInt32 HardwareSkinningAlgorithmBase::getContainerSize(void) const
{
    return sizeof(HardwareSkinningAlgorithm);
}

/*------------------------- decorator get ------------------------------*/


//! Get the HardwareSkinningAlgorithm::_sfShaderData field.
const SFUnrecShaderProgramVariableChunkPtr *HardwareSkinningAlgorithmBase::getSFShaderData(void) const
{
    return &_sfShaderData;
}

SFUnrecShaderProgramVariableChunkPtr *HardwareSkinningAlgorithmBase::editSFShaderData     (void)
{
    editSField(ShaderDataFieldMask);

    return &_sfShaderData;
}





/*------------------------------ access -----------------------------------*/

UInt32 HardwareSkinningAlgorithmBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ShaderDataFieldMask & whichField))
    {
        returnValue += _sfShaderData.getBinSize();
    }

    return returnValue;
}

void HardwareSkinningAlgorithmBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ShaderDataFieldMask & whichField))
    {
        _sfShaderData.copyToBin(pMem);
    }
}

void HardwareSkinningAlgorithmBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ShaderDataFieldMask & whichField))
    {
        _sfShaderData.copyFromBin(pMem);
    }
}

//! create a new instance of the class
HardwareSkinningAlgorithmTransitPtr HardwareSkinningAlgorithmBase::createLocal(BitVector bFlags)
{
    HardwareSkinningAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<HardwareSkinningAlgorithm>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
HardwareSkinningAlgorithmTransitPtr HardwareSkinningAlgorithmBase::createDependent(BitVector bFlags)
{
    HardwareSkinningAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<HardwareSkinningAlgorithm>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
HardwareSkinningAlgorithmTransitPtr HardwareSkinningAlgorithmBase::create(void)
{
    HardwareSkinningAlgorithmTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<HardwareSkinningAlgorithm>(tmpPtr);
    }

    return fc;
}

HardwareSkinningAlgorithm *HardwareSkinningAlgorithmBase::createEmptyLocal(BitVector bFlags)
{
    HardwareSkinningAlgorithm *returnValue;

    newPtr<HardwareSkinningAlgorithm>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
HardwareSkinningAlgorithm *HardwareSkinningAlgorithmBase::createEmpty(void)
{
    HardwareSkinningAlgorithm *returnValue;

    newPtr<HardwareSkinningAlgorithm>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr HardwareSkinningAlgorithmBase::shallowCopyLocal(
    BitVector bFlags) const
{
    HardwareSkinningAlgorithm *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const HardwareSkinningAlgorithm *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr HardwareSkinningAlgorithmBase::shallowCopyDependent(
    BitVector bFlags) const
{
    HardwareSkinningAlgorithm *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const HardwareSkinningAlgorithm *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr HardwareSkinningAlgorithmBase::shallowCopy(void) const
{
    HardwareSkinningAlgorithm *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const HardwareSkinningAlgorithm *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

HardwareSkinningAlgorithmBase::HardwareSkinningAlgorithmBase(void) :
    Inherited(),
    _sfShaderData             (NULL)
{
}

HardwareSkinningAlgorithmBase::HardwareSkinningAlgorithmBase(const HardwareSkinningAlgorithmBase &source) :
    Inherited(source),
    _sfShaderData             (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

HardwareSkinningAlgorithmBase::~HardwareSkinningAlgorithmBase(void)
{
}

void HardwareSkinningAlgorithmBase::onCreate(const HardwareSkinningAlgorithm *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        HardwareSkinningAlgorithm *pThis = static_cast<HardwareSkinningAlgorithm *>(this);

        pThis->setShaderData(source->getShaderData());
    }
}

GetFieldHandlePtr HardwareSkinningAlgorithmBase::getHandleShaderData      (void) const
{
    SFUnrecShaderProgramVariableChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecShaderProgramVariableChunkPtr::GetHandle(
             &_sfShaderData,
             this->getType().getFieldDesc(ShaderDataFieldId),
             const_cast<HardwareSkinningAlgorithmBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr HardwareSkinningAlgorithmBase::editHandleShaderData     (void)
{
    SFUnrecShaderProgramVariableChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecShaderProgramVariableChunkPtr::EditHandle(
             &_sfShaderData,
             this->getType().getFieldDesc(ShaderDataFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&HardwareSkinningAlgorithm::setShaderData,
                    static_cast<HardwareSkinningAlgorithm *>(this), _1));

    editSField(ShaderDataFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void HardwareSkinningAlgorithmBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    HardwareSkinningAlgorithm *pThis = static_cast<HardwareSkinningAlgorithm *>(this);

    pThis->execSync(static_cast<HardwareSkinningAlgorithm *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *HardwareSkinningAlgorithmBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    HardwareSkinningAlgorithm *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const HardwareSkinningAlgorithm *>(pRefAspect),
                  dynamic_cast<const HardwareSkinningAlgorithm *>(this));

    return returnValue;
}
#endif

void HardwareSkinningAlgorithmBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<HardwareSkinningAlgorithm *>(this)->setShaderData(NULL);


}


OSG_END_NAMESPACE
