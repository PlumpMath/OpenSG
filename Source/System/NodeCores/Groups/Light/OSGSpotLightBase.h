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
 **     class SpotLight
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSPOTLIGHTBASE_H_
#define _OSGSPOTLIGHTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

//#include "OSGBaseTypes.h"

#include "OSGPointLight.h" // Parent

#include "OSGVecFields.h" // Direction type
#include "OSGSysFields.h" // SpotExponent type

#include "OSGSpotLightFields.h"

OSG_BEGIN_NAMESPACE

class SpotLight;

//! \brief SpotLight Base Class.

class OSG_GROUP_DLLMAPPING SpotLightBase : public PointLight
{
  public:

    typedef PointLight Inherited;
    typedef PointLight ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SpotLight);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        DirectionFieldId = Inherited::NextFieldId,
        SpotExponentFieldId = DirectionFieldId + 1,
        SpotCutOffFieldId = SpotExponentFieldId + 1,
        NextFieldId = SpotCutOffFieldId + 1
    };

    static const OSG::BitVector DirectionFieldMask =
        (TypeTraits<BitVector>::One << DirectionFieldId);
    static const OSG::BitVector SpotExponentFieldMask =
        (TypeTraits<BitVector>::One << SpotExponentFieldId);
    static const OSG::BitVector SpotCutOffFieldMask =
        (TypeTraits<BitVector>::One << SpotCutOffFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFVec3r           SFDirectionType;
    typedef SFReal            SFSpotExponentType;
    typedef SFReal            SFSpotCutOffType;

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


                  SFVec3r             *editSFDirection      (void);
            const SFVec3r             *getSFDirection       (void) const;

                  SFReal              *editSFSpotExponent   (void);
            const SFReal              *getSFSpotExponent    (void) const;

                  SFReal              *editSFSpotCutOff     (void);
            const SFReal              *getSFSpotCutOff      (void) const;


                  Vec3r               &editDirection      (void);
            const Vec3r               &getDirection       (void) const;

                  Real                &editSpotExponent   (void);
                  Real                 getSpotExponent    (void) const;

                  Real                &editSpotCutOff     (void);
                  Real                 getSpotCutOff      (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDirection      (const Vec3r &value);
            void setSpotExponent   (const Real value);
            void setSpotCutOff     (const Real value);

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

    static  SpotLightTransitPtr  create          (void);
    static  SpotLight           *createEmpty     (void);

    static  SpotLightTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  SpotLight            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  SpotLightTransitPtr  createDependent  (BitVector bFlags);

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

    SFVec3r           _sfDirection;
    SFReal            _sfSpotExponent;
    SFReal            _sfSpotCutOff;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SpotLightBase(void);
    SpotLightBase(const SpotLightBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SpotLightBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleDirection       (void) const;
    EditFieldHandlePtr editHandleDirection      (void);
    GetFieldHandlePtr  getHandleSpotExponent    (void) const;
    EditFieldHandlePtr editHandleSpotExponent   (void);
    GetFieldHandlePtr  getHandleSpotCutOff      (void) const;
    EditFieldHandlePtr editHandleSpotCutOff     (void);

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

            void execSync (      SpotLightBase *pFrom,
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
    void operator =(const SpotLightBase &source);
};

typedef SpotLightBase *SpotLightBaseP;

typedef CoredNodeRefPtr  <SpotLight> SpotLightNodeRefPtr;
typedef CoredNodeMTRefPtr<SpotLight> SpotLightNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGSPOTLIGHTBASE_H_ */
