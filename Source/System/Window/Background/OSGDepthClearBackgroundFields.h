/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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


#ifndef _OSGDEPTHCLEARBACKGROUNDFIELDS_H_
#define _OSGDEPTHCLEARBACKGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class DepthClearBackground;

OSG_GEN_CONTAINERPTR(DepthClearBackground);
/*! \ingroup GrpWindowBackgroundFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<DepthClearBackground *, nsOSG> :
    public FieldTraitsFCPtrBase<DepthClearBackground *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<DepthClearBackground *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

};

template<> inline
const Char8 *FieldTraits<DepthClearBackground *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDepthClearBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<DepthClearBackground *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDepthClearBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<DepthClearBackground *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDepthClearBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<DepthClearBackground *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDepthClearBackgroundPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowBackgroundFieldSFields */
typedef PointerSField<DepthClearBackground *,
                      RecordedRefCountPolicy, nsOSG  > SFRecDepthClearBackgroundPtr;
/*! \ingroup GrpWindowBackgroundFieldSFields */
typedef PointerSField<DepthClearBackground *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecDepthClearBackgroundPtr;
/*! \ingroup GrpWindowBackgroundFieldSFields */
typedef PointerSField<DepthClearBackground *,
                      WeakRefCountPolicy, nsOSG      > SFWeakDepthClearBackgroundPtr;
/*! \ingroup GrpWindowBackgroundFieldSFields */
typedef PointerSField<DepthClearBackground *,
                      NoRefCountPolicy, nsOSG        > SFUncountedDepthClearBackgroundPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowBackgroundFieldSFields \ingroup GrpLibOSGWindow */
struct SFRecDepthClearBackgroundPtr : 
    public PointerSField<DepthClearBackground *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowBackgroundFieldSFields \ingroup GrpLibOSGWindow */
struct SFUnrecDepthClearBackgroundPtr : 
    public PointerSField<DepthClearBackground *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowBackgroundFieldSFields \ingroup GrpLibOSGWindow */
struct SFWeakDepthClearBackgroundPtr :
    public PointerSField<DepthClearBackground *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowBackgroundFieldSFields \ingroup GrpLibOSGWindow */
struct SFUncountedDepthClearBackgroundPtr :
    public PointerSField<DepthClearBackground *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDEPTHCLEARBACKGROUNDFIELDS_H_ */
