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


#ifndef _OSGCALLBACKALGORITHMFIELDS_H_
#define _OSGCALLBACKALGORITHMFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class CallbackAlgorithm;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! CallbackAlgorithmPtr

OSG_GEN_CONTAINERPTR(CallbackAlgorithm);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpGroupFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<CallbackAlgorithm *> :
    public FieldTraitsFCPtrBase<CallbackAlgorithm *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CallbackAlgorithm *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFCallbackAlgorithmPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFCallbackAlgorithmPtr"; }
};

template<> inline
const Char8 *FieldTraits<CallbackAlgorithm *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<CallbackAlgorithm *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<CallbackAlgorithm *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<CallbackAlgorithm *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<CallbackAlgorithm *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<CallbackAlgorithm *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<CallbackAlgorithm *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<CallbackAlgorithm *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdCallbackAlgorithmPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<CallbackAlgorithmPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpGroupFieldSingle */

typedef PointerSField<CallbackAlgorithm *,
                      RecordedRefCountPolicy  > SFRecCallbackAlgorithmPtr;
typedef PointerSField<CallbackAlgorithm *,
                      UnrecordedRefCountPolicy> SFUnrecCallbackAlgorithmPtr;
typedef PointerSField<CallbackAlgorithm *,
                      WeakRefCountPolicy      > SFWeakCallbackAlgorithmPtr;
typedef PointerSField<CallbackAlgorithm *,
                      NoRefCountPolicy        > SFUncountedCallbackAlgorithmPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpGroupFieldMulti */

typedef PointerMField<CallbackAlgorithm *,
                      RecordedRefCountPolicy  > MFRecCallbackAlgorithmPtr;
typedef PointerMField<CallbackAlgorithm *,
                      UnrecordedRefCountPolicy> MFUnrecCallbackAlgorithmPtr;
typedef PointerMField<CallbackAlgorithm *,
                      WeakRefCountPolicy      > MFWeakCallbackAlgorithmPtr;
typedef PointerMField<CallbackAlgorithm *,
                      NoRefCountPolicy        > MFUncountedCallbackAlgorithmPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGCALLBACKALGORITHMFIELDS_H_ */
