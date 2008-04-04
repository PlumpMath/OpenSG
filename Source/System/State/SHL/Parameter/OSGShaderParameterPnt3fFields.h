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


#ifndef _OSGSHADERPARAMETERPNT3FFIELDS_H_
#define _OSGSHADERPARAMETERPNT3FFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class ShaderParameterPnt3f;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ShaderParameterPnt3fPtr

OSG_GEN_CONTAINERPTR(ShaderParameterPnt3f);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpStateFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ShaderParameterPnt3fPtr> :
    public FieldTraitsFCPtrBase<ShaderParameterPnt3fPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ShaderParameterPnt3fPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFShaderParameterPnt3fPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFShaderParameterPnt3fPtr"; }
};

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt3fPtr, 0>::getSName<RecordedRefCounts>(void)
{
    return "SFRecShaderParameterPnt3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt3fPtr, 0>::getSName<UnrecordedRefCounts>(void)
{
    return "SFUnrecShaderParameterPnt3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt3fPtr, 0>::getSName<WeakRefCounts>(void)
{
    return "SFWeakShaderParameterPnt3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt3fPtr, 0>::getSName<NoRefCounts>(void)
{
    return "SFUnrefdShaderParameterPnt3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt3fPtr, 0>::getMName<RecordedRefCounts>(void)
{
    return "MFRecShaderParameterPnt3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt3fPtr, 0>::getMName<UnrecordedRefCounts>(void)
{
    return "MFUnrecShaderParameterPnt3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt3fPtr, 0>::getMName<WeakRefCounts>(void)
{
    return "MFWeakShaderParameterPnt3fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterPnt3fPtr, 0>::getMName<NoRefCounts>(void)
{
    return "MFUnrefdShaderParameterPnt3fPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ShaderParameterPnt3fPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldSingle */

typedef FieldContainerPtrSField<ShaderParameterPnt3fPtr,
                                RecordedRefCounts  > SFRecShaderParameterPnt3fPtr;
typedef FieldContainerPtrSField<ShaderParameterPnt3fPtr,
                                UnrecordedRefCounts> SFUnrecShaderParameterPnt3fPtr;
typedef FieldContainerPtrSField<ShaderParameterPnt3fPtr,
                                WeakRefCounts      > SFWeakShaderParameterPnt3fPtr;
typedef FieldContainerPtrSField<ShaderParameterPnt3fPtr,
                                NoRefCounts        > SFUncountedShaderParameterPnt3fPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldMulti */

typedef FieldContainerPtrMField<ShaderParameterPnt3fPtr,
                                RecordedRefCounts  > MFRecShaderParameterPnt3fPtr;
typedef FieldContainerPtrMField<ShaderParameterPnt3fPtr,
                                UnrecordedRefCounts> MFUnrecShaderParameterPnt3fPtr;
typedef FieldContainerPtrMField<ShaderParameterPnt3fPtr,
                                WeakRefCounts      > MFWeakShaderParameterPnt3fPtr;
typedef FieldContainerPtrMField<ShaderParameterPnt3fPtr,
                                NoRefCounts        > MFUncountedShaderParameterPnt3fPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGSHADERPARAMETERPNT3FFIELDS_H_ */
