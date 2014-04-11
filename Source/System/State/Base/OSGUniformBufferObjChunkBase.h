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
 **     class UniformBufferObjChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGUNIFORMBUFFEROBJCHUNKBASE_H_
#define _OSGUNIFORMBUFFEROBJCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGBaseFields.h"              // GLId type
#include "OSGSysFields.h"               // FundamentalTypes type
#include "OSGStringToUInt32MapFields.h" // NameToIndex type

#include "OSGUniformBufferObjChunkFields.h"

OSG_BEGIN_NAMESPACE


class UniformBufferObjChunk;

//! \brief UniformBufferObjChunk Base Class.

class OSG_SYSTEM_DLLMAPPING UniformBufferObjChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(UniformBufferObjChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        GLIdFieldId = Inherited::NextFieldId,
        UsageFieldId = GLIdFieldId + 1,
        BlockNameFieldId = UsageFieldId + 1,
        FundamentalTypesFieldId = BlockNameFieldId + 1,
        MainTypesFieldId = FundamentalTypesFieldId + 1,
        CardinalityFieldId = MainTypesFieldId + 1,
        IndexFieldId = CardinalityFieldId + 1,
        NamesFieldId = IndexFieldId + 1,
        NameToIndexFieldId = NamesFieldId + 1,
        FloatValuesFieldId = NameToIndexFieldId + 1,
        DoubleValuesFieldId = FloatValuesFieldId + 1,
        IntValuesFieldId = DoubleValuesFieldId + 1,
        UIntValuesFieldId = IntValuesFieldId + 1,
        BoolValuesFieldId = UIntValuesFieldId + 1,
        NextFieldId = BoolValuesFieldId + 1
    };

    static const OSG::BitVector GLIdFieldMask =
        (TypeTraits<BitVector>::One << GLIdFieldId);
    static const OSG::BitVector UsageFieldMask =
        (TypeTraits<BitVector>::One << UsageFieldId);
    static const OSG::BitVector BlockNameFieldMask =
        (TypeTraits<BitVector>::One << BlockNameFieldId);
    static const OSG::BitVector FundamentalTypesFieldMask =
        (TypeTraits<BitVector>::One << FundamentalTypesFieldId);
    static const OSG::BitVector MainTypesFieldMask =
        (TypeTraits<BitVector>::One << MainTypesFieldId);
    static const OSG::BitVector CardinalityFieldMask =
        (TypeTraits<BitVector>::One << CardinalityFieldId);
    static const OSG::BitVector IndexFieldMask =
        (TypeTraits<BitVector>::One << IndexFieldId);
    static const OSG::BitVector NamesFieldMask =
        (TypeTraits<BitVector>::One << NamesFieldId);
    static const OSG::BitVector NameToIndexFieldMask =
        (TypeTraits<BitVector>::One << NameToIndexFieldId);
    static const OSG::BitVector FloatValuesFieldMask =
        (TypeTraits<BitVector>::One << FloatValuesFieldId);
    static const OSG::BitVector DoubleValuesFieldMask =
        (TypeTraits<BitVector>::One << DoubleValuesFieldId);
    static const OSG::BitVector IntValuesFieldMask =
        (TypeTraits<BitVector>::One << IntValuesFieldId);
    static const OSG::BitVector UIntValuesFieldMask =
        (TypeTraits<BitVector>::One << UIntValuesFieldId);
    static const OSG::BitVector BoolValuesFieldMask =
        (TypeTraits<BitVector>::One << BoolValuesFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFGLenum          SFGLIdType;
    typedef SFGLenum          SFUsageType;
    typedef SFString          SFBlockNameType;
    typedef MFUInt8           MFFundamentalTypesType;
    typedef MFUInt8           MFMainTypesType;
    typedef MFUInt32          MFCardinalityType;
    typedef MFUInt32          MFIndexType;
    typedef MFString          MFNamesType;
    typedef SFStringToUInt32Map SFNameToIndexType;
    typedef MFReal32          MFFloatValuesType;
    typedef MFReal64          MFDoubleValuesType;
    typedef MFInt32           MFIntValuesType;
    typedef MFUInt32          MFUIntValuesType;
    typedef MFUInt8           MFBoolValuesType;

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


                  SFGLenum            *editSFGLId           (void);
            const SFGLenum            *getSFGLId            (void) const;

                  SFGLenum            *editSFUsage          (void);
            const SFGLenum            *getSFUsage           (void) const;

                  SFString            *editSFBlockName      (void);
            const SFString            *getSFBlockName       (void) const;


                  GLenum              &editGLId           (void);
            const GLenum              &getGLId            (void) const;

                  GLenum              &editUsage          (void);
            const GLenum              &getUsage           (void) const;

                  std::string         &editBlockName      (void);
            const std::string         &getBlockName       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setGLId           (const GLenum &value);
            void setUsage          (const GLenum &value);
            void setBlockName      (const std::string &value);

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

    static  UniformBufferObjChunkTransitPtr  create          (void);
    static  UniformBufferObjChunk           *createEmpty     (void);

    static  UniformBufferObjChunkTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  UniformBufferObjChunk            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  UniformBufferObjChunkTransitPtr  createDependent  (BitVector bFlags);

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

    SFGLenum          _sfGLId;
    SFGLenum          _sfUsage;
    SFString          _sfBlockName;
    MFUInt8           _mfFundamentalTypes;
    MFUInt8           _mfMainTypes;
    MFUInt32          _mfCardinality;
    MFUInt32          _mfIndex;
    MFString          _mfNames;
    SFStringToUInt32Map _sfNameToIndex;
    MFReal32          _mfFloatValues;
    MFReal64          _mfDoubleValues;
    MFInt32           _mfIntValues;
    MFUInt32          _mfUIntValues;
    MFUInt8           _mfBoolValues;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    UniformBufferObjChunkBase(void);
    UniformBufferObjChunkBase(const UniformBufferObjChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~UniformBufferObjChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleGLId            (void) const;
     EditFieldHandlePtr editHandleGLId           (void);
     GetFieldHandlePtr  getHandleUsage           (void) const;
     EditFieldHandlePtr editHandleUsage          (void);
     GetFieldHandlePtr  getHandleBlockName       (void) const;
     EditFieldHandlePtr editHandleBlockName      (void);
     GetFieldHandlePtr  getHandleFundamentalTypes (void) const;
     EditFieldHandlePtr editHandleFundamentalTypes(void);
     GetFieldHandlePtr  getHandleMainTypes       (void) const;
     EditFieldHandlePtr editHandleMainTypes      (void);
     GetFieldHandlePtr  getHandleCardinality     (void) const;
     EditFieldHandlePtr editHandleCardinality    (void);
     GetFieldHandlePtr  getHandleIndex           (void) const;
     EditFieldHandlePtr editHandleIndex          (void);
     GetFieldHandlePtr  getHandleNames           (void) const;
     EditFieldHandlePtr editHandleNames          (void);
     GetFieldHandlePtr  getHandleNameToIndex     (void) const;
     EditFieldHandlePtr editHandleNameToIndex    (void);
     GetFieldHandlePtr  getHandleFloatValues     (void) const;
     EditFieldHandlePtr editHandleFloatValues    (void);
     GetFieldHandlePtr  getHandleDoubleValues    (void) const;
     EditFieldHandlePtr editHandleDoubleValues   (void);
     GetFieldHandlePtr  getHandleIntValues       (void) const;
     EditFieldHandlePtr editHandleIntValues      (void);
     GetFieldHandlePtr  getHandleUIntValues      (void) const;
     EditFieldHandlePtr editHandleUIntValues     (void);
     GetFieldHandlePtr  getHandleBoolValues      (void) const;
     EditFieldHandlePtr editHandleBoolValues     (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  MFUInt8             *editMFFundamentalTypes(void);
            const MFUInt8             *getMFFundamentalTypes (void) const;

                  MFUInt8             *editMFMainTypes      (void);
            const MFUInt8             *getMFMainTypes       (void) const;

                  MFUInt32            *editMFCardinality    (void);
            const MFUInt32            *getMFCardinality     (void) const;

                  MFUInt32            *editMFIndex          (void);
            const MFUInt32            *getMFIndex           (void) const;

                  MFString            *editMFNames          (void);
            const MFString            *getMFNames           (void) const;

                  SFStringToUInt32Map *editSFNameToIndex    (void);
            const SFStringToUInt32Map *getSFNameToIndex     (void) const;

                  MFReal32            *editMFFloatValues    (void);
            const MFReal32            *getMFFloatValues     (void) const;

                  MFReal64            *editMFDoubleValues   (void);
            const MFReal64            *getMFDoubleValues    (void) const;

                  MFInt32             *editMFIntValues      (void);
            const MFInt32             *getMFIntValues       (void) const;

                  MFUInt32            *editMFUIntValues     (void);
            const MFUInt32            *getMFUIntValues      (void) const;

                  MFUInt8             *editMFBoolValues     (void);
            const MFUInt8             *getMFBoolValues      (void) const;


                  UInt8               &editFundamentalTypes(const UInt32 index);
                  UInt8                getFundamentalTypes (const UInt32 index) const;

                  UInt8               &editMainTypes      (const UInt32 index);
                  UInt8                getMainTypes       (const UInt32 index) const;

                  UInt32              &editCardinality    (const UInt32 index);
                  UInt32               getCardinality     (const UInt32 index) const;

                  UInt32              &editIndex          (const UInt32 index);
                  UInt32               getIndex           (const UInt32 index) const;

                  std::string         &editNames          (const UInt32 index);
            const std::string         &getNames           (const UInt32 index) const;

                  StringToUInt32Map   &editNameToIndex    (void);
            const StringToUInt32Map   &getNameToIndex     (void) const;

                  Real32              &editFloatValues    (const UInt32 index);
                  Real32               getFloatValues     (const UInt32 index) const;

                  Real64              &editDoubleValues   (const UInt32 index);
                  Real64               getDoubleValues    (const UInt32 index) const;

                  Int32               &editIntValues      (const UInt32 index);
                  Int32                getIntValues       (const UInt32 index) const;

                  UInt32              &editUIntValues     (const UInt32 index);
                  UInt32               getUIntValues      (const UInt32 index) const;

                  UInt8               &editBoolValues     (const UInt32 index);
                  UInt8                getBoolValues      (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setNameToIndex    (const StringToUInt32Map &value);

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

            void execSync (      UniformBufferObjChunkBase *pFrom,
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
    void operator =(const UniformBufferObjChunkBase &source);
};

typedef UniformBufferObjChunkBase *UniformBufferObjChunkBaseP;

OSG_END_NAMESPACE

#endif /* _OSGUNIFORMBUFFEROBJCHUNKBASE_H_ */