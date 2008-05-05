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


#ifndef _OSGDYNAMICSTATEGENERATORFIELDS_H_
#define _OSGDYNAMICSTATEGENERATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class DynamicStateGenerator;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! DynamicStateGeneratorPtr

OSG_GEN_CONTAINERPTR(DynamicStateGenerator);

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpGroupFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<DynamicStateGenerator *> :
    public FieldTraitsFCPtrBase<DynamicStateGenerator *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DynamicStateGenerator *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDynamicStateGeneratorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDynamicStateGeneratorPtr"; }
};

template<> inline
const Char8 *FieldTraits<DynamicStateGenerator *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDynamicStateGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DynamicStateGenerator *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDynamicStateGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DynamicStateGenerator *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDynamicStateGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DynamicStateGenerator *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDynamicStateGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DynamicStateGenerator *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDynamicStateGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DynamicStateGenerator *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDynamicStateGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DynamicStateGenerator *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDynamicStateGeneratorPtr"; 
}

template<> inline
const Char8 *FieldTraits<DynamicStateGenerator *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDynamicStateGeneratorPtr"; 
}

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<DynamicStateGeneratorPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpGroupFieldSingle */

typedef PointerSField<DynamicStateGenerator *,
                      RecordedRefCountPolicy  > SFRecDynamicStateGeneratorPtr;
typedef PointerSField<DynamicStateGenerator *,
                      UnrecordedRefCountPolicy> SFUnrecDynamicStateGeneratorPtr;
typedef PointerSField<DynamicStateGenerator *,
                      WeakRefCountPolicy      > SFWeakDynamicStateGeneratorPtr;
typedef PointerSField<DynamicStateGenerator *,
                      NoRefCountPolicy        > SFUncountedDynamicStateGeneratorPtr;
#endif


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpGroupFieldMulti */

typedef PointerMField<DynamicStateGenerator *,
                      RecordedRefCountPolicy  > MFRecDynamicStateGeneratorPtr;
typedef PointerMField<DynamicStateGenerator *,
                      UnrecordedRefCountPolicy> MFUnrecDynamicStateGeneratorPtr;
typedef PointerMField<DynamicStateGenerator *,
                      WeakRefCountPolicy      > MFWeakDynamicStateGeneratorPtr;
typedef PointerMField<DynamicStateGenerator *,
                      NoRefCountPolicy        > MFUncountedDynamicStateGeneratorPtr;
#endif


OSG_END_NAMESPACE

#endif /* _OSGDYNAMICSTATEGENERATORFIELDS_H_ */
