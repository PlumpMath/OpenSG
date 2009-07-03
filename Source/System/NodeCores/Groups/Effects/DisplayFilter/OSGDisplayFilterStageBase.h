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
 **     class DisplayFilterStage
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDISPLAYFILTERSTAGEBASE_H_
#define _OSGDISPLAYFILTERSTAGEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGStage.h" // Parent

#include "OSGResolutionDisplayFilterFields.h" // ResolutionFilter type
#include "OSGColorDisplayFilterFields.h" // ColorFilter type
#include "OSGDistortionDisplayFilterFields.h" // DistortionFilter type
#include "OSGDisplayFilterGroupFields.h" // FilterGroups type

#include "OSGDisplayFilterStageFields.h"

OSG_BEGIN_NAMESPACE

class DisplayFilterStage;

//! \brief DisplayFilterStage Base Class.

class OSG_EFFECTGROUPS_DLLMAPPING DisplayFilterStageBase : public Stage
{
  public:

    typedef Stage Inherited;
    typedef Stage ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(DisplayFilterStage);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ResolutionFilterFieldId = Inherited::NextFieldId,
        ColorFilterFieldId = ResolutionFilterFieldId + 1,
        DistortionFilterFieldId = ColorFilterFieldId + 1,
        FilterGroupsFieldId = DistortionFilterFieldId + 1,
        NextFieldId = FilterGroupsFieldId + 1
    };

    static const OSG::BitVector ResolutionFilterFieldMask =
        (TypeTraits<BitVector>::One << ResolutionFilterFieldId);
    static const OSG::BitVector ColorFilterFieldMask =
        (TypeTraits<BitVector>::One << ColorFilterFieldId);
    static const OSG::BitVector DistortionFilterFieldMask =
        (TypeTraits<BitVector>::One << DistortionFilterFieldId);
    static const OSG::BitVector FilterGroupsFieldMask =
        (TypeTraits<BitVector>::One << FilterGroupsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecResolutionDisplayFilterPtr SFResolutionFilterType;
    typedef SFUnrecColorDisplayFilterPtr SFColorFilterType;
    typedef SFUnrecDistortionDisplayFilterPtr SFDistortionFilterType;
    typedef MFUnrecDisplayFilterGroupPtr MFFilterGroupsType;

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

            const SFUnrecResolutionDisplayFilterPtr *getSFResolutionFilter(void) const;
                  SFUnrecResolutionDisplayFilterPtr *editSFResolutionFilter(void);
            const SFUnrecColorDisplayFilterPtr *getSFColorFilter    (void) const;
                  SFUnrecColorDisplayFilterPtr *editSFColorFilter    (void);
            const SFUnrecDistortionDisplayFilterPtr *getSFDistortionFilter(void) const;
                  SFUnrecDistortionDisplayFilterPtr *editSFDistortionFilter(void);
            const MFUnrecDisplayFilterGroupPtr *getMFFilterGroups   (void) const;
                  MFUnrecDisplayFilterGroupPtr *editMFFilterGroups   (void);


                  ResolutionDisplayFilter * getResolutionFilter(void) const;

                  ColorDisplayFilter * getColorFilter    (void) const;

                  DistortionDisplayFilter * getDistortionFilter(void) const;

                  DisplayFilterGroup * getFilterGroups   (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setResolutionFilter(ResolutionDisplayFilter * const value);
            void setColorFilter    (ColorDisplayFilter * const value);
            void setDistortionFilter(DistortionDisplayFilter * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToFilterGroups           (DisplayFilterGroup * const value   );
    void assignFilterGroups          (const MFUnrecDisplayFilterGroupPtr &value);
    void removeFromFilterGroups (UInt32               uiIndex );
    void removeObjFromFilterGroups(DisplayFilterGroup * const value   );
    void clearFilterGroups            (void                         );

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

    static  DisplayFilterStageTransitPtr  create          (void);
    static  DisplayFilterStage           *createEmpty     (void);

    static  DisplayFilterStageTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  DisplayFilterStage            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  DisplayFilterStageTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecResolutionDisplayFilterPtr _sfResolutionFilter;
    SFUnrecColorDisplayFilterPtr _sfColorFilter;
    SFUnrecDistortionDisplayFilterPtr _sfDistortionFilter;
    MFUnrecDisplayFilterGroupPtr _mfFilterGroups;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DisplayFilterStageBase(void);
    DisplayFilterStageBase(const DisplayFilterStageBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DisplayFilterStageBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const DisplayFilterStage *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleResolutionFilter (void) const;
    EditFieldHandlePtr editHandleResolutionFilter(void);
    GetFieldHandlePtr  getHandleColorFilter     (void) const;
    EditFieldHandlePtr editHandleColorFilter    (void);
    GetFieldHandlePtr  getHandleDistortionFilter (void) const;
    EditFieldHandlePtr editHandleDistortionFilter(void);
    GetFieldHandlePtr  getHandleFilterGroups    (void) const;
    EditFieldHandlePtr editHandleFilterGroups   (void);

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

            void execSync (      DisplayFilterStageBase *pFrom,
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
    void operator =(const DisplayFilterStageBase &source);
};

typedef DisplayFilterStageBase *DisplayFilterStageBaseP;

OSG_END_NAMESPACE

#endif /* _OSGDISPLAYFILTERSTAGEBASE_H_ */
