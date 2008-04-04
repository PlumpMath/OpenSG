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
 **     class Viewport
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGVIEWPORTBASE_H_
#define _OSGVIEWPORTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGReal32Fields.h" // Left type
#include "OSGReal32Fields.h" // Right type
#include "OSGReal32Fields.h" // Bottom type
#include "OSGReal32Fields.h" // Top type
#include "OSGFieldContainerFields.h" // Parent type
#include "OSGCameraFields.h" // Camera type
#include "OSGNodeFields.h" // Root type
#include "OSGBackgroundFields.h" // Background type
#include "OSGForegroundFields.h" // Foregrounds type
#include "OSGUInt32Fields.h" // TravMask type
#include "OSGReal32Fields.h" // DrawTime type

#include "OSGViewportFields.h"

OSG_BEGIN_NAMESPACE

class Viewport;

//! \brief Viewport Base Class.

class OSG_SYSTEM_DLLMAPPING ViewportBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Viewport);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        LeftFieldId = Inherited::NextFieldId,
        RightFieldId = LeftFieldId + 1,
        BottomFieldId = RightFieldId + 1,
        TopFieldId = BottomFieldId + 1,
        ParentFieldId = TopFieldId + 1,
        CameraFieldId = ParentFieldId + 1,
        RootFieldId = CameraFieldId + 1,
        BackgroundFieldId = RootFieldId + 1,
        ForegroundsFieldId = BackgroundFieldId + 1,
        TravMaskFieldId = ForegroundsFieldId + 1,
        DrawTimeFieldId = TravMaskFieldId + 1,
        NextFieldId = DrawTimeFieldId + 1
    };

    static const OSG::BitVector LeftFieldMask =
        (TypeTraits<BitVector>::One << LeftFieldId);
    static const OSG::BitVector RightFieldMask =
        (TypeTraits<BitVector>::One << RightFieldId);
    static const OSG::BitVector BottomFieldMask =
        (TypeTraits<BitVector>::One << BottomFieldId);
    static const OSG::BitVector TopFieldMask =
        (TypeTraits<BitVector>::One << TopFieldId);
    static const OSG::BitVector ParentFieldMask =
        (TypeTraits<BitVector>::One << ParentFieldId);
    static const OSG::BitVector CameraFieldMask =
        (TypeTraits<BitVector>::One << CameraFieldId);
    static const OSG::BitVector RootFieldMask =
        (TypeTraits<BitVector>::One << RootFieldId);
    static const OSG::BitVector BackgroundFieldMask =
        (TypeTraits<BitVector>::One << BackgroundFieldId);
    static const OSG::BitVector ForegroundsFieldMask =
        (TypeTraits<BitVector>::One << ForegroundsFieldId);
    static const OSG::BitVector TravMaskFieldMask =
        (TypeTraits<BitVector>::One << TravMaskFieldId);
    static const OSG::BitVector DrawTimeFieldMask =
        (TypeTraits<BitVector>::One << DrawTimeFieldId);
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


#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFLeft            (void);
#endif
                  SFReal32            *editSFLeft           (void);
            const SFReal32            *getSFLeft            (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFRight           (void);
#endif
                  SFReal32            *editSFRight          (void);
            const SFReal32            *getSFRight           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFBottom          (void);
#endif
                  SFReal32            *editSFBottom         (void);
            const SFReal32            *getSFBottom          (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFTop             (void);
#endif
                  SFReal32            *editSFTop            (void);
            const SFReal32            *getSFTop             (void) const;
            const SFUnrecCameraPtr    *getSFCamera          (void) const;
            const SFUnrecNodePtr      *getSFRoot            (void) const;
            const SFUnrecBackgroundPtr *getSFBackground      (void) const;
            const MFUnrecForegroundPtr *getMFForegrounds     (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFUInt32            *getSFTravMask        (void);
#endif
                  SFUInt32            *editSFTravMask       (void);
            const SFUInt32            *getSFTravMask        (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFDrawTime        (void);
#endif
                  SFReal32            *editSFDrawTime       (void);
            const SFReal32            *getSFDrawTime        (void) const;


#ifdef OSG_1_GET_COMPAT
                  Real32              &getLeft            (void);
#endif
                  Real32              &editLeft           (void);
            const Real32              &getLeft            (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getRight           (void);
#endif
                  Real32              &editRight          (void);
            const Real32              &getRight           (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getBottom          (void);
#endif
                  Real32              &editBottom         (void);
            const Real32              &getBottom          (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getTop             (void);
#endif
                  Real32              &editTop            (void);
            const Real32              &getTop             (void) const;

                  CameraPtrConst getCamera         (void) const;

                  NodePtrConst getRoot           (void) const;

                  BackgroundPtrConst getBackground     (void) const;

                  ForegroundPtrConst getForegrounds    (const UInt32 index) const;
            const MFUnrecForegroundPtr &getForegrounds    (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getTravMask        (void);
#endif
                  UInt32              &editTravMask       (void);
            const UInt32              &getTravMask        (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getDrawTime        (void);
#endif
                  Real32              &editDrawTime       (void);
            const Real32              &getDrawTime        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setLeft           (const Real32 &value);
            void setRight          (const Real32 &value);
            void setBottom         (const Real32 &value);
            void setTop            (const Real32 &value);
            void setCamera         (CameraPtrConstArg value);
            void setRoot           (NodePtrConstArg value);
            void setBackground     (BackgroundPtrConstArg value);
            void setTravMask       (const UInt32 &value);
            void setDrawTime       (const Real32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void addForeground             (ForegroundPtrConstArg value   );
    void assignForegrounds           (const MFUnrecForegroundPtr &value);
    void insertIntoForegrounds      (UInt32                uiIndex,
                                             ForegroundPtrConstArg value   );
    void replaceInForegrounds  (UInt32                uiIndex,
                                             ForegroundPtrConstArg value   );
    void replaceInForegrounds (ForegroundPtrConstArg pOldElem,
                                             ForegroundPtrConstArg pNewElem);
    void removeFromForegrounds (UInt32                uiIndex );
    void removeFromForegrounds(ForegroundPtrConstArg value   );
    void clearForegrounds            (void                          );


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

    static  ViewportTransitPtr create          (void);
    static  ViewportPtr        createEmpty     (void);

    static  ViewportTransitPtr createLocal     (
                                              BitVector bFlags = FCLocal::All);

    static  ViewportPtr        createEmptyLocal(
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

    SFReal32          _sfLeft;
    SFReal32          _sfRight;
    SFReal32          _sfBottom;
    SFReal32          _sfTop;
    SFParentFieldContainerPtr _sfParent;
    SFUnrecCameraPtr  _sfCamera;
    SFUnrecNodePtr    _sfRoot;
    SFUnrecBackgroundPtr _sfBackground;
    MFUnrecForegroundPtr _mfForegrounds;
    SFUInt32          _sfTravMask;
    SFReal32          _sfDrawTime;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ViewportBase(void);
    ViewportBase(const ViewportBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ViewportBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Viewport *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleLeft            (void) const;
    EditFieldHandlePtr editHandleLeft           (void);
    GetFieldHandlePtr  getHandleRight           (void) const;
    EditFieldHandlePtr editHandleRight          (void);
    GetFieldHandlePtr  getHandleBottom          (void) const;
    EditFieldHandlePtr editHandleBottom         (void);
    GetFieldHandlePtr  getHandleTop             (void) const;
    EditFieldHandlePtr editHandleTop            (void);
    GetFieldHandlePtr  getHandleParent          (void) const;
    EditFieldHandlePtr editHandleParent         (void);
    GetFieldHandlePtr  getHandleCamera          (void) const;
    EditFieldHandlePtr editHandleCamera         (void);
    GetFieldHandlePtr  getHandleRoot            (void) const;
    EditFieldHandlePtr editHandleRoot           (void);
    GetFieldHandlePtr  getHandleBackground      (void) const;
    EditFieldHandlePtr editHandleBackground     (void);
    GetFieldHandlePtr  getHandleForegrounds     (void) const;
    EditFieldHandlePtr editHandleForegrounds    (void);
    GetFieldHandlePtr  getHandleTravMask        (void) const;
    EditFieldHandlePtr editHandleTravMask       (void);
    GetFieldHandlePtr  getHandleDrawTime        (void) const;
    EditFieldHandlePtr editHandleDrawTime       (void);

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

            void execSync (      ViewportBase *pFrom,
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
    virtual FieldContainerPtr createAspectCopy(void) const;
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

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ViewportBase &source);
};

typedef ViewportBase *ViewportBaseP;

OSG_END_NAMESPACE

#endif /* _OSGVIEWPORTBASE_H_ */
