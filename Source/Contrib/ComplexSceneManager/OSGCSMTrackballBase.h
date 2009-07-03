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
 **     class CSMTrackball
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCSMTRACKBALLBASE_H_
#define _OSGCSMTRACKBALLBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGSysFields.h" // ModifierMask type
#include "OSGMathFields.h" // MatrixResult type
#include "OSGVecFields.h" // ReferencePosition type
#include "OSGMouseDataFields.h" // MouseData type

#include "OSGCSMTrackballFields.h"

OSG_BEGIN_NAMESPACE

class CSMTrackball;

//! \brief CSMTrackball Base Class.

class OSG_CONTRIBCSM_DLLMAPPING CSMTrackballBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CSMTrackball);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ModifierMaskFieldId = Inherited::NextFieldId,
        ProcessingFieldId = ModifierMaskFieldId + 1,
        TranslationScaleFactorFieldId = ProcessingFieldId + 1,
        MatrixResultFieldId = TranslationScaleFactorFieldId + 1,
        ReferencePositionFieldId = MatrixResultFieldId + 1,
        ReferenceMatrixFieldId = ReferencePositionFieldId + 1,
        TransformCenterFieldId = ReferenceMatrixFieldId + 1,
        WorldDiagFieldId = TransformCenterFieldId + 1,
        MouseDataFieldId = WorldDiagFieldId + 1,
        NextFieldId = MouseDataFieldId + 1
    };

    static const OSG::BitVector ModifierMaskFieldMask =
        (TypeTraits<BitVector>::One << ModifierMaskFieldId);
    static const OSG::BitVector ProcessingFieldMask =
        (TypeTraits<BitVector>::One << ProcessingFieldId);
    static const OSG::BitVector TranslationScaleFactorFieldMask =
        (TypeTraits<BitVector>::One << TranslationScaleFactorFieldId);
    static const OSG::BitVector MatrixResultFieldMask =
        (TypeTraits<BitVector>::One << MatrixResultFieldId);
    static const OSG::BitVector ReferencePositionFieldMask =
        (TypeTraits<BitVector>::One << ReferencePositionFieldId);
    static const OSG::BitVector ReferenceMatrixFieldMask =
        (TypeTraits<BitVector>::One << ReferenceMatrixFieldId);
    static const OSG::BitVector TransformCenterFieldMask =
        (TypeTraits<BitVector>::One << TransformCenterFieldId);
    static const OSG::BitVector WorldDiagFieldMask =
        (TypeTraits<BitVector>::One << WorldDiagFieldId);
    static const OSG::BitVector MouseDataFieldMask =
        (TypeTraits<BitVector>::One << MouseDataFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUInt32          SFModifierMaskType;
    typedef SFUInt32          SFProcessingType;
    typedef SFReal32          SFTranslationScaleFactorType;
    typedef SFMatrix          SFMatrixResultType;
    typedef SFPnt3f           SFReferencePositionType;
    typedef SFMatrix          SFReferenceMatrixType;
    typedef SFPnt3f           SFTransformCenterType;
    typedef SFVec3f           SFWorldDiagType;
    typedef SFMouseData       SFMouseDataType;

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


                  SFUInt32            *editSFModifierMask   (void);
            const SFUInt32            *getSFModifierMask    (void) const;

                  SFReal32            *editSFTranslationScaleFactor(void);
            const SFReal32            *getSFTranslationScaleFactor (void) const;

                  SFMatrix            *editSFMatrixResult   (void);
            const SFMatrix            *getSFMatrixResult    (void) const;

                  SFPnt3f             *editSFReferencePosition(void);
            const SFPnt3f             *getSFReferencePosition (void) const;

                  SFMatrix            *editSFReferenceMatrix(void);
            const SFMatrix            *getSFReferenceMatrix (void) const;

                  SFPnt3f             *editSFTransformCenter(void);
            const SFPnt3f             *getSFTransformCenter (void) const;

                  SFVec3f             *editSFWorldDiag      (void);
            const SFVec3f             *getSFWorldDiag       (void) const;

                  SFMouseData         *editSFMouseData      (void);
            const SFMouseData         *getSFMouseData       (void) const;


                  UInt32              &editModifierMask   (void);
                  UInt32               getModifierMask    (void) const;

                  Real32              &editTranslationScaleFactor(void);
                  Real32               getTranslationScaleFactor (void) const;

                  Matrix              &editMatrixResult   (void);
            const Matrix              &getMatrixResult    (void) const;

                  Pnt3f               &editReferencePosition(void);
            const Pnt3f               &getReferencePosition (void) const;

                  Matrix              &editReferenceMatrix(void);
            const Matrix              &getReferenceMatrix (void) const;

                  Pnt3f               &editTransformCenter(void);
            const Pnt3f               &getTransformCenter (void) const;

                  Vec3f               &editWorldDiag      (void);
            const Vec3f               &getWorldDiag       (void) const;

                  MouseData           &editMouseData      (void);
            const MouseData           &getMouseData       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setModifierMask   (const UInt32 value);
            void setTranslationScaleFactor(const Real32 value);
            void setMatrixResult   (const Matrix &value);
            void setReferencePosition(const Pnt3f &value);
            void setReferenceMatrix(const Matrix &value);
            void setTransformCenter(const Pnt3f &value);
            void setWorldDiag      (const Vec3f &value);
            void setMouseData      (const MouseData &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

    static  CSMTrackballTransitPtr  create          (void);
    static  CSMTrackball           *createEmpty     (void);

    static  CSMTrackballTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  CSMTrackball            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  CSMTrackballTransitPtr  createDependent  (BitVector bFlags);

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

    SFUInt32          _sfModifierMask;
    SFUInt32          _sfProcessing;
    SFReal32          _sfTranslationScaleFactor;
    SFMatrix          _sfMatrixResult;
    SFPnt3f           _sfReferencePosition;
    SFMatrix          _sfReferenceMatrix;
    SFPnt3f           _sfTransformCenter;
    SFVec3f           _sfWorldDiag;
    SFMouseData       _sfMouseData;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CSMTrackballBase(void);
    CSMTrackballBase(const CSMTrackballBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CSMTrackballBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleModifierMask    (void) const;
    EditFieldHandlePtr editHandleModifierMask   (void);
    GetFieldHandlePtr  getHandleProcessing      (void) const;
    EditFieldHandlePtr editHandleProcessing     (void);
    GetFieldHandlePtr  getHandleTranslationScaleFactor (void) const;
    EditFieldHandlePtr editHandleTranslationScaleFactor(void);
    GetFieldHandlePtr  getHandleMatrixResult    (void) const;
    EditFieldHandlePtr editHandleMatrixResult   (void);
    GetFieldHandlePtr  getHandleReferencePosition (void) const;
    EditFieldHandlePtr editHandleReferencePosition(void);
    GetFieldHandlePtr  getHandleReferenceMatrix (void) const;
    EditFieldHandlePtr editHandleReferenceMatrix(void);
    GetFieldHandlePtr  getHandleTransformCenter (void) const;
    EditFieldHandlePtr editHandleTransformCenter(void);
    GetFieldHandlePtr  getHandleWorldDiag       (void) const;
    EditFieldHandlePtr editHandleWorldDiag      (void);
    GetFieldHandlePtr  getHandleMouseData       (void) const;
    EditFieldHandlePtr editHandleMouseData      (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt32            *editSFProcessing     (void);
            const SFUInt32            *getSFProcessing      (void) const;


                  UInt32              &editProcessing     (void);
                  UInt32               getProcessing      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setProcessing     (const UInt32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

            void execSync (      CSMTrackballBase *pFrom,
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
    void operator =(const CSMTrackballBase &source);
};

typedef CSMTrackballBase *CSMTrackballBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCSMTRACKBALLBASE_H_ */
