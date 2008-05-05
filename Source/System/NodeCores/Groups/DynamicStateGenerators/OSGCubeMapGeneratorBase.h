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
 **     class CubeMapGenerator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCUBEMAPGENERATORBASE_H_
#define _OSGCUBEMAPGENERATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGBaseTypes.h"

#include "OSGDynamicStateGenerator.h" // Parent

#include "OSGNodeFields.h" // Root type
#include "OSGNodeFields.h" // Exclude type
#include "OSGTextureObjChunkFields.h" // Texture type
#include "OSGVec2sFields.h" // TextureSize type
#include "OSGGLenumFields.h" // TextureFormat type
#include "OSGNodeFields.h" // Beacon type
#include "OSGPnt3fFields.h" // Origin type
#include "OSGUInt32Fields.h" // OriginMode type
#include "OSGUInt32Fields.h" // TexUnit type
#include "OSGUInt32Fields.h" // SetupMode type
#include "OSGBackgroundFields.h" // Background type

#include "OSGCubeMapGeneratorFields.h"

OSG_BEGIN_NAMESPACE

class CubeMapGenerator;

//! \brief CubeMapGenerator Base Class.

class OSG_GROUP_DLLMAPPING CubeMapGeneratorBase : public DynamicStateGenerator
{
  public:

    typedef DynamicStateGenerator Inherited;
    typedef DynamicStateGenerator ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CubeMapGenerator);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RootFieldId = Inherited::NextFieldId,
        ExcludeFieldId = RootFieldId + 1,
        TextureFieldId = ExcludeFieldId + 1,
        TextureSizeFieldId = TextureFieldId + 1,
        TextureFormatFieldId = TextureSizeFieldId + 1,
        BeaconFieldId = TextureFormatFieldId + 1,
        OriginFieldId = BeaconFieldId + 1,
        OriginModeFieldId = OriginFieldId + 1,
        TexUnitFieldId = OriginModeFieldId + 1,
        SetupModeFieldId = TexUnitFieldId + 1,
        BackgroundFieldId = SetupModeFieldId + 1,
        NextFieldId = BackgroundFieldId + 1
    };

    static const OSG::BitVector RootFieldMask =
        (TypeTraits<BitVector>::One << RootFieldId);
    static const OSG::BitVector ExcludeFieldMask =
        (TypeTraits<BitVector>::One << ExcludeFieldId);
    static const OSG::BitVector TextureFieldMask =
        (TypeTraits<BitVector>::One << TextureFieldId);
    static const OSG::BitVector TextureSizeFieldMask =
        (TypeTraits<BitVector>::One << TextureSizeFieldId);
    static const OSG::BitVector TextureFormatFieldMask =
        (TypeTraits<BitVector>::One << TextureFormatFieldId);
    static const OSG::BitVector BeaconFieldMask =
        (TypeTraits<BitVector>::One << BeaconFieldId);
    static const OSG::BitVector OriginFieldMask =
        (TypeTraits<BitVector>::One << OriginFieldId);
    static const OSG::BitVector OriginModeFieldMask =
        (TypeTraits<BitVector>::One << OriginModeFieldId);
    static const OSG::BitVector TexUnitFieldMask =
        (TypeTraits<BitVector>::One << TexUnitFieldId);
    static const OSG::BitVector SetupModeFieldMask =
        (TypeTraits<BitVector>::One << SetupModeFieldId);
    static const OSG::BitVector BackgroundFieldMask =
        (TypeTraits<BitVector>::One << BackgroundFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

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

            const SFUnrecNodePtr      *getSFRoot           (void) const;
                  SFUnrecNodePtr      *editSFRoot           (void);
            const MFUnrecNodePtr      *getMFExclude        (void) const;
                  MFUnrecNodePtr      *editMFExclude        (void);
            const SFUnrecTextureObjChunkPtr *getSFTexture        (void) const;
                  SFUnrecTextureObjChunkPtr *editSFTexture        (void);

#ifdef OSG_1_GET_COMPAT
                  SFVec2s             *getSFTextureSize     (void);
#endif
                  SFVec2s             *editSFTextureSize    (void);
            const SFVec2s             *getSFTextureSize     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFGLenum            *getSFTextureFormat   (void);
#endif
                  SFGLenum            *editSFTextureFormat  (void);
            const SFGLenum            *getSFTextureFormat   (void) const;
            const SFWeakNodePtr       *getSFBeacon         (void) const;
                  SFWeakNodePtr       *editSFBeacon         (void);

#ifdef OSG_1_GET_COMPAT
                  SFPnt3f             *getSFOrigin          (void);
#endif
                  SFPnt3f             *editSFOrigin         (void);
            const SFPnt3f             *getSFOrigin          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFOriginMode      (void);
#endif
                  SFUInt32            *editSFOriginMode     (void);
            const SFUInt32            *getSFOriginMode      (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFTexUnit         (void);
#endif
                  SFUInt32            *editSFTexUnit        (void);
            const SFUInt32            *getSFTexUnit         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFSetupMode       (void);
#endif
                  SFUInt32            *editSFSetupMode      (void);
            const SFUInt32            *getSFSetupMode       (void) const;
            const SFUnrecBackgroundPtr *getSFBackground     (void) const;
                  SFUnrecBackgroundPtr *editSFBackground     (void);


                  Node * getRoot           (void) const;

                  Node * getExclude        (const UInt32 index) const;

                  TextureObjChunk * getTexture        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Vec2s               &getTextureSize     (void);
#endif
                  Vec2s               &editTextureSize    (void);
            const Vec2s                getTextureSize     (void) const;

#ifdef OSG_1_GET_COMPAT
                  GLenum              &getTextureFormat   (void);
#endif
                  GLenum              &editTextureFormat  (void);
            const GLenum               getTextureFormat   (void) const;

                  Node * getBeacon         (void) const;

#ifdef OSG_1_GET_COMPAT
                  Pnt3f               &getOrigin          (void);
#endif
                  Pnt3f               &editOrigin         (void);
            const Pnt3f                getOrigin          (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getOriginMode      (void);
#endif
                  UInt32              &editOriginMode     (void);
            const UInt32               getOriginMode      (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getTexUnit         (void);
#endif
                  UInt32              &editTexUnit        (void);
            const UInt32               getTexUnit         (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getSetupMode       (void);
#endif
                  UInt32              &editSetupMode      (void);
            const UInt32               getSetupMode       (void) const;

                  Background * getBackground     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRoot           (Node * const value);
            void setTexture        (TextureObjChunk * const value);
            void setTextureSize    (const Vec2s &value);
            void setTextureFormat  (const GLenum &value);
            void setBeacon         (Node * const value);
            void setOrigin         (const Pnt3f &value);
            void setOriginMode     (const UInt32 &value);
            void setTexUnit        (const UInt32 &value);
            void setSetupMode      (const UInt32 &value);
            void setBackground     (Background * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToExclude             (Node * const value   );
    void assignExclude            (const MFUnrecNodePtr    &value);
    void removeFromExclude (UInt32               uiIndex );
    void removeFromExclude(Node * const value   );
    void clearExclude               (void                          );


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

    static  CubeMapGeneratorTransitPtr  create          (void);
    static  CubeMapGenerator           *createEmpty     (void);

    static  CubeMapGeneratorTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  CubeMapGenerator            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecNodePtr    _sfRoot;
    MFUnrecNodePtr    _mfExclude;
    SFUnrecTextureObjChunkPtr _sfTexture;
    SFVec2s           _sfTextureSize;
    SFGLenum          _sfTextureFormat;
    SFWeakNodePtr     _sfBeacon;
    SFPnt3f           _sfOrigin;
    SFUInt32          _sfOriginMode;
    SFUInt32          _sfTexUnit;
    SFUInt32          _sfSetupMode;
    SFUnrecBackgroundPtr _sfBackground;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CubeMapGeneratorBase(void);
    CubeMapGeneratorBase(const CubeMapGeneratorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CubeMapGeneratorBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const CubeMapGenerator *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRoot            (void) const;
    EditFieldHandlePtr editHandleRoot           (void);
    GetFieldHandlePtr  getHandleExclude         (void) const;
    EditFieldHandlePtr editHandleExclude        (void);
    GetFieldHandlePtr  getHandleTexture         (void) const;
    EditFieldHandlePtr editHandleTexture        (void);
    GetFieldHandlePtr  getHandleTextureSize     (void) const;
    EditFieldHandlePtr editHandleTextureSize    (void);
    GetFieldHandlePtr  getHandleTextureFormat   (void) const;
    EditFieldHandlePtr editHandleTextureFormat  (void);
    GetFieldHandlePtr  getHandleBeacon          (void) const;
    EditFieldHandlePtr editHandleBeacon         (void);
    GetFieldHandlePtr  getHandleOrigin          (void) const;
    EditFieldHandlePtr editHandleOrigin         (void);
    GetFieldHandlePtr  getHandleOriginMode      (void) const;
    EditFieldHandlePtr editHandleOriginMode     (void);
    GetFieldHandlePtr  getHandleTexUnit         (void) const;
    EditFieldHandlePtr editHandleTexUnit        (void);
    GetFieldHandlePtr  getHandleSetupMode       (void) const;
    EditFieldHandlePtr editHandleSetupMode      (void);
    GetFieldHandlePtr  getHandleBackground      (void) const;
    EditFieldHandlePtr editHandleBackground     (void);

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

            void execSync (      CubeMapGeneratorBase *pFrom,
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
    virtual FieldContainer *createAspectCopy(void) const;
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
    void operator =(const CubeMapGeneratorBase &source);
};

typedef CubeMapGeneratorBase *CubeMapGeneratorBaseP;

typedef CoredNodeRefPtr  <CubeMapGenerator> CubeMapGeneratorNodeRefPtr;
typedef CoredNodeMTRefPtr<CubeMapGenerator> CubeMapGeneratorNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGCUBEMAPGENERATORBASE_H_ */
