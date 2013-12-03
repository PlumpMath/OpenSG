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
 **     class PipelineComposer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPIPELINECOMPOSERBASE_H_
#define _OSGPIPELINECOMPOSERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGClusterDef.h"

//#include "OSGBaseTypes.h"

#include "OSGImageComposer.h" // Parent

#include "OSGSysFields.h"               // Short type

#include "OSGPipelineComposerFields.h"

OSG_BEGIN_NAMESPACE


class PipelineComposer;

//! \brief PipelineComposer Base Class.

class OSG_CLUSTER_DLLMAPPING PipelineComposerBase : public ImageComposer
{
  public:

    typedef ImageComposer Inherited;
    typedef ImageComposer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(PipelineComposer);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ShortFieldId = Inherited::NextFieldId,
        AlphaFieldId = ShortFieldId + 1,
        TileSizeFieldId = AlphaFieldId + 1,
        PipelinedFieldId = TileSizeFieldId + 1,
        NextFieldId = PipelinedFieldId + 1
    };

    static const OSG::BitVector ShortFieldMask =
        (TypeTraits<BitVector>::One << ShortFieldId);
    static const OSG::BitVector AlphaFieldMask =
        (TypeTraits<BitVector>::One << AlphaFieldId);
    static const OSG::BitVector TileSizeFieldMask =
        (TypeTraits<BitVector>::One << TileSizeFieldId);
    static const OSG::BitVector PipelinedFieldMask =
        (TypeTraits<BitVector>::One << PipelinedFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFBool            SFShortType;
    typedef SFBool            SFAlphaType;
    typedef SFUInt32          SFTileSizeType;
    typedef SFBool            SFPipelinedType;

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


                  SFBool              *editSFShort          (void);
            const SFBool              *getSFShort           (void) const;

                  SFBool              *editSFAlpha          (void);
            const SFBool              *getSFAlpha           (void) const;

                  SFUInt32            *editSFTileSize       (void);
            const SFUInt32            *getSFTileSize        (void) const;

                  SFBool              *editSFPipelined      (void);
            const SFBool              *getSFPipelined       (void) const;


                  bool                &editShort          (void);
                  bool                 getShort           (void) const;

                  bool                &editAlpha          (void);
                  bool                 getAlpha           (void) const;

                  UInt32              &editTileSize       (void);
                  UInt32               getTileSize        (void) const;

                  bool                &editPipelined      (void);
                  bool                 getPipelined       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setShort          (const bool value);
            void setAlpha          (const bool value);
            void setTileSize       (const UInt32 value);
            void setPipelined      (const bool value);

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

    static  PipelineComposerTransitPtr  create          (void);
    static  PipelineComposer           *createEmpty     (void);

    static  PipelineComposerTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  PipelineComposer            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  PipelineComposerTransitPtr  createDependent  (BitVector bFlags);

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

    SFBool            _sfShort;
    SFBool            _sfAlpha;
    SFUInt32          _sfTileSize;
    SFBool            _sfPipelined;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PipelineComposerBase(void);
    PipelineComposerBase(const PipelineComposerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PipelineComposerBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleShort           (void) const;
     EditFieldHandlePtr editHandleShort          (void);
     GetFieldHandlePtr  getHandleAlpha           (void) const;
     EditFieldHandlePtr editHandleAlpha          (void);
     GetFieldHandlePtr  getHandleTileSize        (void) const;
     EditFieldHandlePtr editHandleTileSize       (void);
     GetFieldHandlePtr  getHandlePipelined       (void) const;
     EditFieldHandlePtr editHandlePipelined      (void);

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

            void execSync (      PipelineComposerBase *pFrom,
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
    void operator =(const PipelineComposerBase &source);
};

typedef PipelineComposerBase *PipelineComposerBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPIPELINECOMPOSERBASE_H_ */
