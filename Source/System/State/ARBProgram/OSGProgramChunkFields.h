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


#ifndef _OSGPROGRAMCHUNKFIELDS_H_
#define _OSGPROGRAMCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ProgramChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ProgramChunkPtr

OSG_GEN_CONTAINERPTR(ProgramChunk);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpStateFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ProgramChunk *> :
    public FieldTraitsFCPtrBase<ProgramChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ProgramChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFProgramChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFProgramChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<ProgramChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProgramChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProgramChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProgramChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProgramChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProgramChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProgramChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProgramChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdProgramChunkPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ProgramChunkPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldSingle */

typedef PointerSField<ProgramChunk *,
                      RecordedRefCountPolicy  > SFRecProgramChunkPtr;
typedef PointerSField<ProgramChunk *,
                      UnrecordedRefCountPolicy> SFUnrecProgramChunkPtr;
typedef PointerSField<ProgramChunk *,
                      WeakRefCountPolicy      > SFWeakProgramChunkPtr;
typedef PointerSField<ProgramChunk *,
                      NoRefCountPolicy        > SFUncountedProgramChunkPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldMulti */

typedef PointerMField<ProgramChunk *,
                      RecordedRefCountPolicy  > MFRecProgramChunkPtr;
typedef PointerMField<ProgramChunk *,
                      UnrecordedRefCountPolicy> MFUnrecProgramChunkPtr;
typedef PointerMField<ProgramChunk *,
                      WeakRefCountPolicy      > MFWeakProgramChunkPtr;
typedef PointerMField<ProgramChunk *,
                      NoRefCountPolicy        > MFUncountedProgramChunkPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGPROGRAMCHUNKFIELDS_H_ */
