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


#ifndef _OSGEGLWINDOWFIELDS_H_
#define _OSGEGLWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowEGLDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class EGLWindow;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! EGLWindowPtr

OSG_GEN_CONTAINERPTR(EGLWindow);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpWindowEGLFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<EGLWindowPtr> :
    public FieldTraitsFCPtrBase<EGLWindowPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<EGLWindowPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOWEGL_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFEGLWindowPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFEGLWindowPtr"; }
};

template<> inline
const Char8 *FieldTraits<EGLWindowPtr, 0>::getSName<RecordedRefCounts>(void)
{
    return "SFRecEGLWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<EGLWindowPtr, 0>::getSName<UnrecordedRefCounts>(void)
{
    return "SFUnrecEGLWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<EGLWindowPtr, 0>::getSName<WeakRefCounts>(void)
{
    return "SFWeakEGLWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<EGLWindowPtr, 0>::getSName<NoRefCounts>(void)
{
    return "SFUnrefdEGLWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<EGLWindowPtr, 0>::getMName<RecordedRefCounts>(void)
{
    return "MFRecEGLWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<EGLWindowPtr, 0>::getMName<UnrecordedRefCounts>(void)
{
    return "MFUnrecEGLWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<EGLWindowPtr, 0>::getMName<WeakRefCounts>(void)
{
    return "MFWeakEGLWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<EGLWindowPtr, 0>::getMName<NoRefCounts>(void)
{
    return "MFUnrefdEGLWindowPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<EGLWindowPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowEGLFieldSingle */

typedef FieldContainerPtrSField<EGLWindowPtr,
                                RecordedRefCounts  > SFRecEGLWindowPtr;
typedef FieldContainerPtrSField<EGLWindowPtr,
                                UnrecordedRefCounts> SFUnrecEGLWindowPtr;
typedef FieldContainerPtrSField<EGLWindowPtr,
                                WeakRefCounts      > SFWeakEGLWindowPtr;
typedef FieldContainerPtrSField<EGLWindowPtr,
                                NoRefCounts        > SFUncountedEGLWindowPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowEGLFieldMulti */

typedef FieldContainerPtrMField<EGLWindowPtr,
                                RecordedRefCounts  > MFRecEGLWindowPtr;
typedef FieldContainerPtrMField<EGLWindowPtr,
                                UnrecordedRefCounts> MFUnrecEGLWindowPtr;
typedef FieldContainerPtrMField<EGLWindowPtr,
                                WeakRefCounts      > MFWeakEGLWindowPtr;
typedef FieldContainerPtrMField<EGLWindowPtr,
                                NoRefCounts        > MFUncountedEGLWindowPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGEGLWINDOWFIELDS_H_ */
