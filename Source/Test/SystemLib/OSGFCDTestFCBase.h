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
 **     class FCDTestFC
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGFCDTESTFCBASE_H_
#define _OSGFCDTESTFCBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGNodeCore.h" // Parent

#include "OSGUInt32Fields.h" // FieldSFPub type
#include "OSGUInt32Fields.h" // FieldSFPro type
#include "OSGUInt32Fields.h" // FieldSFPri type
#include "OSGUInt32Fields.h" // FieldSFNo type
#include "OSGUInt32Fields.h" // FieldMFPub type
#include "OSGUInt32Fields.h" // FieldMFPro type
#include "OSGUInt32Fields.h" // FieldMFPri type
#include "OSGUInt32Fields.h" // FieldMFNo type

#include "OSGFCDTestFCFields.h"

OSG_BEGIN_NAMESPACE

class FCDTestFC;

//! \brief FCDTestFC Base Class.

class OSG_SYSTEM_DLLMAPPING FCDTestFCBase : public NodeCore
{
  public:

    typedef NodeCore Inherited;
    typedef NodeCore ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(FCDTestFC);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        FieldSFPubFieldId = Inherited::NextFieldId,
        FieldSFProFieldId = FieldSFPubFieldId + 1,
        FieldSFPriFieldId = FieldSFProFieldId + 1,
        FieldSFNoFieldId = FieldSFPriFieldId + 1,
        FieldMFPubFieldId = FieldSFNoFieldId + 1,
        FieldMFProFieldId = FieldMFPubFieldId + 1,
        FieldMFPriFieldId = FieldMFProFieldId + 1,
        FieldMFNoFieldId = FieldMFPriFieldId + 1,
        NextFieldId = FieldMFNoFieldId + 1
    };

    static const OSG::BitVector FieldSFPubFieldMask =
        (TypeTraits<BitVector>::One << FieldSFPubFieldId);
    static const OSG::BitVector FieldSFProFieldMask =
        (TypeTraits<BitVector>::One << FieldSFProFieldId);
    static const OSG::BitVector FieldSFPriFieldMask =
        (TypeTraits<BitVector>::One << FieldSFPriFieldId);
    static const OSG::BitVector FieldSFNoFieldMask =
        (TypeTraits<BitVector>::One << FieldSFNoFieldId);
    static const OSG::BitVector FieldMFPubFieldMask =
        (TypeTraits<BitVector>::One << FieldMFPubFieldId);
    static const OSG::BitVector FieldMFProFieldMask =
        (TypeTraits<BitVector>::One << FieldMFProFieldId);
    static const OSG::BitVector FieldMFPriFieldMask =
        (TypeTraits<BitVector>::One << FieldMFPriFieldId);
    static const OSG::BitVector FieldMFNoFieldMask =
        (TypeTraits<BitVector>::One << FieldMFNoFieldId);
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
                  SFUInt32            *getSFFieldSFPub      (void);
#endif
                  SFUInt32            *editSFFieldSFPub     (void);
            const SFUInt32            *getSFFieldSFPub      (void) const;

#ifdef OSG_1_GET_COMPAT
                  MFUInt32            *getMFFieldMFPub      (void);
#endif
                  MFUInt32            *editMFFieldMFPub     (void);
            const MFUInt32            *getMFFieldMFPub      (void) const;


#ifdef OSG_1_GET_COMPAT
                  UInt32              &getFieldSFPub      (void);
#endif
                  UInt32              &editFieldSFPub     (void);
            const UInt32               getFieldSFPub      (void) const;

#ifdef OSG_1_GET_COMPAT
                  UInt32              &getFieldMFPub      (const UInt32 index);
                  MFUInt32            &getFieldMFPub     (void);
#endif
                  UInt32              &editFieldMFPub     (const UInt32 index);
            const UInt32               getFieldMFPub      (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setFieldSFPub     (const UInt32 &value);

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

    static  FCDTestFCTransitPtr  create          (void);
    static  FCDTestFC           *createEmpty     (void);

    static  FCDTestFCTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  FCDTestFC            *createEmptyLocal(
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

    SFUInt32          _sfFieldSFPub;
    SFUInt32          _sfFieldSFPro;
    SFUInt32          _sfFieldSFNo;
    MFUInt32          _mfFieldMFPub;
    MFUInt32          _mfFieldMFPro;
    MFUInt32          _mfFieldMFNo;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    FCDTestFCBase(void);
    FCDTestFCBase(const FCDTestFCBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~FCDTestFCBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleFieldSFPub      (void) const;
    EditFieldHandlePtr editHandleFieldSFPub     (void);
    GetFieldHandlePtr  getHandleFieldSFPro      (void) const;
    EditFieldHandlePtr editHandleFieldSFPro     (void);
    GetFieldHandlePtr  getHandleFieldSFPri      (void) const;
    EditFieldHandlePtr editHandleFieldSFPri     (void);
    GetFieldHandlePtr  getHandleFieldSFNo       (void) const;
    EditFieldHandlePtr editHandleFieldSFNo      (void);
    GetFieldHandlePtr  getHandleFieldMFPub      (void) const;
    EditFieldHandlePtr editHandleFieldMFPub     (void);
    GetFieldHandlePtr  getHandleFieldMFPro      (void) const;
    EditFieldHandlePtr editHandleFieldMFPro     (void);
    GetFieldHandlePtr  getHandleFieldMFPri      (void) const;
    EditFieldHandlePtr editHandleFieldMFPri     (void);
    GetFieldHandlePtr  getHandleFieldMFNo       (void) const;
    EditFieldHandlePtr editHandleFieldMFNo      (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt32            *editSFFieldSFPro     (void);
            const SFUInt32            *getSFFieldSFPro      (void) const;

                  MFUInt32            *editMFFieldMFPro     (void);
            const MFUInt32            *getMFFieldMFPro      (void) const;


                  UInt32              &editFieldSFPro     (void);
            const UInt32               getFieldSFPro      (void) const;

                  UInt32              &editFieldMFPro     (const UInt32 index);
            const UInt32               getFieldMFPro      (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setFieldSFPro     (const UInt32 &value);

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

            void execSync (      FCDTestFCBase *pFrom,
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
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUInt32          _sfFieldSFPri;
    MFUInt32          _mfFieldMFPri;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt32            *editSFFieldSFPri     (void);
            const SFUInt32            *getSFFieldSFPri      (void) const;

                  MFUInt32            *editMFFieldMFPri     (void);
            const MFUInt32            *getMFFieldMFPri      (void) const;

                  UInt32              &editFieldSFPri     (void);
            const UInt32               getFieldSFPri     (void) const;

                  UInt32              &editFieldMFPri     (const UInt32 index);
            const UInt32               getFieldMFPri      (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setFieldSFPri     (const UInt32 &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const FCDTestFCBase &source);
};

typedef FCDTestFCBase *FCDTestFCBaseP;

typedef CoredNodeRefPtr  <FCDTestFC> FCDTestFCNodeRefPtr;
typedef CoredNodeMTRefPtr<FCDTestFC> FCDTestFCNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGFCDTESTFCBASE_H_ */
