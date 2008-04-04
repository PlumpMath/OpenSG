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


#ifndef _OSGFILEGRABFOREGROUNDFIELDS_H_
#define _OSGFILEGRABFOREGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGFieldContainerPtrSField.h"
#include "OSGFieldContainerPtrMField.h"


OSG_BEGIN_NAMESPACE

class FileGrabForeground;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! FileGrabForegroundPtr

OSG_GEN_CONTAINERPTR(FileGrabForeground);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpWindowFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<FileGrabForegroundPtr> :
    public FieldTraitsFCPtrBase<FileGrabForegroundPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<FileGrabForegroundPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFFileGrabForegroundPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFFileGrabForegroundPtr"; }
};

template<> inline
const Char8 *FieldTraits<FileGrabForegroundPtr, 0>::getSName<RecordedRefCounts>(void)
{
    return "SFRecFileGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileGrabForegroundPtr, 0>::getSName<UnrecordedRefCounts>(void)
{
    return "SFUnrecFileGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileGrabForegroundPtr, 0>::getSName<WeakRefCounts>(void)
{
    return "SFWeakFileGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileGrabForegroundPtr, 0>::getSName<NoRefCounts>(void)
{
    return "SFUnrefdFileGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileGrabForegroundPtr, 0>::getMName<RecordedRefCounts>(void)
{
    return "MFRecFileGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileGrabForegroundPtr, 0>::getMName<UnrecordedRefCounts>(void)
{
    return "MFUnrecFileGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileGrabForegroundPtr, 0>::getMName<WeakRefCounts>(void)
{
    return "MFWeakFileGrabForegroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileGrabForegroundPtr, 0>::getMName<NoRefCounts>(void)
{
    return "MFUnrefdFileGrabForegroundPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<FileGrabForegroundPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowFieldSingle */

typedef FieldContainerPtrSField<FileGrabForegroundPtr,
                                RecordedRefCounts  > SFRecFileGrabForegroundPtr;
typedef FieldContainerPtrSField<FileGrabForegroundPtr,
                                UnrecordedRefCounts> SFUnrecFileGrabForegroundPtr;
typedef FieldContainerPtrSField<FileGrabForegroundPtr,
                                WeakRefCounts      > SFWeakFileGrabForegroundPtr;
typedef FieldContainerPtrSField<FileGrabForegroundPtr,
                                NoRefCounts        > SFUncountedFileGrabForegroundPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowFieldMulti */

typedef FieldContainerPtrMField<FileGrabForegroundPtr,
                                RecordedRefCounts  > MFRecFileGrabForegroundPtr;
typedef FieldContainerPtrMField<FileGrabForegroundPtr,
                                UnrecordedRefCounts> MFUnrecFileGrabForegroundPtr;
typedef FieldContainerPtrMField<FileGrabForegroundPtr,
                                WeakRefCounts      > MFWeakFileGrabForegroundPtr;
typedef FieldContainerPtrMField<FileGrabForegroundPtr,
                                NoRefCounts        > MFUncountedFileGrabForegroundPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGFILEGRABFOREGROUNDFIELDS_H_ */
