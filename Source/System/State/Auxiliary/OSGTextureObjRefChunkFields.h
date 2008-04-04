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


#ifndef _OSGTEXTUREOBJREFCHUNKFIELDS_H_
#define _OSGTEXTUREOBJREFCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class TextureObjRefChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! TextureObjRefChunkPtr

OSG_GEN_CONTAINERPTR(TextureObjRefChunk);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpStateFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<TextureObjRefChunkPtr> :
    public FieldTraitsFCPtrBase<TextureObjRefChunkPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TextureObjRefChunkPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTextureObjRefChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTextureObjRefChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<TextureObjRefChunkPtr, 0>::getSName<RecordedRefCounts>(void)
{
    return "SFRecTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunkPtr, 0>::getSName<UnrecordedRefCounts>(void)
{
    return "SFUnrecTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunkPtr, 0>::getSName<WeakRefCounts>(void)
{
    return "SFWeakTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunkPtr, 0>::getSName<NoRefCounts>(void)
{
    return "SFUnrefdTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunkPtr, 0>::getMName<RecordedRefCounts>(void)
{
    return "MFRecTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunkPtr, 0>::getMName<UnrecordedRefCounts>(void)
{
    return "MFUnrecTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunkPtr, 0>::getMName<WeakRefCounts>(void)
{
    return "MFWeakTextureObjRefChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TextureObjRefChunkPtr, 0>::getMName<NoRefCounts>(void)
{
    return "MFUnrefdTextureObjRefChunkPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<TextureObjRefChunkPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldSingle */

typedef FieldContainerPtrSField<TextureObjRefChunkPtr,
                                RecordedRefCounts  > SFRecTextureObjRefChunkPtr;
typedef FieldContainerPtrSField<TextureObjRefChunkPtr,
                                UnrecordedRefCounts> SFUnrecTextureObjRefChunkPtr;
typedef FieldContainerPtrSField<TextureObjRefChunkPtr,
                                WeakRefCounts      > SFWeakTextureObjRefChunkPtr;
typedef FieldContainerPtrSField<TextureObjRefChunkPtr,
                                NoRefCounts        > SFUncountedTextureObjRefChunkPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldMulti */

typedef FieldContainerPtrMField<TextureObjRefChunkPtr,
                                RecordedRefCounts  > MFRecTextureObjRefChunkPtr;
typedef FieldContainerPtrMField<TextureObjRefChunkPtr,
                                UnrecordedRefCounts> MFUnrecTextureObjRefChunkPtr;
typedef FieldContainerPtrMField<TextureObjRefChunkPtr,
                                WeakRefCounts      > MFWeakTextureObjRefChunkPtr;
typedef FieldContainerPtrMField<TextureObjRefChunkPtr,
                                NoRefCounts        > MFUncountedTextureObjRefChunkPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGTEXTUREOBJREFCHUNKFIELDS_H_ */
