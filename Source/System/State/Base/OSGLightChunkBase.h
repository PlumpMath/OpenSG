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
 **     class LightChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLIGHTCHUNKBASE_H_
#define _OSGLIGHTCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGBaseFields.h"              // Diffuse type
#include "OSGVecFields.h"               // Position type
#include "OSGSysFields.h"               // Exponent type
#include "OSGNodeFields.h"              // Beacon type

#include "OSGLightChunkFields.h"

OSG_BEGIN_NAMESPACE


class LightChunk;

//! \brief LightChunk Base Class.

class OSG_SYSTEM_DLLMAPPING LightChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(LightChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        DiffuseFieldId = Inherited::NextFieldId,
        AmbientFieldId = DiffuseFieldId + 1,
        SpecularFieldId = AmbientFieldId + 1,
        PositionFieldId = SpecularFieldId + 1,
        DirectionFieldId = PositionFieldId + 1,
        ExponentFieldId = DirectionFieldId + 1,
        CutoffFieldId = ExponentFieldId + 1,
        ConstantAttenuationFieldId = CutoffFieldId + 1,
        LinearAttenuationFieldId = ConstantAttenuationFieldId + 1,
        QuadraticAttenuationFieldId = LinearAttenuationFieldId + 1,
        BeaconFieldId = QuadraticAttenuationFieldId + 1,
        NextFieldId = BeaconFieldId + 1
    };

    static const OSG::BitVector DiffuseFieldMask =
        (TypeTraits<BitVector>::One << DiffuseFieldId);
    static const OSG::BitVector AmbientFieldMask =
        (TypeTraits<BitVector>::One << AmbientFieldId);
    static const OSG::BitVector SpecularFieldMask =
        (TypeTraits<BitVector>::One << SpecularFieldId);
    static const OSG::BitVector PositionFieldMask =
        (TypeTraits<BitVector>::One << PositionFieldId);
    static const OSG::BitVector DirectionFieldMask =
        (TypeTraits<BitVector>::One << DirectionFieldId);
    static const OSG::BitVector ExponentFieldMask =
        (TypeTraits<BitVector>::One << ExponentFieldId);
    static const OSG::BitVector CutoffFieldMask =
        (TypeTraits<BitVector>::One << CutoffFieldId);
    static const OSG::BitVector ConstantAttenuationFieldMask =
        (TypeTraits<BitVector>::One << ConstantAttenuationFieldId);
    static const OSG::BitVector LinearAttenuationFieldMask =
        (TypeTraits<BitVector>::One << LinearAttenuationFieldId);
    static const OSG::BitVector QuadraticAttenuationFieldMask =
        (TypeTraits<BitVector>::One << QuadraticAttenuationFieldId);
    static const OSG::BitVector BeaconFieldMask =
        (TypeTraits<BitVector>::One << BeaconFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFColor4f         SFDiffuseType;
    typedef SFColor4f         SFAmbientType;
    typedef SFColor4f         SFSpecularType;
    typedef SFVec4f           SFPositionType;
    typedef SFVec3f           SFDirectionType;
    typedef SFReal32          SFExponentType;
    typedef SFReal32          SFCutoffType;
    typedef SFReal32          SFConstantAttenuationType;
    typedef SFReal32          SFLinearAttenuationType;
    typedef SFReal32          SFQuadraticAttenuationType;
    typedef SFWeakNodePtr     SFBeaconType;

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


                  SFColor4f           *editSFDiffuse        (void);
            const SFColor4f           *getSFDiffuse         (void) const;

                  SFColor4f           *editSFAmbient        (void);
            const SFColor4f           *getSFAmbient         (void) const;

                  SFColor4f           *editSFSpecular       (void);
            const SFColor4f           *getSFSpecular        (void) const;

                  SFVec4f             *editSFPosition       (void);
            const SFVec4f             *getSFPosition        (void) const;

                  SFVec3f             *editSFDirection      (void);
            const SFVec3f             *getSFDirection       (void) const;

                  SFReal32            *editSFExponent       (void);
            const SFReal32            *getSFExponent        (void) const;

                  SFReal32            *editSFCutoff         (void);
            const SFReal32            *getSFCutoff          (void) const;

                  SFReal32            *editSFConstantAttenuation(void);
            const SFReal32            *getSFConstantAttenuation (void) const;

                  SFReal32            *editSFLinearAttenuation(void);
            const SFReal32            *getSFLinearAttenuation (void) const;

                  SFReal32            *editSFQuadraticAttenuation(void);
            const SFReal32            *getSFQuadraticAttenuation (void) const;
            const SFWeakNodePtr       *getSFBeacon         (void) const;
                  SFWeakNodePtr       *editSFBeacon         (void);


                  Color4f             &editDiffuse        (void);
            const Color4f             &getDiffuse         (void) const;

                  Color4f             &editAmbient        (void);
            const Color4f             &getAmbient         (void) const;

                  Color4f             &editSpecular       (void);
            const Color4f             &getSpecular        (void) const;

                  Vec4f               &editPosition       (void);
            const Vec4f               &getPosition        (void) const;

                  Vec3f               &editDirection      (void);
            const Vec3f               &getDirection       (void) const;

                  Real32              &editExponent       (void);
                  Real32               getExponent        (void) const;

                  Real32              &editCutoff         (void);
                  Real32               getCutoff          (void) const;

                  Real32              &editConstantAttenuation(void);
                  Real32               getConstantAttenuation (void) const;

                  Real32              &editLinearAttenuation(void);
                  Real32               getLinearAttenuation (void) const;

                  Real32              &editQuadraticAttenuation(void);
                  Real32               getQuadraticAttenuation (void) const;

                  Node * getBeacon         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDiffuse        (const Color4f &value);
            void setAmbient        (const Color4f &value);
            void setSpecular       (const Color4f &value);
            void setPosition       (const Vec4f &value);
            void setDirection      (const Vec3f &value);
            void setExponent       (const Real32 value);
            void setCutoff         (const Real32 value);
            void setConstantAttenuation(const Real32 value);
            void setLinearAttenuation(const Real32 value);
            void setQuadraticAttenuation(const Real32 value);
            void setBeacon         (Node * const value);

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
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  LightChunkTransitPtr  create          (void);
    static  LightChunk           *createEmpty     (void);

    static  LightChunkTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  LightChunk            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  LightChunkTransitPtr  createDependent  (BitVector bFlags);

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

    SFColor4f         _sfDiffuse;
    SFColor4f         _sfAmbient;
    SFColor4f         _sfSpecular;
    SFVec4f           _sfPosition;
    SFVec3f           _sfDirection;
    SFReal32          _sfExponent;
    SFReal32          _sfCutoff;
    SFReal32          _sfConstantAttenuation;
    SFReal32          _sfLinearAttenuation;
    SFReal32          _sfQuadraticAttenuation;
    SFWeakNodePtr     _sfBeacon;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    LightChunkBase(void);
    LightChunkBase(const LightChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LightChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const LightChunk *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleDiffuse         (void) const;
     EditFieldHandlePtr editHandleDiffuse        (void);
     GetFieldHandlePtr  getHandleAmbient         (void) const;
     EditFieldHandlePtr editHandleAmbient        (void);
     GetFieldHandlePtr  getHandleSpecular        (void) const;
     EditFieldHandlePtr editHandleSpecular       (void);
     GetFieldHandlePtr  getHandlePosition        (void) const;
     EditFieldHandlePtr editHandlePosition       (void);
     GetFieldHandlePtr  getHandleDirection       (void) const;
     EditFieldHandlePtr editHandleDirection      (void);
     GetFieldHandlePtr  getHandleExponent        (void) const;
     EditFieldHandlePtr editHandleExponent       (void);
     GetFieldHandlePtr  getHandleCutoff          (void) const;
     EditFieldHandlePtr editHandleCutoff         (void);
     GetFieldHandlePtr  getHandleConstantAttenuation (void) const;
     EditFieldHandlePtr editHandleConstantAttenuation(void);
     GetFieldHandlePtr  getHandleLinearAttenuation (void) const;
     EditFieldHandlePtr editHandleLinearAttenuation(void);
     GetFieldHandlePtr  getHandleQuadraticAttenuation (void) const;
     EditFieldHandlePtr editHandleQuadraticAttenuation(void);
     GetFieldHandlePtr  getHandleBeacon          (void) const;
     EditFieldHandlePtr editHandleBeacon         (void);

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

            void execSync (      LightChunkBase *pFrom,
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
    void operator =(const LightChunkBase &source);
};

typedef LightChunkBase *LightChunkBaseP;

OSG_END_NAMESPACE

#endif /* _OSGLIGHTCHUNKBASE_H_ */
