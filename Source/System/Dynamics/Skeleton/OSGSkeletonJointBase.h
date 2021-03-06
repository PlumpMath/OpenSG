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
 **     class SkeletonJoint
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSKELETONJOINTBASE_H_
#define _OSGSKELETONJOINTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGBaseSkeletonJoint.h" // Parent

#include "OSGMathFields.h"              // InvBindMatrix type

#include "OSGSkeletonJointFields.h"

OSG_BEGIN_NAMESPACE


class SkeletonJoint;

//! \brief SkeletonJoint Base Class.

class OSG_DYNAMICS_DLLMAPPING SkeletonJointBase : public BaseSkeletonJoint
{
  public:

    typedef BaseSkeletonJoint Inherited;
    typedef BaseSkeletonJoint ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SkeletonJoint);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        InvBindMatrixFieldId = Inherited::NextFieldId,
        MatrixFieldId = InvBindMatrixFieldId + 1,
        OffsetMatrixFieldId = MatrixFieldId + 1,
        NextFieldId = OffsetMatrixFieldId + 1
    };

    static const OSG::BitVector InvBindMatrixFieldMask =
        (TypeTraits<BitVector>::One << InvBindMatrixFieldId);
    static const OSG::BitVector MatrixFieldMask =
        (TypeTraits<BitVector>::One << MatrixFieldId);
    static const OSG::BitVector OffsetMatrixFieldMask =
        (TypeTraits<BitVector>::One << OffsetMatrixFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFMatrix          SFInvBindMatrixType;
    typedef SFMatrix          SFMatrixType;
    typedef SFMatrix          SFOffsetMatrixType;

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


                  SFMatrix            *editSFInvBindMatrix  (void);
            const SFMatrix            *getSFInvBindMatrix   (void) const;

                  SFMatrix            *editSFMatrix         (void);
            const SFMatrix            *getSFMatrix          (void) const;

                  SFMatrix            *editSFOffsetMatrix   (void);
            const SFMatrix            *getSFOffsetMatrix    (void) const;


                  Matrix              &editInvBindMatrix  (void);
            const Matrix              &getInvBindMatrix   (void) const;

                  Matrix              &editMatrix         (void);
            const Matrix              &getMatrix          (void) const;

                  Matrix              &editOffsetMatrix   (void);
            const Matrix              &getOffsetMatrix    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setInvBindMatrix  (const Matrix &value);
            void setMatrix         (const Matrix &value);
            void setOffsetMatrix   (const Matrix &value);

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

    static  SkeletonJointTransitPtr  create          (void);
    static  SkeletonJoint           *createEmpty     (void);

    static  SkeletonJointTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  SkeletonJoint            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  SkeletonJointTransitPtr  createDependent  (BitVector bFlags);

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

    SFMatrix          _sfInvBindMatrix;
    SFMatrix          _sfMatrix;
    SFMatrix          _sfOffsetMatrix;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SkeletonJointBase(void);
    SkeletonJointBase(const SkeletonJointBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SkeletonJointBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleInvBindMatrix   (void) const;
     EditFieldHandlePtr editHandleInvBindMatrix  (void);
     GetFieldHandlePtr  getHandleMatrix          (void) const;
     EditFieldHandlePtr editHandleMatrix         (void);
     GetFieldHandlePtr  getHandleOffsetMatrix    (void) const;
     EditFieldHandlePtr editHandleOffsetMatrix   (void);

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

            void execSync (      SkeletonJointBase *pFrom,
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
    void operator =(const SkeletonJointBase &source);
};

typedef SkeletonJointBase *SkeletonJointBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSKELETONJOINTBASE_H_ */
