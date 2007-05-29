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
 **     class ShaderParameterMVec4f!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderParameterMVec4fBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShaderParameterMVec4fBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShaderParameterMVec4fBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the \a index element the ShaderParameterMVec4f::_mfValue field.
inline
const Vec4f &ShaderParameterMVec4fBase::getValue(const UInt32 index) const
{
    return _mfValue[index];
}

inline
Vec4f &ShaderParameterMVec4fBase::editValue(const UInt32 index)
{
    editMField(ValueFieldMask, _mfValue);

    return _mfValue[index];
}

//! Get the ShaderParameterMVec4f::_mfValue field.
inline
MFVec4f &ShaderParameterMVec4fBase::editValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    return _mfValue;
}

#ifdef OSG_1_GET_COMPAT
inline
Vec4f               &ShaderParameterMVec4fBase::getValue          (const UInt32 index)
{
    return this->editValue          (index);
}

inline
MFVec4f             &ShaderParameterMVec4fBase::getValue          (void)
{
    return this->editValue          ();
}

#endif


//! Get the ShaderParameterMVec4f::_mfValue field.
inline
const MFVec4f &ShaderParameterMVec4fBase::getValue(void) const
{
    return _mfValue;
}

//! create a new instance of the class
inline
ShaderParameterMVec4fPtr ShaderParameterMVec4fBase::create(void)
{
    ShaderParameterMVec4fPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<ShaderParameterMVec4f::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ShaderParameterMVec4fBase::execSync(      ShaderParameterMVec4fBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _mfValue.syncWith(pOther->_mfValue,
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ShaderParameterMVec4fBase::execSync (      ShaderParameterMVec4fBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
        _mfValue.syncWith(pFrom->_mfValue,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif

#if 0
inline
void ShaderParameterMVec4fBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _mfValue.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *ShaderParameterMVec4fBase::getClassname(void)
{
    return "ShaderParameterMVec4f";
}

typedef PointerBuilder<ShaderParameterMVec4f>::ObjPtr          ShaderParameterMVec4fPtr;
typedef PointerBuilder<ShaderParameterMVec4f>::ObjPtrConst     ShaderParameterMVec4fPtrConst;
typedef PointerBuilder<ShaderParameterMVec4f>::ObjConstPtr     ShaderParameterMVec4fConstPtr;

typedef PointerBuilder<ShaderParameterMVec4f>::ObjPtrArg       ShaderParameterMVec4fPtrArg;
typedef PointerBuilder<ShaderParameterMVec4f>::ObjConstPtrArg  ShaderParameterMVec4fConstPtrArg;
typedef PointerBuilder<ShaderParameterMVec4f>::ObjPtrConstArg  ShaderParameterMVec4fPtrConstArg;

OSG_END_NAMESPACE

