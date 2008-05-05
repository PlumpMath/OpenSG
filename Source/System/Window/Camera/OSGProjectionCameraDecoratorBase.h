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
 **     class ProjectionCameraDecorator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPROJECTIONCAMERADECORATORBASE_H_
#define _OSGPROJECTIONCAMERADECORATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGBaseTypes.h"

#include "OSGStereoCameraDecorator.h" // Parent

#include "OSGNodeFields.h" // User type
#include "OSGPnt3fFields.h" // Surface type
#include "OSGPlaneFields.h" // Left type
#include "OSGPlaneFields.h" // Bottom type
#include "OSGPlaneFields.h" // Normal type
#include "OSGReal32Fields.h" // Width type
#include "OSGReal32Fields.h" // Height type

#include "OSGProjectionCameraDecoratorFields.h"

OSG_BEGIN_NAMESPACE

class ProjectionCameraDecorator;

//! \brief ProjectionCameraDecorator Base Class.

class OSG_WINDOW_DLLMAPPING ProjectionCameraDecoratorBase : public StereoCameraDecorator
{
  public:

    typedef StereoCameraDecorator Inherited;
    typedef StereoCameraDecorator ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ProjectionCameraDecorator);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        UserFieldId = Inherited::NextFieldId,
        SurfaceFieldId = UserFieldId + 1,
        LeftFieldId = SurfaceFieldId + 1,
        BottomFieldId = LeftFieldId + 1,
        NormalFieldId = BottomFieldId + 1,
        WidthFieldId = NormalFieldId + 1,
        HeightFieldId = WidthFieldId + 1,
        NextFieldId = HeightFieldId + 1
    };

    static const OSG::BitVector UserFieldMask =
        (TypeTraits<BitVector>::One << UserFieldId);
    static const OSG::BitVector SurfaceFieldMask =
        (TypeTraits<BitVector>::One << SurfaceFieldId);
    static const OSG::BitVector LeftFieldMask =
        (TypeTraits<BitVector>::One << LeftFieldId);
    static const OSG::BitVector BottomFieldMask =
        (TypeTraits<BitVector>::One << BottomFieldId);
    static const OSG::BitVector NormalFieldMask =
        (TypeTraits<BitVector>::One << NormalFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
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

            const SFUnrecNodePtr      *getSFUser           (void) const;
                  SFUnrecNodePtr      *editSFUser           (void);

#ifdef OSG_1_GET_COMPAT
                  MFPnt3f             *getMFSurface         (void);
#endif
                  MFPnt3f             *editMFSurface        (void);
            const MFPnt3f             *getMFSurface         (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFWidth           (void);
#endif
                  SFReal32            *editSFWidth          (void);
            const SFReal32            *getSFWidth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFReal32            *getSFHeight          (void);
#endif
                  SFReal32            *editSFHeight         (void);
            const SFReal32            *getSFHeight          (void) const;


                  Node * getUser           (void) const;

#ifdef OSG_1_GET_COMPAT
                  Pnt3f               &getSurface         (const UInt32 index);
                  MFPnt3f             &getSurface        (void);
#endif
                  Pnt3f               &editSurface        (const UInt32 index);
            const Pnt3f                getSurface         (const UInt32 index) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getWidth           (void);
#endif
                  Real32              &editWidth          (void);
            const Real32               getWidth           (void) const;

#ifdef OSG_1_GET_COMPAT
                  Real32              &getHeight          (void);
#endif
                  Real32              &editHeight         (void);
            const Real32               getHeight          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setUser           (Node * const value);
            void setWidth          (const Real32 &value);
            void setHeight         (const Real32 &value);

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

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  ProjectionCameraDecoratorTransitPtr  create          (void);
    static  ProjectionCameraDecorator           *createEmpty     (void);

    static  ProjectionCameraDecoratorTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ProjectionCameraDecorator            *createEmptyLocal(
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

    SFUnrecNodePtr    _sfUser;
    MFPnt3f           _mfSurface;
    SFPlane           _sfLeft;
    SFPlane           _sfBottom;
    SFPlane           _sfNormal;
    SFReal32          _sfWidth;
    SFReal32          _sfHeight;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ProjectionCameraDecoratorBase(void);
    ProjectionCameraDecoratorBase(const ProjectionCameraDecoratorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ProjectionCameraDecoratorBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ProjectionCameraDecorator *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleUser            (void) const;
    EditFieldHandlePtr editHandleUser           (void);
    GetFieldHandlePtr  getHandleSurface         (void) const;
    EditFieldHandlePtr editHandleSurface        (void);
    GetFieldHandlePtr  getHandleLeft            (void) const;
    EditFieldHandlePtr editHandleLeft           (void);
    GetFieldHandlePtr  getHandleBottom          (void) const;
    EditFieldHandlePtr editHandleBottom         (void);
    GetFieldHandlePtr  getHandleNormal          (void) const;
    EditFieldHandlePtr editHandleNormal         (void);
    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleHeight          (void) const;
    EditFieldHandlePtr editHandleHeight         (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFPlane             *editSFLeft           (void);
            const SFPlane             *getSFLeft            (void) const;

                  SFPlane             *editSFBottom         (void);
            const SFPlane             *getSFBottom          (void) const;

                  SFPlane             *editSFNormal         (void);
            const SFPlane             *getSFNormal          (void) const;


                  Plane               &editLeft           (void);
            const Plane                getLeft            (void) const;

                  Plane               &editBottom         (void);
            const Plane                getBottom          (void) const;

                  Plane               &editNormal         (void);
            const Plane                getNormal          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setLeft           (const Plane &value);
            void setBottom         (const Plane &value);
            void setNormal         (const Plane &value);

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

            void execSync (      ProjectionCameraDecoratorBase *pFrom,
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
    void operator =(const ProjectionCameraDecoratorBase &source);
};

typedef ProjectionCameraDecoratorBase *ProjectionCameraDecoratorBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPROJECTIONCAMERADECORATORBASE_H_ */
