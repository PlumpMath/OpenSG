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


#ifndef _OSGSWITCHMATERIALFIELDS_H_
#define _OSGSWITCHMATERIALFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SwitchMaterial;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! SwitchMaterialPtr

OSG_GEN_CONTAINERPTR(SwitchMaterial);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<SwitchMaterial *> :
    public FieldTraitsFCPtrBase<SwitchMaterial *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SwitchMaterial *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSwitchMaterialPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSwitchMaterialPtr"; }
};

template<> inline
const Char8 *FieldTraits<SwitchMaterial *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSwitchMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SwitchMaterial *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSwitchMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SwitchMaterial *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSwitchMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SwitchMaterial *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSwitchMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SwitchMaterial *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSwitchMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SwitchMaterial *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSwitchMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SwitchMaterial *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSwitchMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<SwitchMaterial *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSwitchMaterialPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<SwitchMaterialPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef PointerSField<SwitchMaterial *,
                      RecordedRefCountPolicy  > SFRecSwitchMaterialPtr;
typedef PointerSField<SwitchMaterial *,
                      UnrecordedRefCountPolicy> SFUnrecSwitchMaterialPtr;
typedef PointerSField<SwitchMaterial *,
                      WeakRefCountPolicy      > SFWeakSwitchMaterialPtr;
typedef PointerSField<SwitchMaterial *,
                      NoRefCountPolicy        > SFUncountedSwitchMaterialPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef PointerMField<SwitchMaterial *,
                      RecordedRefCountPolicy  > MFRecSwitchMaterialPtr;
typedef PointerMField<SwitchMaterial *,
                      UnrecordedRefCountPolicy> MFUnrecSwitchMaterialPtr;
typedef PointerMField<SwitchMaterial *,
                      WeakRefCountPolicy      > MFWeakSwitchMaterialPtr;
typedef PointerMField<SwitchMaterial *,
                      NoRefCountPolicy        > MFUncountedSwitchMaterialPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGSWITCHMATERIALFIELDS_H_ */
