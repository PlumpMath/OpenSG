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
 **     Do not change this file, changes should be done in the derived      **
 **     class Light
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLIGHTBASE_H_
#define _OSGLIGHTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGGroup.h" // Parent

#include "OSGBaseFields.h"              // Ambient type
#include "OSGNodeFields.h"              // Beacon type
#include "OSGSysFields.h"               // On type
#include "OSGLightEngineFields.h"       // LightEngine type

#include "OSGLightFields.h"

OSG_BEGIN_NAMESPACE


class Light;

//! \brief Light Base Class.

class OSG_SYSTEM_DLLMAPPING LightBase : public Group
{
  public:

    typedef Group Inherited;
    typedef Group ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Light);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        AmbientFieldId = Inherited::NextFieldId,
        DiffuseFieldId = AmbientFieldId + 1,
        SpecularFieldId = DiffuseFieldId + 1,
        BeaconFieldId = SpecularFieldId + 1,
        OnFieldId = BeaconFieldId + 1,
        ConstantAttenuationFieldId = OnFieldId + 1,
        LinearAttenuationFieldId = ConstantAttenuationFieldId + 1,
        QuadraticAttenuationFieldId = LinearAttenuationFieldId + 1,
        LightEngineFieldId = QuadraticAttenuationFieldId + 1,
        ShadowIntensityFieldId = LightEngineFieldId + 1,
        ShadowModeFieldId = ShadowIntensityFieldId + 1,
        NextFieldId = ShadowModeFieldId + 1
    };

    static const OSG::BitVector AmbientFieldMask =
        (TypeTraits<BitVector>::One << AmbientFieldId);
    static const OSG::BitVector DiffuseFieldMask =
        (TypeTraits<BitVector>::One << DiffuseFieldId);
    static const OSG::BitVector SpecularFieldMask =
        (TypeTraits<BitVector>::One << SpecularFieldId);
    static const OSG::BitVector BeaconFieldMask =
        (TypeTraits<BitVector>::One << BeaconFieldId);
    static const OSG::BitVector OnFieldMask =
        (TypeTraits<BitVector>::One << OnFieldId);
    static const OSG::BitVector ConstantAttenuationFieldMask =
        (TypeTraits<BitVector>::One << ConstantAttenuationFieldId);
    static const OSG::BitVector LinearAttenuationFieldMask =
        (TypeTraits<BitVector>::One << LinearAttenuationFieldId);
    static const OSG::BitVector QuadraticAttenuationFieldMask =
        (TypeTraits<BitVector>::One << QuadraticAttenuationFieldId);
    static const OSG::BitVector LightEngineFieldMask =
        (TypeTraits<BitVector>::One << LightEngineFieldId);
    static const OSG::BitVector ShadowIntensityFieldMask =
        (TypeTraits<BitVector>::One << ShadowIntensityFieldId);
    static const OSG::BitVector ShadowModeFieldMask =
        (TypeTraits<BitVector>::One << ShadowModeFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFColor4f         SFAmbientType;
    typedef SFColor4f         SFDiffuseType;
    typedef SFColor4f         SFSpecularType;
    typedef SFWeakNodePtr     SFBeaconType;
    typedef SFBool            SFOnType;
    typedef SFReal32          SFConstantAttenuationType;
    typedef SFReal32          SFLinearAttenuationType;
    typedef SFReal32          SFQuadraticAttenuationType;
    typedef SFUnrecLightEnginePtr SFLightEngineType;
    typedef SFReal32          SFShadowIntensityType;
    typedef SFUInt32          SFShadowModeType;

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


                  SFColor4f           *editSFAmbient        (void);
            const SFColor4f           *getSFAmbient         (void) const;

                  SFColor4f           *editSFDiffuse        (void);
            const SFColor4f           *getSFDiffuse         (void) const;

                  SFColor4f           *editSFSpecular       (void);
            const SFColor4f           *getSFSpecular        (void) const;
            const SFWeakNodePtr       *getSFBeacon         (void) const;
                  SFWeakNodePtr       *editSFBeacon         (void);

                  SFBool              *editSFOn             (void);
            const SFBool              *getSFOn              (void) const;

                  SFReal32            *editSFConstantAttenuation(void);
            const SFReal32            *getSFConstantAttenuation (void) const;

                  SFReal32            *editSFLinearAttenuation(void);
            const SFReal32            *getSFLinearAttenuation (void) const;

                  SFReal32            *editSFQuadraticAttenuation(void);
            const SFReal32            *getSFQuadraticAttenuation (void) const;
            const SFUnrecLightEnginePtr *getSFLightEngine    (void) const;
                  SFUnrecLightEnginePtr *editSFLightEngine    (void);

                  SFReal32            *editSFShadowIntensity(void);
            const SFReal32            *getSFShadowIntensity (void) const;

                  SFUInt32            *editSFShadowMode     (void);
            const SFUInt32            *getSFShadowMode      (void) const;


                  Color4f             &editAmbient        (void);
            const Color4f             &getAmbient         (void) const;

                  Color4f             &editDiffuse        (void);
            const Color4f             &getDiffuse         (void) const;

                  Color4f             &editSpecular       (void);
            const Color4f             &getSpecular        (void) const;

                  Node * getBeacon         (void) const;

                  bool                &editOn             (void);
                  bool                 getOn              (void) const;

                  Real32              &editConstantAttenuation(void);
                  Real32               getConstantAttenuation (void) const;

                  Real32              &editLinearAttenuation(void);
                  Real32               getLinearAttenuation (void) const;

                  Real32              &editQuadraticAttenuation(void);
                  Real32               getQuadraticAttenuation (void) const;

                  LightEngine * getLightEngine    (void) const;

                  Real32              &editShadowIntensity(void);
                  Real32               getShadowIntensity (void) const;

                  UInt32              &editShadowMode     (void);
                  UInt32               getShadowMode      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setAmbient        (const Color4f &value);
            void setDiffuse        (const Color4f &value);
            void setSpecular       (const Color4f &value);
            void setBeacon         (Node * const value);
            void setOn             (const bool value);
            void setConstantAttenuation(const Real32 value);
            void setLinearAttenuation(const Real32 value);
            void setQuadraticAttenuation(const Real32 value);
            void setLightEngine    (LightEngine * const value);
            void setShadowIntensity(const Real32 value);
            void setShadowMode     (const UInt32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFColor4f         _sfAmbient;
    SFColor4f         _sfDiffuse;
    SFColor4f         _sfSpecular;
    SFWeakNodePtr     _sfBeacon;
    SFBool            _sfOn;
    SFReal32          _sfConstantAttenuation;
    SFReal32          _sfLinearAttenuation;
    SFReal32          _sfQuadraticAttenuation;
    SFUnrecLightEnginePtr _sfLightEngine;
    SFReal32          _sfShadowIntensity;
    SFUInt32          _sfShadowMode;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    LightBase(void);
    LightBase(const LightBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LightBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Light *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleAmbient         (void) const;
     EditFieldHandlePtr editHandleAmbient        (void);
     GetFieldHandlePtr  getHandleDiffuse         (void) const;
     EditFieldHandlePtr editHandleDiffuse        (void);
     GetFieldHandlePtr  getHandleSpecular        (void) const;
     EditFieldHandlePtr editHandleSpecular       (void);
     GetFieldHandlePtr  getHandleBeacon          (void) const;
     EditFieldHandlePtr editHandleBeacon         (void);
     GetFieldHandlePtr  getHandleOn              (void) const;
     EditFieldHandlePtr editHandleOn             (void);
     GetFieldHandlePtr  getHandleConstantAttenuation (void) const;
     EditFieldHandlePtr editHandleConstantAttenuation(void);
     GetFieldHandlePtr  getHandleLinearAttenuation (void) const;
     EditFieldHandlePtr editHandleLinearAttenuation(void);
     GetFieldHandlePtr  getHandleQuadraticAttenuation (void) const;
     EditFieldHandlePtr editHandleQuadraticAttenuation(void);
     GetFieldHandlePtr  getHandleLightEngine     (void) const;
     EditFieldHandlePtr editHandleLightEngine    (void);
     GetFieldHandlePtr  getHandleShadowIntensity (void) const;
     EditFieldHandlePtr editHandleShadowIntensity(void);
     GetFieldHandlePtr  getHandleShadowMode      (void) const;
     EditFieldHandlePtr editHandleShadowMode     (void);

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

            void execSync (      LightBase *pFrom,
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
    void operator =(const LightBase &source);
};

typedef LightBase *LightBaseP;

typedef CoredNodeRefPtr  <Light> LightNodeRefPtr;
typedef CoredNodeMTRefPtr<Light> LightNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGLIGHTBASE_H_ */
