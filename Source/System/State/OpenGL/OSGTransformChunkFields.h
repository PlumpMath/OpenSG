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


#ifndef _OSGTRANSFORMCHUNKFIELDS_H_
#define _OSGTRANSFORMCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class TransformChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! TransformChunkPtr

OSG_GEN_CONTAINERPTR(TransformChunk);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpStateFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<TransformChunkPtr> :
    public FieldTraitsFCPtrBase<TransformChunkPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TransformChunkPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTransformChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTransformChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<TransformChunkPtr, 0>::getSName<RecordedRefCounts>(void)
{
    return "SFRecTransformChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformChunkPtr, 0>::getSName<UnrecordedRefCounts>(void)
{
    return "SFUnrecTransformChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformChunkPtr, 0>::getSName<WeakRefCounts>(void)
{
    return "SFWeakTransformChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformChunkPtr, 0>::getSName<NoRefCounts>(void)
{
    return "SFUnrefdTransformChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformChunkPtr, 0>::getMName<RecordedRefCounts>(void)
{
    return "MFRecTransformChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformChunkPtr, 0>::getMName<UnrecordedRefCounts>(void)
{
    return "MFUnrecTransformChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformChunkPtr, 0>::getMName<WeakRefCounts>(void)
{
    return "MFWeakTransformChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<TransformChunkPtr, 0>::getMName<NoRefCounts>(void)
{
    return "MFUnrefdTransformChunkPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<TransformChunkPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldSingle */

typedef FieldContainerPtrSField<TransformChunkPtr,
                                RecordedRefCounts  > SFRecTransformChunkPtr;
typedef FieldContainerPtrSField<TransformChunkPtr,
                                UnrecordedRefCounts> SFUnrecTransformChunkPtr;
typedef FieldContainerPtrSField<TransformChunkPtr,
                                WeakRefCounts      > SFWeakTransformChunkPtr;
typedef FieldContainerPtrSField<TransformChunkPtr,
                                NoRefCounts        > SFUncountedTransformChunkPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpStateFieldMulti */

typedef FieldContainerPtrMField<TransformChunkPtr,
                                RecordedRefCounts  > MFRecTransformChunkPtr;
typedef FieldContainerPtrMField<TransformChunkPtr,
                                UnrecordedRefCounts> MFUnrecTransformChunkPtr;
typedef FieldContainerPtrMField<TransformChunkPtr,
                                WeakRefCounts      > MFWeakTransformChunkPtr;
typedef FieldContainerPtrMField<TransformChunkPtr,
                                NoRefCounts        > MFUncountedTransformChunkPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGTRANSFORMCHUNKFIELDS_H_ */
