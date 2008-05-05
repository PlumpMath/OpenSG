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


#ifndef _OSGSHLCHUNKFIELDS_H_
#define _OSGSHLCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SHLChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! SHLChunkPtr

OSG_GEN_CONTAINERPTR(SHLChunk);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpStateFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<SHLChunk *> :
    public FieldTraitsFCPtrBase<SHLChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SHLChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSHLChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSHLChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<SHLChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSHLChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<SHLChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSHLChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<SHLChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSHLChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<SHLChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSHLChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<SHLChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSHLChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<SHLChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSHLChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<SHLChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSHLChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<SHLChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSHLChunkPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<SHLChunkPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldSingle */

typedef PointerSField<SHLChunk *,
                      RecordedRefCountPolicy  > SFRecSHLChunkPtr;
typedef PointerSField<SHLChunk *,
                      UnrecordedRefCountPolicy> SFUnrecSHLChunkPtr;
typedef PointerSField<SHLChunk *,
                      WeakRefCountPolicy      > SFWeakSHLChunkPtr;
typedef PointerSField<SHLChunk *,
                      NoRefCountPolicy        > SFUncountedSHLChunkPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldMulti */

typedef PointerMField<SHLChunk *,
                      RecordedRefCountPolicy  > MFRecSHLChunkPtr;
typedef PointerMField<SHLChunk *,
                      UnrecordedRefCountPolicy> MFUnrecSHLChunkPtr;
typedef PointerMField<SHLChunk *,
                      WeakRefCountPolicy      > MFWeakSHLChunkPtr;
typedef PointerMField<SHLChunk *,
                      NoRefCountPolicy        > MFUncountedSHLChunkPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGSHLCHUNKFIELDS_H_ */
