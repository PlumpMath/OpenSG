/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class ShaderParameterVec3f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderParameterVec3fBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShaderParameterVec3fBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShaderParameterVec3fBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ShaderParameterVec3f::_sfValue field.

inline
Vec3f &ShaderParameterVec3fBase::editValue(void)
{
    editSField(ValueFieldMask);

    return _sfValue.getValue();
}

//! Get the value of the ShaderParameterVec3f::_sfValue field.
inline
const Vec3f &ShaderParameterVec3fBase::getValue(void) const
{
    return _sfValue.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
Vec3f               &ShaderParameterVec3fBase::getValue          (void)
{
    return this->editValue          ();
}
#endif

//! Set the value of the ShaderParameterVec3f::_sfValue field.
inline
void ShaderParameterVec3fBase::setValue(const Vec3f &value)
{
    editSField(ValueFieldMask);

    _sfValue.setValue(value);
}

//! create a new instance of the class
inline
ShaderParameterVec3fPtr ShaderParameterVec3fBase::create(void)
{
    ShaderParameterVec3fPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<ShaderParameterVec3f::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ShaderParameterVec3fBase::execSync(      ShaderParameterVec3fBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _sfValue.syncWith(pOther->_sfValue);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ShaderParameterVec3fBase::execSync (      ShaderParameterVec3fBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _sfValue.syncWith(pFrom->_sfValue);
}
#endif

#if 0
inline
void ShaderParameterVec3fBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *ShaderParameterVec3fBase::getClassname(void)
{
    return "ShaderParameterVec3f";
}

typedef PointerBuilder<ShaderParameterVec3f>::ObjPtr          ShaderParameterVec3fPtr;
typedef PointerBuilder<ShaderParameterVec3f>::ObjPtrConst     ShaderParameterVec3fPtrConst;
typedef PointerBuilder<ShaderParameterVec3f>::ObjConstPtr     ShaderParameterVec3fConstPtr;

typedef PointerBuilder<ShaderParameterVec3f>::ObjPtrArg       ShaderParameterVec3fPtrArg;
typedef PointerBuilder<ShaderParameterVec3f>::ObjConstPtrArg  ShaderParameterVec3fConstPtrArg;
typedef PointerBuilder<ShaderParameterVec3f>::ObjPtrConstArg  ShaderParameterVec3fPtrConstArg;

OSG_END_NAMESPACE

