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


#ifndef _OSGTEXTUREBUFFERFIELDS_H_
#define _OSGTEXTUREBUFFERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class TextureBuffer;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! TextureBufferPtr

OSG_GEN_CONTAINERPTR(TextureBuffer);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<TextureBufferPtr> :
    public FieldTraitsFCPtrBase<TextureBufferPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TextureBufferPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTextureBufferPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTextureBufferPtr"; }
};

template<> inline
const Char8 *FieldTraits<TextureBufferPtr, 0>::getSName<RecordedRefCounts>(void)
{
    return "SFRecTextureBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBufferPtr, 0>::getSName<UnrecordedRefCounts>(void)
{
    return "SFUnrecTextureBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBufferPtr, 0>::getSName<WeakRefCounts>(void)
{
    return "SFWeakTextureBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBufferPtr, 0>::getSName<NoRefCounts>(void)
{
    return "SFUnrefdTextureBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBufferPtr, 0>::getMName<RecordedRefCounts>(void)
{
    return "MFRecTextureBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBufferPtr, 0>::getMName<UnrecordedRefCounts>(void)
{
    return "MFUnrecTextureBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBufferPtr, 0>::getMName<WeakRefCounts>(void)
{
    return "MFWeakTextureBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureBufferPtr, 0>::getMName<NoRefCounts>(void)
{
    return "MFUnrefdTextureBufferPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<TextureBufferPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef FieldContainerPtrSField<TextureBufferPtr,
                                RecordedRefCounts  > SFRecTextureBufferPtr;
typedef FieldContainerPtrSField<TextureBufferPtr,
                                UnrecordedRefCounts> SFUnrecTextureBufferPtr;
typedef FieldContainerPtrSField<TextureBufferPtr,
                                WeakRefCounts      > SFWeakTextureBufferPtr;
typedef FieldContainerPtrSField<TextureBufferPtr,
                                NoRefCounts        > SFUncountedTextureBufferPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef FieldContainerPtrMField<TextureBufferPtr,
                                RecordedRefCounts  > MFRecTextureBufferPtr;
typedef FieldContainerPtrMField<TextureBufferPtr,
                                UnrecordedRefCounts> MFUnrecTextureBufferPtr;
typedef FieldContainerPtrMField<TextureBufferPtr,
                                WeakRefCounts      > MFWeakTextureBufferPtr;
typedef FieldContainerPtrMField<TextureBufferPtr,
                                NoRefCounts        > MFUncountedTextureBufferPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGTEXTUREBUFFERFIELDS_H_ */
