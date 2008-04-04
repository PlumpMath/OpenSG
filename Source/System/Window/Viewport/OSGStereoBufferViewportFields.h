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


#ifndef _OSGSTEREOBUFFERVIEWPORTFIELDS_H_
#define _OSGSTEREOBUFFERVIEWPORTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class StereoBufferViewport;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! StereoBufferViewportPtr

OSG_GEN_CONTAINERPTR(StereoBufferViewport);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpWindowFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<StereoBufferViewportPtr> :
    public FieldTraitsFCPtrBase<StereoBufferViewportPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<StereoBufferViewportPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFStereoBufferViewportPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFStereoBufferViewportPtr"; }
};

template<> inline
const Char8 *FieldTraits<StereoBufferViewportPtr, 0>::getSName<RecordedRefCounts>(void)
{
    return "SFRecStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewportPtr, 0>::getSName<UnrecordedRefCounts>(void)
{
    return "SFUnrecStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewportPtr, 0>::getSName<WeakRefCounts>(void)
{
    return "SFWeakStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewportPtr, 0>::getSName<NoRefCounts>(void)
{
    return "SFUnrefdStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewportPtr, 0>::getMName<RecordedRefCounts>(void)
{
    return "MFRecStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewportPtr, 0>::getMName<UnrecordedRefCounts>(void)
{
    return "MFUnrecStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewportPtr, 0>::getMName<WeakRefCounts>(void)
{
    return "MFWeakStereoBufferViewportPtr"; 
}

template<> inline
const Char8 *FieldTraits<StereoBufferViewportPtr, 0>::getMName<NoRefCounts>(void)
{
    return "MFUnrefdStereoBufferViewportPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<StereoBufferViewportPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowFieldSingle */

typedef FieldContainerPtrSField<StereoBufferViewportPtr,
                                RecordedRefCounts  > SFRecStereoBufferViewportPtr;
typedef FieldContainerPtrSField<StereoBufferViewportPtr,
                                UnrecordedRefCounts> SFUnrecStereoBufferViewportPtr;
typedef FieldContainerPtrSField<StereoBufferViewportPtr,
                                WeakRefCounts      > SFWeakStereoBufferViewportPtr;
typedef FieldContainerPtrSField<StereoBufferViewportPtr,
                                NoRefCounts        > SFUncountedStereoBufferViewportPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowFieldMulti */

typedef FieldContainerPtrMField<StereoBufferViewportPtr,
                                RecordedRefCounts  > MFRecStereoBufferViewportPtr;
typedef FieldContainerPtrMField<StereoBufferViewportPtr,
                                UnrecordedRefCounts> MFUnrecStereoBufferViewportPtr;
typedef FieldContainerPtrMField<StereoBufferViewportPtr,
                                WeakRefCounts      > MFWeakStereoBufferViewportPtr;
typedef FieldContainerPtrMField<StereoBufferViewportPtr,
                                NoRefCounts        > MFUncountedStereoBufferViewportPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGSTEREOBUFFERVIEWPORTFIELDS_H_ */
