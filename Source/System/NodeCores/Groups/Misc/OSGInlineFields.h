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


#ifndef _OSGINLINEFIELDS_H_
#define _OSGINLINEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class Inline;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! InlinePtr

OSG_GEN_CONTAINERPTR(Inline);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpGroupFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<InlinePtr> :
    public FieldTraitsFCPtrBase<InlinePtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<InlinePtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFInlinePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFInlinePtr"; }
};

template<> inline
const Char8 *FieldTraits<InlinePtr, 0>::getSName<RecordedRefCounts>(void)
{
    return "SFRecInlinePtr"; 
}

template<> inline
const Char8 *FieldTraits<InlinePtr, 0>::getSName<UnrecordedRefCounts>(void)
{
    return "SFUnrecInlinePtr"; 
}

template<> inline
const Char8 *FieldTraits<InlinePtr, 0>::getSName<WeakRefCounts>(void)
{
    return "SFWeakInlinePtr"; 
}

template<> inline
const Char8 *FieldTraits<InlinePtr, 0>::getSName<NoRefCounts>(void)
{
    return "SFUnrefdInlinePtr"; 
}

template<> inline
const Char8 *FieldTraits<InlinePtr, 0>::getMName<RecordedRefCounts>(void)
{
    return "MFRecInlinePtr"; 
}

template<> inline
const Char8 *FieldTraits<InlinePtr, 0>::getMName<UnrecordedRefCounts>(void)
{
    return "MFUnrecInlinePtr"; 
}

template<> inline
const Char8 *FieldTraits<InlinePtr, 0>::getMName<WeakRefCounts>(void)
{
    return "MFWeakInlinePtr"; 
}

template<> inline
const Char8 *FieldTraits<InlinePtr, 0>::getMName<NoRefCounts>(void)
{
    return "MFUnrefdInlinePtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<InlinePtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpGroupFieldSingle */

typedef FieldContainerPtrSField<InlinePtr,
                                RecordedRefCounts  > SFRecInlinePtr;
typedef FieldContainerPtrSField<InlinePtr,
                                UnrecordedRefCounts> SFUnrecInlinePtr;
typedef FieldContainerPtrSField<InlinePtr,
                                WeakRefCounts      > SFWeakInlinePtr;
typedef FieldContainerPtrSField<InlinePtr,
                                NoRefCounts        > SFUncountedInlinePtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpGroupFieldMulti */

typedef FieldContainerPtrMField<InlinePtr,
                                RecordedRefCounts  > MFRecInlinePtr;
typedef FieldContainerPtrMField<InlinePtr,
                                UnrecordedRefCounts> MFUnrecInlinePtr;
typedef FieldContainerPtrMField<InlinePtr,
                                WeakRefCounts      > MFWeakInlinePtr;
typedef FieldContainerPtrMField<InlinePtr,
                                NoRefCounts        > MFUncountedInlinePtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGINLINEFIELDS_H_ */
