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
 **     class CSMClusterWindow
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCSMCLUSTERWINDOWBASE_H_
#define _OSGCSMCLUSTERWINDOWBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribCSMDef.h"

//#include "OSGBaseTypes.h"

#include "OSGCSMWindow.h" // Parent

#include "OSGCSMWindowFields.h" // ClientWindow type
#include "OSGSysFields.h" // RenderClient type
#include "OSGBaseFields.h" // Servers type
#include "OSGImageComposerFields.h" // Composer type
#include "OSGCSMClusterWinOptionsFields.h" // Options type

#include "OSGCSMClusterWindowFields.h"

OSG_BEGIN_NAMESPACE

class CSMClusterWindow;

//! \brief CSMClusterWindow Base Class.

class OSG_CONTRIBCSM_DLLMAPPING CSMClusterWindowBase : public CSMWindow
{
  public:

    typedef CSMWindow Inherited;
    typedef CSMWindow ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CSMClusterWindow);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ClientWindowFieldId = Inherited::NextFieldId,
        RenderClientFieldId = ClientWindowFieldId + 1,
        ServersFieldId = RenderClientFieldId + 1,
        ServerIdsFieldId = ServersFieldId + 1,
        ServerRowsFieldId = ServerIdsFieldId + 1,
        ConnectionTypeFieldId = ServerRowsFieldId + 1,
        ClusterModeFieldId = ConnectionTypeFieldId + 1,
        ComposerFieldId = ClusterModeFieldId + 1,
        OptionsFieldId = ComposerFieldId + 1,
        NextFieldId = OptionsFieldId + 1
    };

    static const OSG::BitVector ClientWindowFieldMask =
        (TypeTraits<BitVector>::One << ClientWindowFieldId);
    static const OSG::BitVector RenderClientFieldMask =
        (TypeTraits<BitVector>::One << RenderClientFieldId);
    static const OSG::BitVector ServersFieldMask =
        (TypeTraits<BitVector>::One << ServersFieldId);
    static const OSG::BitVector ServerIdsFieldMask =
        (TypeTraits<BitVector>::One << ServerIdsFieldId);
    static const OSG::BitVector ServerRowsFieldMask =
        (TypeTraits<BitVector>::One << ServerRowsFieldId);
    static const OSG::BitVector ConnectionTypeFieldMask =
        (TypeTraits<BitVector>::One << ConnectionTypeFieldId);
    static const OSG::BitVector ClusterModeFieldMask =
        (TypeTraits<BitVector>::One << ClusterModeFieldId);
    static const OSG::BitVector ComposerFieldMask =
        (TypeTraits<BitVector>::One << ComposerFieldId);
    static const OSG::BitVector OptionsFieldMask =
        (TypeTraits<BitVector>::One << OptionsFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecChildCSMWindowPtr SFClientWindowType;
    typedef SFBool            SFRenderClientType;
    typedef MFString          MFServersType;
    typedef MFUInt32          MFServerIdsType;
    typedef SFUInt32          SFServerRowsType;
    typedef SFString          SFConnectionTypeType;
    typedef SFString          SFClusterModeType;
    typedef SFUnrecImageComposerPtr SFComposerType;
    typedef SFUnrecChildCSMClusterWinOptionsPtr SFOptionsType;

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

            const SFUnrecChildCSMWindowPtr *getSFClientWindow   (void) const;
                  SFUnrecChildCSMWindowPtr *editSFClientWindow   (void);

                  SFBool              *editSFRenderClient   (void);
            const SFBool              *getSFRenderClient    (void) const;

                  MFString            *editMFServers        (void);
            const MFString            *getMFServers         (void) const;

                  MFUInt32            *editMFServerIds      (void);
            const MFUInt32            *getMFServerIds       (void) const;

                  SFUInt32            *editSFServerRows     (void);
            const SFUInt32            *getSFServerRows      (void) const;

                  SFString            *editSFConnectionType (void);
            const SFString            *getSFConnectionType  (void) const;

                  SFString            *editSFClusterMode    (void);
            const SFString            *getSFClusterMode     (void) const;
            const SFUnrecImageComposerPtr *getSFComposer       (void) const;
                  SFUnrecImageComposerPtr *editSFComposer       (void);
            const SFUnrecChildCSMClusterWinOptionsPtr *getSFOptions        (void) const;
                  SFUnrecChildCSMClusterWinOptionsPtr *editSFOptions        (void);


                  CSMWindow * getClientWindow   (void) const;

                  bool                &editRenderClient   (void);
                  bool                 getRenderClient    (void) const;

                  std::string         &editServers        (const UInt32 index);
            const std::string         &getServers         (const UInt32 index) const;

                  UInt32              &editServerIds      (const UInt32 index);
                  UInt32               getServerIds       (const UInt32 index) const;

                  UInt32              &editServerRows     (void);
                  UInt32               getServerRows      (void) const;

                  std::string         &editConnectionType (void);
            const std::string         &getConnectionType  (void) const;

                  std::string         &editClusterMode    (void);
            const std::string         &getClusterMode     (void) const;

                  ImageComposer * getComposer       (void) const;

                  CSMClusterWinOptions * getOptions        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setClientWindow   (CSMWindow * const value);
            void setRenderClient   (const bool value);
            void setServerRows     (const UInt32 value);
            void setConnectionType (const std::string &value);
            void setClusterMode    (const std::string &value);
            void setComposer       (ImageComposer * const value);
            void setOptions        (CSMClusterWinOptions * const value);

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

    static  CSMClusterWindowTransitPtr  create          (void);
    static  CSMClusterWindow           *createEmpty     (void);

    static  CSMClusterWindowTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  CSMClusterWindow            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  CSMClusterWindowTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecChildCSMWindowPtr _sfClientWindow;
    SFBool            _sfRenderClient;
    MFString          _mfServers;
    MFUInt32          _mfServerIds;
    SFUInt32          _sfServerRows;
    SFString          _sfConnectionType;
    SFString          _sfClusterMode;
    SFUnrecImageComposerPtr _sfComposer;
    SFUnrecChildCSMClusterWinOptionsPtr _sfOptions;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CSMClusterWindowBase(void);
    CSMClusterWindowBase(const CSMClusterWindowBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CSMClusterWindowBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const CSMClusterWindow *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Child linking                                                */
    /*! \{                                                                 */

    virtual bool unlinkChild(FieldContainer * const pChild,
                             UInt16           const childFieldId);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleClientWindow    (void) const;
    EditFieldHandlePtr editHandleClientWindow   (void);
    GetFieldHandlePtr  getHandleRenderClient    (void) const;
    EditFieldHandlePtr editHandleRenderClient   (void);
    GetFieldHandlePtr  getHandleServers         (void) const;
    EditFieldHandlePtr editHandleServers        (void);
    GetFieldHandlePtr  getHandleServerIds       (void) const;
    EditFieldHandlePtr editHandleServerIds      (void);
    GetFieldHandlePtr  getHandleServerRows      (void) const;
    EditFieldHandlePtr editHandleServerRows     (void);
    GetFieldHandlePtr  getHandleConnectionType  (void) const;
    EditFieldHandlePtr editHandleConnectionType (void);
    GetFieldHandlePtr  getHandleClusterMode     (void) const;
    EditFieldHandlePtr editHandleClusterMode    (void);
    GetFieldHandlePtr  getHandleComposer        (void) const;
    EditFieldHandlePtr editHandleComposer       (void);
    GetFieldHandlePtr  getHandleOptions         (void) const;
    EditFieldHandlePtr editHandleOptions        (void);

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

            void execSync (      CSMClusterWindowBase *pFrom,
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
    void operator =(const CSMClusterWindowBase &source);
};

typedef CSMClusterWindowBase *CSMClusterWindowBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCSMCLUSTERWINDOWBASE_H_ */
