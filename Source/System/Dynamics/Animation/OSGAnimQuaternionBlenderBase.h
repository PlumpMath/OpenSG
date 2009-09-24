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
 **     class AnimQuaternionBlender
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGANIMQUATERNIONBLENDERBASE_H_
#define _OSGANIMQUATERNIONBLENDERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDynamicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAnimBlender.h" // Parent

#include "OSGAnimQuaternionChannelFields.h" // Channels type
#include "OSGMathFields.h"              // OutValue type

#include "OSGAnimQuaternionBlenderFields.h"

OSG_BEGIN_NAMESPACE

class AnimQuaternionBlender;

//! \brief AnimQuaternionBlender Base Class.

class OSG_DYNAMICS_DLLMAPPING AnimQuaternionBlenderBase : public AnimBlender
{
  public:

    typedef AnimBlender Inherited;
    typedef AnimBlender ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(AnimQuaternionBlender);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ChannelsFieldId = Inherited::NextFieldId,
        OutValueFieldId = ChannelsFieldId + 1,
        NextFieldId = OutValueFieldId + 1
    };

    static const OSG::BitVector ChannelsFieldMask =
        (TypeTraits<BitVector>::One << ChannelsFieldId);
    static const OSG::BitVector OutValueFieldMask =
        (TypeTraits<BitVector>::One << OutValueFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFUnrecAnimQuaternionChannelPtr MFChannelsType;
    typedef SFQuaternion      SFOutValueType;

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

            const MFUnrecAnimQuaternionChannelPtr *getMFChannels       (void) const;
                  MFUnrecAnimQuaternionChannelPtr *editMFChannels       (void);

                  SFQuaternion        *editSFOutValue       (void);
            const SFQuaternion        *getSFOutValue        (void) const;


                  AnimQuaternionChannel * getChannels       (const UInt32 index) const;

                  Quaternion          &editOutValue       (void);
            const Quaternion          &getOutValue        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setOutValue       (const Quaternion &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToChannels            (AnimQuaternionChannel * const value   );
    void assignChannels           (const MFUnrecAnimQuaternionChannelPtr &value);
    void removeFromChannels (UInt32               uiIndex );
    void removeObjFromChannels(AnimQuaternionChannel * const value   );
    void clearChannels              (void                         );

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

    static  AnimQuaternionBlenderTransitPtr  create          (void);
    static  AnimQuaternionBlender           *createEmpty     (void);

    static  AnimQuaternionBlenderTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  AnimQuaternionBlender            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  AnimQuaternionBlenderTransitPtr  createDependent  (BitVector bFlags);

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

    MFUnrecAnimQuaternionChannelPtr _mfChannels;
    SFQuaternion      _sfOutValue;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    AnimQuaternionBlenderBase(void);
    AnimQuaternionBlenderBase(const AnimQuaternionBlenderBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~AnimQuaternionBlenderBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const AnimQuaternionBlender *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleChannels        (void) const;
    EditFieldHandlePtr editHandleChannels       (void);
    GetFieldHandlePtr  getHandleOutValue        (void) const;
    EditFieldHandlePtr editHandleOutValue       (void);

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

            void execSync (      AnimQuaternionBlenderBase *pFrom,
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
    void operator =(const AnimQuaternionBlenderBase &source);
};

typedef AnimQuaternionBlenderBase *AnimQuaternionBlenderBaseP;

typedef CoredNodeRefPtr  <AnimQuaternionBlender> AnimQuaternionBlenderNodeRefPtr;
typedef CoredNodeMTRefPtr<AnimQuaternionBlender> AnimQuaternionBlenderNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGANIMQUATERNIONBLENDERBASE_H_ */
