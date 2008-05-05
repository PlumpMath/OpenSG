/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class SkyBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SkyBackgroundBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SkyBackgroundBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SkyBackgroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SkyBackground::_sfSphereRes field.

inline
UInt32 &SkyBackgroundBase::editSphereRes(void)
{
    editSField(SphereResFieldMask);

    return _sfSphereRes.getValue();
}

//! Get the value of the SkyBackground::_sfSphereRes field.
inline
const UInt32 SkyBackgroundBase::getSphereRes(void) const
{
    return _sfSphereRes.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &SkyBackgroundBase::getSphereRes      (void)
{
    return this->editSphereRes      ();
}
#endif

//! Set the value of the SkyBackground::_sfSphereRes field.
inline
void SkyBackgroundBase::setSphereRes(const UInt32 &value)
{
    editSField(SphereResFieldMask);

    _sfSphereRes.setValue(value);
}

//! Get the value of the SkyBackground::_sfBackTexture field.
inline
TextureBaseChunk * SkyBackgroundBase::getBackTexture(void) const
{
    return _sfBackTexture.getValue();
}

//! Set the value of the SkyBackground::_sfBackTexture field.
inline
void SkyBackgroundBase::setBackTexture(TextureBaseChunk * const value)
{
    editSField(BackTextureFieldMask);

    _sfBackTexture.setValue(value);
}

//! Get the value of the SkyBackground::_sfBottomTexture field.
inline
TextureBaseChunk * SkyBackgroundBase::getBottomTexture(void) const
{
    return _sfBottomTexture.getValue();
}

//! Set the value of the SkyBackground::_sfBottomTexture field.
inline
void SkyBackgroundBase::setBottomTexture(TextureBaseChunk * const value)
{
    editSField(BottomTextureFieldMask);

    _sfBottomTexture.setValue(value);
}

//! Get the value of the SkyBackground::_sfFrontTexture field.
inline
TextureBaseChunk * SkyBackgroundBase::getFrontTexture(void) const
{
    return _sfFrontTexture.getValue();
}

//! Set the value of the SkyBackground::_sfFrontTexture field.
inline
void SkyBackgroundBase::setFrontTexture(TextureBaseChunk * const value)
{
    editSField(FrontTextureFieldMask);

    _sfFrontTexture.setValue(value);
}

//! Get the value of the SkyBackground::_sfLeftTexture field.
inline
TextureBaseChunk * SkyBackgroundBase::getLeftTexture(void) const
{
    return _sfLeftTexture.getValue();
}

//! Set the value of the SkyBackground::_sfLeftTexture field.
inline
void SkyBackgroundBase::setLeftTexture(TextureBaseChunk * const value)
{
    editSField(LeftTextureFieldMask);

    _sfLeftTexture.setValue(value);
}

//! Get the value of the SkyBackground::_sfRightTexture field.
inline
TextureBaseChunk * SkyBackgroundBase::getRightTexture(void) const
{
    return _sfRightTexture.getValue();
}

//! Set the value of the SkyBackground::_sfRightTexture field.
inline
void SkyBackgroundBase::setRightTexture(TextureBaseChunk * const value)
{
    editSField(RightTextureFieldMask);

    _sfRightTexture.setValue(value);
}

//! Get the value of the SkyBackground::_sfTopTexture field.
inline
TextureBaseChunk * SkyBackgroundBase::getTopTexture(void) const
{
    return _sfTopTexture.getValue();
}

//! Set the value of the SkyBackground::_sfTopTexture field.
inline
void SkyBackgroundBase::setTopTexture(TextureBaseChunk * const value)
{
    editSField(TopTextureFieldMask);

    _sfTopTexture.setValue(value);
}
//! Get the value of the SkyBackground::_sfBoxInside field.

inline
bool &SkyBackgroundBase::editBoxInside(void)
{
    editSField(BoxInsideFieldMask);

    return _sfBoxInside.getValue();
}

//! Get the value of the SkyBackground::_sfBoxInside field.
inline
const bool SkyBackgroundBase::getBoxInside(void) const
{
    return _sfBoxInside.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &SkyBackgroundBase::getBoxInside      (void)
{
    return this->editBoxInside      ();
}
#endif

//! Set the value of the SkyBackground::_sfBoxInside field.
inline
void SkyBackgroundBase::setBoxInside(const bool &value)
{
    editSField(BoxInsideFieldMask);

    _sfBoxInside.setValue(value);
}

//! Get the value of the SkyBackground::_sfBeacon field.
inline
Node * SkyBackgroundBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the SkyBackground::_sfBeacon field.
inline
void SkyBackgroundBase::setBeacon(Node * const value)
{
    editSField(BeaconFieldMask);

    _sfBeacon.setValue(value);
}

//! Get the value of the \a index element the SkyBackground::_mfSkyColor field.
inline
const Color4f SkyBackgroundBase::getSkyColor(const UInt32 index) const
{
    return _mfSkyColor[index];
}

inline
Color4f &SkyBackgroundBase::editSkyColor(const UInt32 index)
{
    editMField(SkyColorFieldMask, _mfSkyColor);

    return _mfSkyColor[index];
}

#ifdef OSG_1_GET_COMPAT
inline
Color4f             &SkyBackgroundBase::getSkyColor       (const UInt32 index)
{
    return this->editSkyColor       (index);
}

inline
MFColor4f           &SkyBackgroundBase::getSkyColor       (void)
{
    return this->editSkyColor       ();
}

#endif


//! Get the value of the \a index element the SkyBackground::_mfSkyAngle field.
inline
const Real32 SkyBackgroundBase::getSkyAngle(const UInt32 index) const
{
    return _mfSkyAngle[index];
}

inline
Real32 &SkyBackgroundBase::editSkyAngle(const UInt32 index)
{
    editMField(SkyAngleFieldMask, _mfSkyAngle);

    return _mfSkyAngle[index];
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &SkyBackgroundBase::getSkyAngle       (const UInt32 index)
{
    return this->editSkyAngle       (index);
}

inline
MFReal32            &SkyBackgroundBase::getSkyAngle       (void)
{
    return this->editSkyAngle       ();
}

#endif


//! Get the value of the \a index element the SkyBackground::_mfGroundColor field.
inline
const Color4f SkyBackgroundBase::getGroundColor(const UInt32 index) const
{
    return _mfGroundColor[index];
}

inline
Color4f &SkyBackgroundBase::editGroundColor(const UInt32 index)
{
    editMField(GroundColorFieldMask, _mfGroundColor);

    return _mfGroundColor[index];
}

#ifdef OSG_1_GET_COMPAT
inline
Color4f             &SkyBackgroundBase::getGroundColor    (const UInt32 index)
{
    return this->editGroundColor    (index);
}

inline
MFColor4f           &SkyBackgroundBase::getGroundColor    (void)
{
    return this->editGroundColor    ();
}

#endif


//! Get the value of the \a index element the SkyBackground::_mfGroundAngle field.
inline
const Real32 SkyBackgroundBase::getGroundAngle(const UInt32 index) const
{
    return _mfGroundAngle[index];
}

inline
Real32 &SkyBackgroundBase::editGroundAngle(const UInt32 index)
{
    editMField(GroundAngleFieldMask, _mfGroundAngle);

    return _mfGroundAngle[index];
}

#ifdef OSG_1_GET_COMPAT
inline
Real32              &SkyBackgroundBase::getGroundAngle    (const UInt32 index)
{
    return this->editGroundAngle    (index);
}

inline
MFReal32            &SkyBackgroundBase::getGroundAngle    (void)
{
    return this->editGroundAngle    ();
}

#endif


//! Get the value of the \a index element the SkyBackground::_mfTopTexCoord field.
inline
const Vec3f SkyBackgroundBase::getTopTexCoord(const UInt32 index) const
{
    return _mfTopTexCoord[index];
}

inline
Vec3f &SkyBackgroundBase::editTopTexCoord(const UInt32 index)
{
    editMField(TopTexCoordFieldMask, _mfTopTexCoord);

    return _mfTopTexCoord[index];
}

#ifdef OSG_1_GET_COMPAT
inline
Vec3f               &SkyBackgroundBase::getTopTexCoord    (const UInt32 index)
{
    return this->editTopTexCoord    (index);
}

inline
MFVec3f             &SkyBackgroundBase::getTopTexCoord    (void)
{
    return this->editTopTexCoord    ();
}

#endif


//! Get the value of the \a index element the SkyBackground::_mfBottomTexCoord field.
inline
const Vec3f SkyBackgroundBase::getBottomTexCoord(const UInt32 index) const
{
    return _mfBottomTexCoord[index];
}

inline
Vec3f &SkyBackgroundBase::editBottomTexCoord(const UInt32 index)
{
    editMField(BottomTexCoordFieldMask, _mfBottomTexCoord);

    return _mfBottomTexCoord[index];
}

#ifdef OSG_1_GET_COMPAT
inline
Vec3f               &SkyBackgroundBase::getBottomTexCoord (const UInt32 index)
{
    return this->editBottomTexCoord (index);
}

inline
MFVec3f             &SkyBackgroundBase::getBottomTexCoord (void)
{
    return this->editBottomTexCoord ();
}

#endif


//! Get the value of the \a index element the SkyBackground::_mfRightTexCoord field.
inline
const Vec3f SkyBackgroundBase::getRightTexCoord(const UInt32 index) const
{
    return _mfRightTexCoord[index];
}

inline
Vec3f &SkyBackgroundBase::editRightTexCoord(const UInt32 index)
{
    editMField(RightTexCoordFieldMask, _mfRightTexCoord);

    return _mfRightTexCoord[index];
}

#ifdef OSG_1_GET_COMPAT
inline
Vec3f               &SkyBackgroundBase::getRightTexCoord  (const UInt32 index)
{
    return this->editRightTexCoord  (index);
}

inline
MFVec3f             &SkyBackgroundBase::getRightTexCoord  (void)
{
    return this->editRightTexCoord  ();
}

#endif


//! Get the value of the \a index element the SkyBackground::_mfLeftTexCoord field.
inline
const Vec3f SkyBackgroundBase::getLeftTexCoord(const UInt32 index) const
{
    return _mfLeftTexCoord[index];
}

inline
Vec3f &SkyBackgroundBase::editLeftTexCoord(const UInt32 index)
{
    editMField(LeftTexCoordFieldMask, _mfLeftTexCoord);

    return _mfLeftTexCoord[index];
}

#ifdef OSG_1_GET_COMPAT
inline
Vec3f               &SkyBackgroundBase::getLeftTexCoord   (const UInt32 index)
{
    return this->editLeftTexCoord   (index);
}

inline
MFVec3f             &SkyBackgroundBase::getLeftTexCoord   (void)
{
    return this->editLeftTexCoord   ();
}

#endif


//! Get the value of the \a index element the SkyBackground::_mfFrontTexCoord field.
inline
const Vec3f SkyBackgroundBase::getFrontTexCoord(const UInt32 index) const
{
    return _mfFrontTexCoord[index];
}

inline
Vec3f &SkyBackgroundBase::editFrontTexCoord(const UInt32 index)
{
    editMField(FrontTexCoordFieldMask, _mfFrontTexCoord);

    return _mfFrontTexCoord[index];
}

#ifdef OSG_1_GET_COMPAT
inline
Vec3f               &SkyBackgroundBase::getFrontTexCoord  (const UInt32 index)
{
    return this->editFrontTexCoord  (index);
}

inline
MFVec3f             &SkyBackgroundBase::getFrontTexCoord  (void)
{
    return this->editFrontTexCoord  ();
}

#endif


//! Get the value of the \a index element the SkyBackground::_mfBackTexCoord field.
inline
const Vec3f SkyBackgroundBase::getBackTexCoord(const UInt32 index) const
{
    return _mfBackTexCoord[index];
}

inline
Vec3f &SkyBackgroundBase::editBackTexCoord(const UInt32 index)
{
    editMField(BackTexCoordFieldMask, _mfBackTexCoord);

    return _mfBackTexCoord[index];
}

#ifdef OSG_1_GET_COMPAT
inline
Vec3f               &SkyBackgroundBase::getBackTexCoord   (const UInt32 index)
{
    return this->editBackTexCoord   (index);
}

inline
MFVec3f             &SkyBackgroundBase::getBackTexCoord   (void)
{
    return this->editBackTexCoord   ();
}

#endif



#ifdef OSG_MT_CPTR_ASPECT
inline
void SkyBackgroundBase::execSync (      SkyBackgroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (SkyColorFieldMask & whichField))
        _mfSkyColor.syncWith(pFrom->_mfSkyColor,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (SkyAngleFieldMask & whichField))
        _mfSkyAngle.syncWith(pFrom->_mfSkyAngle,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (GroundColorFieldMask & whichField))
        _mfGroundColor.syncWith(pFrom->_mfGroundColor,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (GroundAngleFieldMask & whichField))
        _mfGroundAngle.syncWith(pFrom->_mfGroundAngle,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (SphereResFieldMask & whichField))
        _sfSphereRes.syncWith(pFrom->_sfSphereRes);

    if(FieldBits::NoField != (BackTextureFieldMask & whichField))
        _sfBackTexture.syncWith(pFrom->_sfBackTexture);

    if(FieldBits::NoField != (BottomTextureFieldMask & whichField))
        _sfBottomTexture.syncWith(pFrom->_sfBottomTexture);

    if(FieldBits::NoField != (FrontTextureFieldMask & whichField))
        _sfFrontTexture.syncWith(pFrom->_sfFrontTexture);

    if(FieldBits::NoField != (LeftTextureFieldMask & whichField))
        _sfLeftTexture.syncWith(pFrom->_sfLeftTexture);

    if(FieldBits::NoField != (RightTextureFieldMask & whichField))
        _sfRightTexture.syncWith(pFrom->_sfRightTexture);

    if(FieldBits::NoField != (TopTextureFieldMask & whichField))
        _sfTopTexture.syncWith(pFrom->_sfTopTexture);

    if(FieldBits::NoField != (BoxInsideFieldMask & whichField))
        _sfBoxInside.syncWith(pFrom->_sfBoxInside);

    if(FieldBits::NoField != (TopTexCoordFieldMask & whichField))
        _mfTopTexCoord.syncWith(pFrom->_mfTopTexCoord,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (BottomTexCoordFieldMask & whichField))
        _mfBottomTexCoord.syncWith(pFrom->_mfBottomTexCoord,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (RightTexCoordFieldMask & whichField))
        _mfRightTexCoord.syncWith(pFrom->_mfRightTexCoord,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (LeftTexCoordFieldMask & whichField))
        _mfLeftTexCoord.syncWith(pFrom->_mfLeftTexCoord,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (FrontTexCoordFieldMask & whichField))
        _mfFrontTexCoord.syncWith(pFrom->_mfFrontTexCoord,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (BackTexCoordFieldMask & whichField))
        _mfBackTexCoord.syncWith(pFrom->_mfBackTexCoord,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pFrom->_sfBeacon);
}
#endif


inline
Char8 *SkyBackgroundBase::getClassname(void)
{
    return "SkyBackground";
}
OSG_GEN_CONTAINERPTR(SkyBackground);

OSG_END_NAMESPACE

