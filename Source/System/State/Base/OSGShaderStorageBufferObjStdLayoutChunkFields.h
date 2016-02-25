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


#ifndef _OSGSHADERSTORAGEBUFFEROBJSTDLAYOUTCHUNKFIELDS_H_
#define _OSGSHADERSTORAGEBUFFEROBJSTDLAYOUTCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class ShaderStorageBufferObjStdLayoutChunk;

OSG_GEN_CONTAINERPTR(ShaderStorageBufferObjStdLayoutChunk);
/*! \ingroup GrpSystemStateFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<ShaderStorageBufferObjStdLayoutChunk *, nsOSG> :
    public FieldTraitsFCPtrBase<ShaderStorageBufferObjStdLayoutChunk *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<ShaderStorageBufferObjStdLayoutChunk *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjStdLayoutChunk *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderStorageBufferObjStdLayoutChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjStdLayoutChunk *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderStorageBufferObjStdLayoutChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjStdLayoutChunk *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderStorageBufferObjStdLayoutChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjStdLayoutChunk *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderStorageBufferObjStdLayoutChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjStdLayoutChunk *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderStorageBufferObjStdLayoutChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjStdLayoutChunk *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderStorageBufferObjStdLayoutChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjStdLayoutChunk *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderStorageBufferObjStdLayoutChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderStorageBufferObjStdLayoutChunk *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderStorageBufferObjStdLayoutChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<ShaderStorageBufferObjStdLayoutChunk *,
                      RecordedRefCountPolicy, nsOSG  > SFRecShaderStorageBufferObjStdLayoutChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<ShaderStorageBufferObjStdLayoutChunk *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecShaderStorageBufferObjStdLayoutChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<ShaderStorageBufferObjStdLayoutChunk *,
                      WeakRefCountPolicy, nsOSG      > SFWeakShaderStorageBufferObjStdLayoutChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<ShaderStorageBufferObjStdLayoutChunk *,
                      NoRefCountPolicy, nsOSG        > SFUncountedShaderStorageBufferObjStdLayoutChunkPtr;


/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<ShaderStorageBufferObjStdLayoutChunk *,
                      RecordedRefCountPolicy, nsOSG  > MFRecShaderStorageBufferObjStdLayoutChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<ShaderStorageBufferObjStdLayoutChunk *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecShaderStorageBufferObjStdLayoutChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<ShaderStorageBufferObjStdLayoutChunk *,
                      WeakRefCountPolicy, nsOSG      > MFWeakShaderStorageBufferObjStdLayoutChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<ShaderStorageBufferObjStdLayoutChunk *,
                      NoRefCountPolicy, nsOSG        > MFUncountedShaderStorageBufferObjStdLayoutChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecShaderStorageBufferObjStdLayoutChunkPtr : 
    public PointerSField<ShaderStorageBufferObjStdLayoutChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecShaderStorageBufferObjStdLayoutChunkPtr : 
    public PointerSField<ShaderStorageBufferObjStdLayoutChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakShaderStorageBufferObjStdLayoutChunkPtr :
    public PointerSField<ShaderStorageBufferObjStdLayoutChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedShaderStorageBufferObjStdLayoutChunkPtr :
    public PointerSField<ShaderStorageBufferObjStdLayoutChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecShaderStorageBufferObjStdLayoutChunkPtr :
    public PointerMField<ShaderStorageBufferObjStdLayoutChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecShaderStorageBufferObjStdLayoutChunkPtr :
    public PointerMField<ShaderStorageBufferObjStdLayoutChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakShaderStorageBufferObjStdLayoutChunkPtr :
    public PointerMField<ShaderStorageBufferObjStdLayoutChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedShaderStorageBufferObjStdLayoutChunkPtr :
    public PointerMField<ShaderStorageBufferObjStdLayoutChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERSTORAGEBUFFEROBJSTDLAYOUTCHUNKFIELDS_H_ */
