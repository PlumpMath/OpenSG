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


#ifndef _OSGANIMQUATERNIONDATASOURCEFIELDS_H_
#define _OSGANIMQUATERNIONDATASOURCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AnimQuaternionDataSource;

OSG_GEN_CONTAINERPTR(AnimQuaternionDataSource);

/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<AnimQuaternionDataSource *> :
    public FieldTraitsFCPtrBase<AnimQuaternionDataSource *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AnimQuaternionDataSource *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DYNAMICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAnimQuaternionDataSourcePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAnimQuaternionDataSourcePtr"; }
};

template<> inline
const Char8 *FieldTraits<AnimQuaternionDataSource *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAnimQuaternionDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimQuaternionDataSource *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAnimQuaternionDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimQuaternionDataSource *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAnimQuaternionDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimQuaternionDataSource *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAnimQuaternionDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimQuaternionDataSource *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAnimQuaternionDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimQuaternionDataSource *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAnimQuaternionDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimQuaternionDataSource *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAnimQuaternionDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimQuaternionDataSource *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAnimQuaternionDataSourcePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimQuaternionDataSource *,
                      RecordedRefCountPolicy  > SFRecAnimQuaternionDataSourcePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimQuaternionDataSource *,
                      UnrecordedRefCountPolicy> SFUnrecAnimQuaternionDataSourcePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimQuaternionDataSource *,
                      WeakRefCountPolicy      > SFWeakAnimQuaternionDataSourcePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<AnimQuaternionDataSource *,
                      NoRefCountPolicy        > SFUncountedAnimQuaternionDataSourcePtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimQuaternionDataSource *,
                      RecordedRefCountPolicy  > MFRecAnimQuaternionDataSourcePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimQuaternionDataSource *,
                      UnrecordedRefCountPolicy> MFUnrecAnimQuaternionDataSourcePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimQuaternionDataSource *,
                      WeakRefCountPolicy      > MFWeakAnimQuaternionDataSourcePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<AnimQuaternionDataSource *,
                      NoRefCountPolicy        > MFUncountedAnimQuaternionDataSourcePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecAnimQuaternionDataSourcePtr : 
    public PointerSField<AnimQuaternionDataSource *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecAnimQuaternionDataSourcePtr : 
    public PointerSField<AnimQuaternionDataSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakAnimQuaternionDataSourcePtr :
    public PointerSField<AnimQuaternionDataSource *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedAnimQuaternionDataSourcePtr :
    public PointerSField<AnimQuaternionDataSource *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecAnimQuaternionDataSourcePtr :
    public PointerMField<AnimQuaternionDataSource *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecAnimQuaternionDataSourcePtr :
    public PointerMField<AnimQuaternionDataSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakAnimQuaternionDataSourcePtr :
    public PointerMField<AnimQuaternionDataSource *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedAnimQuaternionDataSourcePtr :
    public PointerMField<AnimQuaternionDataSource *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGANIMQUATERNIONDATASOURCEFIELDS_H_ */
