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
 **     class Image
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGIMAGEBASE_H_
#define _OSGIMAGEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGFieldContainerFields.h"    // Parents type
#include "OSGSysFields.h"               // Dimension type
#include "OSGBaseFields.h"              // FrameDelay type

#include "OSGImageFields.h"

OSG_BEGIN_NAMESPACE


class Image;

//! \brief Image Base Class.

class OSG_SYSTEM_DLLMAPPING ImageBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Image);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ParentsFieldId = Inherited::NextFieldId,
        DimensionFieldId = ParentsFieldId + 1,
        WidthFieldId = DimensionFieldId + 1,
        HeightFieldId = WidthFieldId + 1,
        DepthFieldId = HeightFieldId + 1,
        BppFieldId = DepthFieldId + 1,
        MipMapCountFieldId = BppFieldId + 1,
        FrameCountFieldId = MipMapCountFieldId + 1,
        FrameDelayFieldId = FrameCountFieldId + 1,
        PixelFormatFieldId = FrameDelayFieldId + 1,
        PixelFieldId = PixelFormatFieldId + 1,
        FrameSizeFieldId = PixelFieldId + 1,
        NameFieldId = FrameSizeFieldId + 1,
        DataTypeFieldId = NameFieldId + 1,
        ComponentSizeFieldId = DataTypeFieldId + 1,
        SideCountFieldId = ComponentSizeFieldId + 1,
        SideSizeFieldId = SideCountFieldId + 1,
        ForceCompressedDataFieldId = SideSizeFieldId + 1,
        ForceAlphaChannelFieldId = ForceCompressedDataFieldId + 1,
        ForceColorChannelFieldId = ForceAlphaChannelFieldId + 1,
        ForceAlphaBinaryFieldId = ForceColorChannelFieldId + 1,
        ResXFieldId = ForceAlphaBinaryFieldId + 1,
        ResYFieldId = ResXFieldId + 1,
        ResUnitFieldId = ResYFieldId + 1,
        ClearOnLoadFieldId = ResUnitFieldId + 1,
        NextFieldId = ClearOnLoadFieldId + 1
    };

    static const OSG::BitVector ParentsFieldMask =
        (TypeTraits<BitVector>::One << ParentsFieldId);
    static const OSG::BitVector DimensionFieldMask =
        (TypeTraits<BitVector>::One << DimensionFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
    static const OSG::BitVector DepthFieldMask =
        (TypeTraits<BitVector>::One << DepthFieldId);
    static const OSG::BitVector BppFieldMask =
        (TypeTraits<BitVector>::One << BppFieldId);
    static const OSG::BitVector MipMapCountFieldMask =
        (TypeTraits<BitVector>::One << MipMapCountFieldId);
    static const OSG::BitVector FrameCountFieldMask =
        (TypeTraits<BitVector>::One << FrameCountFieldId);
    static const OSG::BitVector FrameDelayFieldMask =
        (TypeTraits<BitVector>::One << FrameDelayFieldId);
    static const OSG::BitVector PixelFormatFieldMask =
        (TypeTraits<BitVector>::One << PixelFormatFieldId);
    static const OSG::BitVector PixelFieldMask =
        (TypeTraits<BitVector>::One << PixelFieldId);
    static const OSG::BitVector FrameSizeFieldMask =
        (TypeTraits<BitVector>::One << FrameSizeFieldId);
    static const OSG::BitVector NameFieldMask =
        (TypeTraits<BitVector>::One << NameFieldId);
    static const OSG::BitVector DataTypeFieldMask =
        (TypeTraits<BitVector>::One << DataTypeFieldId);
    static const OSG::BitVector ComponentSizeFieldMask =
        (TypeTraits<BitVector>::One << ComponentSizeFieldId);
    static const OSG::BitVector SideCountFieldMask =
        (TypeTraits<BitVector>::One << SideCountFieldId);
    static const OSG::BitVector SideSizeFieldMask =
        (TypeTraits<BitVector>::One << SideSizeFieldId);
    static const OSG::BitVector ForceCompressedDataFieldMask =
        (TypeTraits<BitVector>::One << ForceCompressedDataFieldId);
    static const OSG::BitVector ForceAlphaChannelFieldMask =
        (TypeTraits<BitVector>::One << ForceAlphaChannelFieldId);
    static const OSG::BitVector ForceColorChannelFieldMask =
        (TypeTraits<BitVector>::One << ForceColorChannelFieldId);
    static const OSG::BitVector ForceAlphaBinaryFieldMask =
        (TypeTraits<BitVector>::One << ForceAlphaBinaryFieldId);
    static const OSG::BitVector ResXFieldMask =
        (TypeTraits<BitVector>::One << ResXFieldId);
    static const OSG::BitVector ResYFieldMask =
        (TypeTraits<BitVector>::One << ResYFieldId);
    static const OSG::BitVector ResUnitFieldMask =
        (TypeTraits<BitVector>::One << ResUnitFieldId);
    static const OSG::BitVector ClearOnLoadFieldMask =
        (TypeTraits<BitVector>::One << ClearOnLoadFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFParentFieldContainerPtr MFParentsType;
    typedef SFInt32           SFDimensionType;
    typedef SFInt32           SFWidthType;
    typedef SFInt32           SFHeightType;
    typedef SFInt32           SFDepthType;
    typedef SFInt32           SFBppType;
    typedef SFInt32           SFMipMapCountType;
    typedef SFInt32           SFFrameCountType;
    typedef SFTime            SFFrameDelayType;
    typedef SFUInt32          SFPixelFormatType;
    typedef MFUInt8           MFPixelType;
    typedef SFInt32           SFFrameSizeType;
    typedef SFString          SFNameType;
    typedef SFInt32           SFDataTypeType;
    typedef SFInt32           SFComponentSizeType;
    typedef SFInt32           SFSideCountType;
    typedef SFInt32           SFSideSizeType;
    typedef SFBool            SFForceCompressedDataType;
    typedef SFBool            SFForceAlphaChannelType;
    typedef SFBool            SFForceColorChannelType;
    typedef SFBool            SFForceAlphaBinaryType;
    typedef SFReal32          SFResXType;
    typedef SFReal32          SFResYType;
    typedef SFUInt16          SFResUnitType;
    typedef SFBool            SFClearOnLoadType;

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


                  SFInt32             *editSFDimension      (void);
            const SFInt32             *getSFDimension       (void) const;

                  SFInt32             *editSFWidth          (void);
            const SFInt32             *getSFWidth           (void) const;

                  SFInt32             *editSFHeight         (void);
            const SFInt32             *getSFHeight          (void) const;

                  SFInt32             *editSFDepth          (void);
            const SFInt32             *getSFDepth           (void) const;

                  SFInt32             *editSFBpp            (void);
            const SFInt32             *getSFBpp             (void) const;

                  SFInt32             *editSFMipMapCount    (void);
            const SFInt32             *getSFMipMapCount     (void) const;

                  SFInt32             *editSFFrameCount     (void);
            const SFInt32             *getSFFrameCount      (void) const;

                  SFTime              *editSFFrameDelay     (void);
            const SFTime              *getSFFrameDelay      (void) const;

                  SFUInt32            *editSFPixelFormat    (void);
            const SFUInt32            *getSFPixelFormat     (void) const;

                  MFUInt8             *editMFPixel          (void);
            const MFUInt8             *getMFPixel           (void) const;

                  SFInt32             *editSFFrameSize      (void);
            const SFInt32             *getSFFrameSize       (void) const;

                  SFString            *editSFName           (void);
            const SFString            *getSFName            (void) const;

                  SFInt32             *editSFDataType       (void);
            const SFInt32             *getSFDataType        (void) const;

                  SFInt32             *editSFSideCount      (void);
            const SFInt32             *getSFSideCount       (void) const;

                  SFInt32             *editSFSideSize       (void);
            const SFInt32             *getSFSideSize        (void) const;

                  SFBool              *editSFForceCompressedData(void);
            const SFBool              *getSFForceCompressedData (void) const;

                  SFBool              *editSFForceAlphaChannel(void);
            const SFBool              *getSFForceAlphaChannel (void) const;

                  SFBool              *editSFForceColorChannel(void);
            const SFBool              *getSFForceColorChannel (void) const;

                  SFBool              *editSFForceAlphaBinary(void);
            const SFBool              *getSFForceAlphaBinary (void) const;

                  SFReal32            *editSFResX           (void);
            const SFReal32            *getSFResX            (void) const;

                  SFReal32            *editSFResY           (void);
            const SFReal32            *getSFResY            (void) const;

                  SFUInt16            *editSFResUnit        (void);
            const SFUInt16            *getSFResUnit         (void) const;

                  SFBool              *editSFClearOnLoad    (void);
            const SFBool              *getSFClearOnLoad     (void) const;


                  Int32               &editDimension      (void);
                  Int32                getDimension       (void) const;

                  Int32               &editWidth          (void);
                  Int32                getWidth           (void) const;

                  Int32               &editHeight         (void);
                  Int32                getHeight          (void) const;

                  Int32               &editDepth          (void);
                  Int32                getDepth           (void) const;

                  Int32               &editBpp            (void);
                  Int32                getBpp             (void) const;

                  Int32               &editMipMapCount    (void);
                  Int32                getMipMapCount     (void) const;

                  Int32               &editFrameCount     (void);
                  Int32                getFrameCount      (void) const;

                  Time                &editFrameDelay     (void);
            const Time                &getFrameDelay      (void) const;

                  UInt32              &editPixelFormat    (void);
                  UInt32               getPixelFormat     (void) const;

                  UInt8               &editPixel          (const UInt32 index);
                  UInt8                getPixel           (const UInt32 index) const;

                  Int32               &editFrameSize      (void);
                  Int32                getFrameSize       (void) const;

                  std::string         &editName           (void);
            const std::string         &getName            (void) const;

                  Int32               &editDataType       (void);
                  Int32                getDataType        (void) const;

                  Int32               &editSideCount      (void);
                  Int32                getSideCount       (void) const;

                  Int32               &editSideSize       (void);
                  Int32                getSideSize        (void) const;

                  bool                &editForceCompressedData(void);
                  bool                 getForceCompressedData (void) const;

                  bool                &editForceAlphaChannel(void);
                  bool                 getForceAlphaChannel (void) const;

                  bool                &editForceColorChannel(void);
                  bool                 getForceColorChannel (void) const;

                  bool                &editForceAlphaBinary(void);
                  bool                 getForceAlphaBinary (void) const;

                  Real32              &editResX           (void);
                  Real32               getResX            (void) const;

                  Real32              &editResY           (void);
                  Real32               getResY            (void) const;

                  UInt16              &editResUnit        (void);
                  UInt16               getResUnit         (void) const;

                  bool                &editClearOnLoad    (void);
                  bool                 getClearOnLoad     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setDimension      (const Int32 value);
            void setWidth          (const Int32 value);
            void setHeight         (const Int32 value);
            void setDepth          (const Int32 value);
            void setBpp            (const Int32 value);
            void setMipMapCount    (const Int32 value);
            void setFrameCount     (const Int32 value);
            void setFrameDelay     (const Time &value);
            void setPixelFormat    (const UInt32 value);
            void setFrameSize      (const Int32 value);
            void setName           (const std::string &value);
            void setDataType       (const Int32 value);
            void setSideCount      (const Int32 value);
            void setSideSize       (const Int32 value);
            void setForceCompressedData(const bool value);
            void setForceAlphaChannel(const bool value);
            void setForceColorChannel(const bool value);
            void setForceAlphaBinary(const bool value);
            void setResX           (const Real32 value);
            void setResY           (const Real32 value);
            void setResUnit        (const UInt16 value);
            void setClearOnLoad    (const bool value);

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

    static  ImageTransitPtr  create          (void);
    static  Image           *createEmpty     (void);

    static  ImageTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  Image            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ImageTransitPtr  createDependent  (BitVector bFlags);

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

    MFParentFieldContainerPtr _mfParents;
    SFInt32           _sfDimension;
    SFInt32           _sfWidth;
    SFInt32           _sfHeight;
    SFInt32           _sfDepth;
    SFInt32           _sfBpp;
    SFInt32           _sfMipMapCount;
    SFInt32           _sfFrameCount;
    SFTime            _sfFrameDelay;
    SFUInt32          _sfPixelFormat;
    MFUInt8           _mfPixel;
    SFInt32           _sfFrameSize;
    SFString          _sfName;
    SFInt32           _sfDataType;
    SFInt32           _sfComponentSize;
    SFInt32           _sfSideCount;
    SFInt32           _sfSideSize;
    SFBool            _sfForceCompressedData;
    SFBool            _sfForceAlphaChannel;
    SFBool            _sfForceColorChannel;
    SFBool            _sfForceAlphaBinary;
    SFReal32          _sfResX;
    SFReal32          _sfResY;
    SFUInt16          _sfResUnit;
    SFBool            _sfClearOnLoad;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ImageBase(void);
    ImageBase(const ImageBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ImageBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Parent linking                                               */
    /*! \{                                                                 */

    virtual bool linkParent  (FieldContainer * const pParent,
                              UInt16           const childFieldId,
                              UInt16           const parentFieldId);
    virtual bool unlinkParent(FieldContainer * const pParent,
                              UInt16           const parentFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleParents         (void) const;
     EditFieldHandlePtr editHandleParents        (void);
     GetFieldHandlePtr  getHandleDimension       (void) const;
     EditFieldHandlePtr editHandleDimension      (void);
     GetFieldHandlePtr  getHandleWidth           (void) const;
     EditFieldHandlePtr editHandleWidth          (void);
     GetFieldHandlePtr  getHandleHeight          (void) const;
     EditFieldHandlePtr editHandleHeight         (void);
     GetFieldHandlePtr  getHandleDepth           (void) const;
     EditFieldHandlePtr editHandleDepth          (void);
     GetFieldHandlePtr  getHandleBpp             (void) const;
     EditFieldHandlePtr editHandleBpp            (void);
     GetFieldHandlePtr  getHandleMipMapCount     (void) const;
     EditFieldHandlePtr editHandleMipMapCount    (void);
     GetFieldHandlePtr  getHandleFrameCount      (void) const;
     EditFieldHandlePtr editHandleFrameCount     (void);
     GetFieldHandlePtr  getHandleFrameDelay      (void) const;
     EditFieldHandlePtr editHandleFrameDelay     (void);
     GetFieldHandlePtr  getHandlePixelFormat     (void) const;
     EditFieldHandlePtr editHandlePixelFormat    (void);
     GetFieldHandlePtr  getHandlePixel           (void) const;
     EditFieldHandlePtr editHandlePixel          (void);
     GetFieldHandlePtr  getHandleFrameSize       (void) const;
     EditFieldHandlePtr editHandleFrameSize      (void);
     GetFieldHandlePtr  getHandleName            (void) const;
     EditFieldHandlePtr editHandleName           (void);
     GetFieldHandlePtr  getHandleDataType        (void) const;
     EditFieldHandlePtr editHandleDataType       (void);
     GetFieldHandlePtr  getHandleComponentSize   (void) const;
     EditFieldHandlePtr editHandleComponentSize  (void);
     GetFieldHandlePtr  getHandleSideCount       (void) const;
     EditFieldHandlePtr editHandleSideCount      (void);
     GetFieldHandlePtr  getHandleSideSize        (void) const;
     EditFieldHandlePtr editHandleSideSize       (void);
     GetFieldHandlePtr  getHandleForceCompressedData (void) const;
     EditFieldHandlePtr editHandleForceCompressedData(void);
     GetFieldHandlePtr  getHandleForceAlphaChannel (void) const;
     EditFieldHandlePtr editHandleForceAlphaChannel(void);
     GetFieldHandlePtr  getHandleForceColorChannel (void) const;
     EditFieldHandlePtr editHandleForceColorChannel(void);
     GetFieldHandlePtr  getHandleForceAlphaBinary (void) const;
     EditFieldHandlePtr editHandleForceAlphaBinary(void);
     GetFieldHandlePtr  getHandleResX            (void) const;
     EditFieldHandlePtr editHandleResX           (void);
     GetFieldHandlePtr  getHandleResY            (void) const;
     EditFieldHandlePtr editHandleResY           (void);
     GetFieldHandlePtr  getHandleResUnit         (void) const;
     EditFieldHandlePtr editHandleResUnit        (void);
     GetFieldHandlePtr  getHandleClearOnLoad     (void) const;
     EditFieldHandlePtr editHandleClearOnLoad    (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFInt32             *editSFComponentSize  (void);
            const SFInt32             *getSFComponentSize   (void) const;


                  Int32               &editComponentSize  (void);
                  Int32                getComponentSize   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setComponentSize  (const Int32 value);

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

            void execSync (      ImageBase *pFrom,
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
    void operator =(const ImageBase &source);
};

typedef ImageBase *ImageBaseP;

OSG_END_NAMESPACE

#endif /* _OSGIMAGEBASE_H_ */
