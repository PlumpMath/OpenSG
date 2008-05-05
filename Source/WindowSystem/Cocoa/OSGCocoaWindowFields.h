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


#ifndef _OSGCOCOAWINDOWFIELDS_H_
#define _OSGCOCOAWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowCocoaDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class CocoaWindow;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! CocoaWindowPtr

OSG_GEN_CONTAINERPTR(CocoaWindow);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpWindowCocoaFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<CocoaWindow *> :
    public FieldTraitsFCPtrBase<CocoaWindow *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CocoaWindow *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOWCOCOA_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCocoaWindowPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFCocoaWindowPtr"; }
};

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCocoaWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<CocoaWindow *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCocoaWindowPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<CocoaWindowPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowCocoaFieldSingle */

typedef PointerSField<CocoaWindow *,
                      RecordedRefCountPolicy  > SFRecCocoaWindowPtr;
typedef PointerSField<CocoaWindow *,
                      UnrecordedRefCountPolicy> SFUnrecCocoaWindowPtr;
typedef PointerSField<CocoaWindow *,
                      WeakRefCountPolicy      > SFWeakCocoaWindowPtr;
typedef PointerSField<CocoaWindow *,
                      NoRefCountPolicy        > SFUncountedCocoaWindowPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowCocoaFieldMulti */

typedef PointerMField<CocoaWindow *,
                      RecordedRefCountPolicy  > MFRecCocoaWindowPtr;
typedef PointerMField<CocoaWindow *,
                      UnrecordedRefCountPolicy> MFUnrecCocoaWindowPtr;
typedef PointerMField<CocoaWindow *,
                      WeakRefCountPolicy      > MFWeakCocoaWindowPtr;
typedef PointerMField<CocoaWindow *,
                      NoRefCountPolicy        > MFUncountedCocoaWindowPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGCOCOAWINDOWFIELDS_H_ */
