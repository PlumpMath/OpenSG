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
 **     class BlendChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBLENDCHUNKBASE_H_
#define _OSGBLENDCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGStateChunk.h" // Parent

#include "OSGBaseFields.h"              // SrcFactor type
#include "OSGSysFields.h"               // AlphaValue type

#include "OSGBlendChunkFields.h"

OSG_BEGIN_NAMESPACE


class BlendChunk;

//! \brief BlendChunk Base Class.

class OSG_SYSTEM_DLLMAPPING BlendChunkBase : public StateChunk
{
  public:

    typedef StateChunk Inherited;
    typedef StateChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(BlendChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        SrcFactorFieldId = Inherited::NextFieldId,
        DestFactorFieldId = SrcFactorFieldId + 1,
        EquationFieldId = DestFactorFieldId + 1,
        ColorFieldId = EquationFieldId + 1,
        AlphaFuncFieldId = ColorFieldId + 1,
        AlphaValueFieldId = AlphaFuncFieldId + 1,
        AlphaSrcFactorFieldId = AlphaValueFieldId + 1,
        AlphaDestFactorFieldId = AlphaSrcFactorFieldId + 1,
        NextFieldId = AlphaDestFactorFieldId + 1
    };

    static const OSG::BitVector SrcFactorFieldMask =
        (TypeTraits<BitVector>::One << SrcFactorFieldId);
    static const OSG::BitVector DestFactorFieldMask =
        (TypeTraits<BitVector>::One << DestFactorFieldId);
    static const OSG::BitVector EquationFieldMask =
        (TypeTraits<BitVector>::One << EquationFieldId);
    static const OSG::BitVector ColorFieldMask =
        (TypeTraits<BitVector>::One << ColorFieldId);
    static const OSG::BitVector AlphaFuncFieldMask =
        (TypeTraits<BitVector>::One << AlphaFuncFieldId);
    static const OSG::BitVector AlphaValueFieldMask =
        (TypeTraits<BitVector>::One << AlphaValueFieldId);
    static const OSG::BitVector AlphaSrcFactorFieldMask =
        (TypeTraits<BitVector>::One << AlphaSrcFactorFieldId);
    static const OSG::BitVector AlphaDestFactorFieldMask =
        (TypeTraits<BitVector>::One << AlphaDestFactorFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFGLenum          SFSrcFactorType;
    typedef SFGLenum          SFDestFactorType;
    typedef SFGLenum          SFEquationType;
    typedef SFColor4f         SFColorType;
    typedef SFGLenum          SFAlphaFuncType;
    typedef SFReal32          SFAlphaValueType;
    typedef SFGLenum          SFAlphaSrcFactorType;
    typedef SFGLenum          SFAlphaDestFactorType;

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


                  SFGLenum            *editSFSrcFactor      (void);
            const SFGLenum            *getSFSrcFactor       (void) const;

                  SFGLenum            *editSFDestFactor     (void);
            const SFGLenum            *getSFDestFactor      (void) const;

                  SFGLenum            *editSFEquation       (void);
            const SFGLenum            *getSFEquation        (void) const;

                  SFColor4f           *editSFColor          (void);
            const SFColor4f           *getSFColor           (void) const;

                  SFGLenum            *editSFAlphaFunc      (void);
            const SFGLenum            *getSFAlphaFunc       (void) const;

                  SFReal32            *editSFAlphaValue     (void);
            const SFReal32            *getSFAlphaValue      (void) const;

                  SFGLenum            *editSFAlphaSrcFactor (void);
            const SFGLenum            *getSFAlphaSrcFactor  (void) const;

                  SFGLenum            *editSFAlphaDestFactor(void);
            const SFGLenum            *getSFAlphaDestFactor (void) const;


                  GLenum              &editSrcFactor      (void);
            const GLenum              &getSrcFactor       (void) const;

                  GLenum              &editDestFactor     (void);
            const GLenum              &getDestFactor      (void) const;

                  GLenum              &editEquation       (void);
            const GLenum              &getEquation        (void) const;

                  Color4f             &editColor          (void);
            const Color4f             &getColor           (void) const;

                  GLenum              &editAlphaFunc      (void);
            const GLenum              &getAlphaFunc       (void) const;

                  Real32              &editAlphaValue     (void);
                  Real32               getAlphaValue      (void) const;

                  GLenum              &editAlphaSrcFactor (void);
            const GLenum              &getAlphaSrcFactor  (void) const;

                  GLenum              &editAlphaDestFactor(void);
            const GLenum              &getAlphaDestFactor (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setSrcFactor      (const GLenum &value);
            void setDestFactor     (const GLenum &value);
            void setEquation       (const GLenum &value);
            void setColor          (const Color4f &value);
            void setAlphaFunc      (const GLenum &value);
            void setAlphaValue     (const Real32 value);
            void setAlphaSrcFactor (const GLenum &value);
            void setAlphaDestFactor(const GLenum &value);

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

    static  BlendChunkTransitPtr  create          (void);
    static  BlendChunk           *createEmpty     (void);

    static  BlendChunkTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  BlendChunk            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  BlendChunkTransitPtr  createDependent  (BitVector bFlags);

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

    SFGLenum          _sfSrcFactor;
    SFGLenum          _sfDestFactor;
    SFGLenum          _sfEquation;
    SFColor4f         _sfColor;
    SFGLenum          _sfAlphaFunc;
    SFReal32          _sfAlphaValue;
    SFGLenum          _sfAlphaSrcFactor;
    SFGLenum          _sfAlphaDestFactor;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BlendChunkBase(void);
    BlendChunkBase(const BlendChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BlendChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

     GetFieldHandlePtr  getHandleSrcFactor       (void) const;
     EditFieldHandlePtr editHandleSrcFactor      (void);
     GetFieldHandlePtr  getHandleDestFactor      (void) const;
     EditFieldHandlePtr editHandleDestFactor     (void);
     GetFieldHandlePtr  getHandleEquation        (void) const;
     EditFieldHandlePtr editHandleEquation       (void);
     GetFieldHandlePtr  getHandleColor           (void) const;
     EditFieldHandlePtr editHandleColor          (void);
     GetFieldHandlePtr  getHandleAlphaFunc       (void) const;
     EditFieldHandlePtr editHandleAlphaFunc      (void);
     GetFieldHandlePtr  getHandleAlphaValue      (void) const;
     EditFieldHandlePtr editHandleAlphaValue     (void);
     GetFieldHandlePtr  getHandleAlphaSrcFactor  (void) const;
     EditFieldHandlePtr editHandleAlphaSrcFactor (void);
     GetFieldHandlePtr  getHandleAlphaDestFactor (void) const;
     EditFieldHandlePtr editHandleAlphaDestFactor(void);

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

            void execSync (      BlendChunkBase *pFrom,
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
    void operator =(const BlendChunkBase &source);
};

typedef BlendChunkBase *BlendChunkBaseP;

OSG_END_NAMESPACE

#endif /* _OSGBLENDCHUNKBASE_H_ */
