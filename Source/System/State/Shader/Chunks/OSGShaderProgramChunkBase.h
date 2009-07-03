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
 **     Do not change this file, changes should be done in the derived      **
 **     class ShaderProgramChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADERPROGRAMCHUNKBASE_H_
#define _OSGSHADERPROGRAMCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGShaderProgramFields.h" // VertexShader type
#include "OSGSysFields.h" // GeometryVerticesOut type
#include "OSGBaseFields.h" // GeometryInputType type

#include "OSGShaderProgramChunkFields.h"

OSG_BEGIN_NAMESPACE

class ShaderProgramChunk;

//! \brief ShaderProgramChunk Base Class.

class OSG_SYSTEM_DLLMAPPING ShaderProgramChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ShaderProgramChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        VertexShaderFieldId = Inherited::NextFieldId,
        GeometryShaderFieldId = VertexShaderFieldId + 1,
        FragmentShaderFieldId = GeometryShaderFieldId + 1,
        GeometryVerticesOutFieldId = FragmentShaderFieldId + 1,
        GeometryInputTypeFieldId = GeometryVerticesOutFieldId + 1,
        GeometryOutputTypeFieldId = GeometryInputTypeFieldId + 1,
        NextFieldId = GeometryOutputTypeFieldId + 1
    };

    static const OSG::BitVector VertexShaderFieldMask =
        (TypeTraits<BitVector>::One << VertexShaderFieldId);
    static const OSG::BitVector GeometryShaderFieldMask =
        (TypeTraits<BitVector>::One << GeometryShaderFieldId);
    static const OSG::BitVector FragmentShaderFieldMask =
        (TypeTraits<BitVector>::One << FragmentShaderFieldId);
    static const OSG::BitVector GeometryVerticesOutFieldMask =
        (TypeTraits<BitVector>::One << GeometryVerticesOutFieldId);
    static const OSG::BitVector GeometryInputTypeFieldMask =
        (TypeTraits<BitVector>::One << GeometryInputTypeFieldId);
    static const OSG::BitVector GeometryOutputTypeFieldMask =
        (TypeTraits<BitVector>::One << GeometryOutputTypeFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFUnrecShaderProgramPtr MFVertexShaderType;
    typedef MFUnrecShaderProgramPtr MFGeometryShaderType;
    typedef MFUnrecShaderProgramPtr MFFragmentShaderType;
    typedef SFUInt32          SFGeometryVerticesOutType;
    typedef SFGLenum          SFGeometryInputTypeType;
    typedef SFGLenum          SFGeometryOutputTypeType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const MFUnrecShaderProgramPtr *getMFVertexShader   (void) const;
                  MFUnrecShaderProgramPtr *editMFVertexShader   (void);
            const MFUnrecShaderProgramPtr *getMFGeometryShader (void) const;
                  MFUnrecShaderProgramPtr *editMFGeometryShader (void);
            const MFUnrecShaderProgramPtr *getMFFragmentShader (void) const;
                  MFUnrecShaderProgramPtr *editMFFragmentShader (void);

                  SFUInt32            *editSFGeometryVerticesOut(void);
            const SFUInt32            *getSFGeometryVerticesOut (void) const;

                  SFGLenum            *editSFGeometryInputType(void);
            const SFGLenum            *getSFGeometryInputType (void) const;

                  SFGLenum            *editSFGeometryOutputType(void);
            const SFGLenum            *getSFGeometryOutputType (void) const;


                  ShaderProgram * getVertexShader   (const UInt32 index) const;

                  ShaderProgram * getGeometryShader (const UInt32 index) const;

                  ShaderProgram * getFragmentShader (const UInt32 index) const;

                  UInt32              &editGeometryVerticesOut(void);
                  UInt32               getGeometryVerticesOut (void) const;

                  GLenum              &editGeometryInputType(void);
            const GLenum              &getGeometryInputType (void) const;

                  GLenum              &editGeometryOutputType(void);
            const GLenum              &getGeometryOutputType (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setGeometryVerticesOut(const UInt32 value);
            void setGeometryInputType(const GLenum &value);
            void setGeometryOutputType(const GLenum &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void addVertexShader           (ShaderProgram * const value   );
    void assignVertexShader          (const MFUnrecShaderProgramPtr &value);
    void subVertexShader (UInt32               uiIndex );
    void removeObjFromVertexShader(ShaderProgram * const value   );
    void clearVertexShaders            (void                         );

    void addGeometryShader           (ShaderProgram * const value   );
    void assignGeometryShader          (const MFUnrecShaderProgramPtr &value);
    void subGeometryShader (UInt32               uiIndex );
    void removeObjFromGeometryShader(ShaderProgram * const value   );
    void clearGeometryShaders            (void                         );

    void addFragmentShader           (ShaderProgram * const value   );
    void assignFragmentShader          (const MFUnrecShaderProgramPtr &value);
    void subFragmentShader (UInt32               uiIndex );
    void removeObjFromFragmentShader(ShaderProgram * const value   );
    void clearFragmentShaders            (void                         );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  ShaderProgramChunkTransitPtr  create          (void);
    static  ShaderProgramChunk           *createEmpty     (void);

    static  ShaderProgramChunkTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ShaderProgramChunk            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ShaderProgramChunkTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFUnrecShaderProgramPtr _mfVertexShader;
    MFUnrecShaderProgramPtr _mfGeometryShader;
    MFUnrecShaderProgramPtr _mfFragmentShader;
    SFUInt32          _sfGeometryVerticesOut;
    SFGLenum          _sfGeometryInputType;
    SFGLenum          _sfGeometryOutputType;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ShaderProgramChunkBase(void);
    ShaderProgramChunkBase(const ShaderProgramChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShaderProgramChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ShaderProgramChunk *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleVertexShader    (void) const;
    EditFieldHandlePtr editHandleVertexShader   (void);
    GetFieldHandlePtr  getHandleGeometryShader  (void) const;
    EditFieldHandlePtr editHandleGeometryShader (void);
    GetFieldHandlePtr  getHandleFragmentShader  (void) const;
    EditFieldHandlePtr editHandleFragmentShader (void);
    GetFieldHandlePtr  getHandleGeometryVerticesOut (void) const;
    EditFieldHandlePtr editHandleGeometryVerticesOut(void);
    GetFieldHandlePtr  getHandleGeometryInputType (void) const;
    EditFieldHandlePtr editHandleGeometryInputType(void);
    GetFieldHandlePtr  getHandleGeometryOutputType (void) const;
    EditFieldHandlePtr editHandleGeometryOutputType(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      ShaderProgramChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ShaderProgramChunkBase &source);
};

typedef ShaderProgramChunkBase *ShaderProgramChunkBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSHADERPROGRAMCHUNKBASE_H_ */
