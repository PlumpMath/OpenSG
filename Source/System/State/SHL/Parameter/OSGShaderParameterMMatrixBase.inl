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
 **     class ShaderParameterMMatrix!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderParameterMMatrixBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShaderParameterMMatrixBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShaderParameterMMatrixBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the \a index element the ShaderParameterMMatrix::_mfValue field.
inline
const Matrix &ShaderParameterMMatrixBase::getValue(const UInt32 index) const
{
    return _mfValue[index];
}

inline
Matrix &ShaderParameterMMatrixBase::editValue(const UInt32 index)
{
    editMField(ValueFieldMask, _mfValue);

    return _mfValue[index];
}

//! Get the ShaderParameterMMatrix::_mfValue field.
inline
MFMatrix &ShaderParameterMMatrixBase::editValue(void)
{
    editMField(ValueFieldMask, _mfValue);

    return _mfValue;
}

#ifdef OSG_1_GET_COMPAT
inline
Matrix              &ShaderParameterMMatrixBase::getValue          (const UInt32 index)
{
    return this->editValue          (index);
}

inline
MFMatrix            &ShaderParameterMMatrixBase::getValue          (void)
{
    return this->editValue          ();
}

#endif


//! Get the ShaderParameterMMatrix::_mfValue field.
inline
const MFMatrix &ShaderParameterMMatrixBase::getValue(void) const
{
    return _mfValue;
}

//! create a new instance of the class
inline
ShaderParameterMMatrixPtr ShaderParameterMMatrixBase::create(void)
{
    ShaderParameterMMatrixPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<ShaderParameterMMatrix::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ShaderParameterMMatrixBase::execSync(      ShaderParameterMMatrixBase *pOther,
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
void ShaderParameterMMatrixBase::execSync (      ShaderParameterMMatrixBase *pFrom,
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
void ShaderParameterMMatrixBase::execBeginEdit(ConstFieldMaskArg whichField,
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
Char8 *ShaderParameterMMatrixBase::getClassname(void)
{
    return "ShaderParameterMMatrix";
}

typedef PointerBuilder<ShaderParameterMMatrix>::ObjPtr          ShaderParameterMMatrixPtr;
typedef PointerBuilder<ShaderParameterMMatrix>::ObjPtrConst     ShaderParameterMMatrixPtrConst;
typedef PointerBuilder<ShaderParameterMMatrix>::ObjConstPtr     ShaderParameterMMatrixConstPtr;

typedef PointerBuilder<ShaderParameterMMatrix>::ObjPtrArg       ShaderParameterMMatrixPtrArg;
typedef PointerBuilder<ShaderParameterMMatrix>::ObjConstPtrArg  ShaderParameterMMatrixConstPtrArg;
typedef PointerBuilder<ShaderParameterMMatrix>::ObjPtrConstArg  ShaderParameterMMatrixPtrConstArg;

OSG_END_NAMESPACE

