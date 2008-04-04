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


#ifndef _OSGCLUSTERWINDOWFIELDS_H_
#define _OSGCLUSTERWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGClusterDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class ClusterWindow;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ClusterWindowPtr

OSG_GEN_CONTAINERPTR(ClusterWindow);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpClusterFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ClusterWindowPtr> :
    public FieldTraitsFCPtrBase<ClusterWindowPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ClusterWindowPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CLUSTER_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFClusterWindowPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFClusterWindowPtr"; }
};

template<> inline
const Char8 *FieldTraits<ClusterWindowPtr, 0>::getSName<RecordedRefCounts>(void)
{
    return "SFRecClusterWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClusterWindowPtr, 0>::getSName<UnrecordedRefCounts>(void)
{
    return "SFUnrecClusterWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClusterWindowPtr, 0>::getSName<WeakRefCounts>(void)
{
    return "SFWeakClusterWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClusterWindowPtr, 0>::getSName<NoRefCounts>(void)
{
    return "SFUnrefdClusterWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClusterWindowPtr, 0>::getMName<RecordedRefCounts>(void)
{
    return "MFRecClusterWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClusterWindowPtr, 0>::getMName<UnrecordedRefCounts>(void)
{
    return "MFUnrecClusterWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClusterWindowPtr, 0>::getMName<WeakRefCounts>(void)
{
    return "MFWeakClusterWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<ClusterWindowPtr, 0>::getMName<NoRefCounts>(void)
{
    return "MFUnrefdClusterWindowPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ClusterWindowPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpClusterFieldSingle */

typedef FieldContainerPtrSField<ClusterWindowPtr,
                                RecordedRefCounts  > SFRecClusterWindowPtr;
typedef FieldContainerPtrSField<ClusterWindowPtr,
                                UnrecordedRefCounts> SFUnrecClusterWindowPtr;
typedef FieldContainerPtrSField<ClusterWindowPtr,
                                WeakRefCounts      > SFWeakClusterWindowPtr;
typedef FieldContainerPtrSField<ClusterWindowPtr,
                                NoRefCounts        > SFUncountedClusterWindowPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpClusterFieldMulti */

typedef FieldContainerPtrMField<ClusterWindowPtr,
                                RecordedRefCounts  > MFRecClusterWindowPtr;
typedef FieldContainerPtrMField<ClusterWindowPtr,
                                UnrecordedRefCounts> MFUnrecClusterWindowPtr;
typedef FieldContainerPtrMField<ClusterWindowPtr,
                                WeakRefCounts      > MFWeakClusterWindowPtr;
typedef FieldContainerPtrMField<ClusterWindowPtr,
                                NoRefCounts        > MFUncountedClusterWindowPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGCLUSTERWINDOWFIELDS_H_ */
