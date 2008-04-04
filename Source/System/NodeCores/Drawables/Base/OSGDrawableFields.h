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


#ifndef _OSGDRAWABLEFIELDS_H_
#define _OSGDRAWABLEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class Drawable;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! DrawablePtr

OSG_GEN_CONTAINERPTR(Drawable);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<DrawablePtr> :
    public FieldTraitsFCPtrBase<DrawablePtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DrawablePtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDrawablePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDrawablePtr"; }
};

template<> inline
const Char8 *FieldTraits<DrawablePtr, 0>::getSName<RecordedRefCounts>(void)
{
    return "SFRecDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<DrawablePtr, 0>::getSName<UnrecordedRefCounts>(void)
{
    return "SFUnrecDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<DrawablePtr, 0>::getSName<WeakRefCounts>(void)
{
    return "SFWeakDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<DrawablePtr, 0>::getSName<NoRefCounts>(void)
{
    return "SFUnrefdDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<DrawablePtr, 0>::getMName<RecordedRefCounts>(void)
{
    return "MFRecDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<DrawablePtr, 0>::getMName<UnrecordedRefCounts>(void)
{
    return "MFUnrecDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<DrawablePtr, 0>::getMName<WeakRefCounts>(void)
{
    return "MFWeakDrawablePtr"; 
}

template<> inline
const Char8 *FieldTraits<DrawablePtr, 0>::getMName<NoRefCounts>(void)
{
    return "MFUnrefdDrawablePtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<DrawablePtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef FieldContainerPtrSField<DrawablePtr,
                                RecordedRefCounts  > SFRecDrawablePtr;
typedef FieldContainerPtrSField<DrawablePtr,
                                UnrecordedRefCounts> SFUnrecDrawablePtr;
typedef FieldContainerPtrSField<DrawablePtr,
                                WeakRefCounts      > SFWeakDrawablePtr;
typedef FieldContainerPtrSField<DrawablePtr,
                                NoRefCounts        > SFUncountedDrawablePtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef FieldContainerPtrMField<DrawablePtr,
                                RecordedRefCounts  > MFRecDrawablePtr;
typedef FieldContainerPtrMField<DrawablePtr,
                                UnrecordedRefCounts> MFUnrecDrawablePtr;
typedef FieldContainerPtrMField<DrawablePtr,
                                WeakRefCounts      > MFWeakDrawablePtr;
typedef FieldContainerPtrMField<DrawablePtr,
                                NoRefCounts        > MFUncountedDrawablePtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGDRAWABLEFIELDS_H_ */
