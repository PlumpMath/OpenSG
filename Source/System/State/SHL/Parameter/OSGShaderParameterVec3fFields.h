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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADERPARAMETERVEC3FFIELDS_H_
#define _OSGSHADERPARAMETERVEC3FFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class ShaderParameterVec3f;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ShaderParameterVec3fPtr

OSG_GEN_CONTAINERPTR(ShaderParameterVec3f);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpStateFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ShaderParameterVec3fPtr> :
    public FieldTraitsFCPtrBase<ShaderParameterVec3fPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ShaderParameterVec3fPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFShaderParameterVec3fPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFShaderParameterVec3fPtr"; }
};

template<> inline
const Char8 *FieldTraits<ShaderParameterVec3fPtr, 0>::getSName<RecordedRefCounts>(void)
{
    return "SFRecShaderParameterVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec3fPtr, 0>::getSName<UnrecordedRefCounts>(void)
{
    return "SFUnrecShaderParameterVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec3fPtr, 0>::getSName<WeakRefCounts>(void)
{
    return "SFWeakShaderParameterVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec3fPtr, 0>::getSName<NoRefCounts>(void)
{
    return "SFUnrefdShaderParameterVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec3fPtr, 0>::getMName<RecordedRefCounts>(void)
{
    return "MFRecShaderParameterVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec3fPtr, 0>::getMName<UnrecordedRefCounts>(void)
{
    return "MFUnrecShaderParameterVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec3fPtr, 0>::getMName<WeakRefCounts>(void)
{
    return "MFWeakShaderParameterVec3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec3fPtr, 0>::getMName<NoRefCounts>(void)
{
    return "MFUnrefdShaderParameterVec3fPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ShaderParameterVec3fPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldSingle */

typedef FieldContainerPtrSField<ShaderParameterVec3fPtr,
                                RecordedRefCounts  > SFRecShaderParameterVec3fPtr;
typedef FieldContainerPtrSField<ShaderParameterVec3fPtr,
                                UnrecordedRefCounts> SFUnrecShaderParameterVec3fPtr;
typedef FieldContainerPtrSField<ShaderParameterVec3fPtr,
                                WeakRefCounts      > SFWeakShaderParameterVec3fPtr;
typedef FieldContainerPtrSField<ShaderParameterVec3fPtr,
                                NoRefCounts        > SFUncountedShaderParameterVec3fPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldMulti */

typedef FieldContainerPtrMField<ShaderParameterVec3fPtr,
                                RecordedRefCounts  > MFRecShaderParameterVec3fPtr;
typedef FieldContainerPtrMField<ShaderParameterVec3fPtr,
                                UnrecordedRefCounts> MFUnrecShaderParameterVec3fPtr;
typedef FieldContainerPtrMField<ShaderParameterVec3fPtr,
                                WeakRefCounts      > MFWeakShaderParameterVec3fPtr;
typedef FieldContainerPtrMField<ShaderParameterVec3fPtr,
                                NoRefCounts        > MFUncountedShaderParameterVec3fPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGSHADERPARAMETERVEC3FFIELDS_H_ */
