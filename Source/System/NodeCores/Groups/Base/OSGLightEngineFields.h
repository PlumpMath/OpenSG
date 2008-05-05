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


#ifndef _OSGLIGHTENGINEFIELDS_H_
#define _OSGLIGHTENGINEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class LightEngine;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! LightEnginePtr

OSG_GEN_CONTAINERPTR(LightEngine);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<LightEngine *> :
    public FieldTraitsFCPtrBase<LightEngine *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<LightEngine *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFLightEnginePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFLightEnginePtr"; }
};

template<> inline
const Char8 *FieldTraits<LightEngine *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecLightEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<LightEngine *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecLightEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<LightEngine *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakLightEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<LightEngine *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdLightEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<LightEngine *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecLightEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<LightEngine *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecLightEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<LightEngine *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakLightEnginePtr"; 
}

template<> inline
const Char8 *FieldTraits<LightEngine *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdLightEnginePtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<LightEnginePtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef PointerSField<LightEngine *,
                      RecordedRefCountPolicy  > SFRecLightEnginePtr;
typedef PointerSField<LightEngine *,
                      UnrecordedRefCountPolicy> SFUnrecLightEnginePtr;
typedef PointerSField<LightEngine *,
                      WeakRefCountPolicy      > SFWeakLightEnginePtr;
typedef PointerSField<LightEngine *,
                      NoRefCountPolicy        > SFUncountedLightEnginePtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef PointerMField<LightEngine *,
                      RecordedRefCountPolicy  > MFRecLightEnginePtr;
typedef PointerMField<LightEngine *,
                      UnrecordedRefCountPolicy> MFUnrecLightEnginePtr;
typedef PointerMField<LightEngine *,
                      WeakRefCountPolicy      > MFWeakLightEnginePtr;
typedef PointerMField<LightEngine *,
                      NoRefCountPolicy        > MFUncountedLightEnginePtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGLIGHTENGINEFIELDS_H_ */
