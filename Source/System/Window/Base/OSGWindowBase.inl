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
 **     class Window!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &WindowBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 WindowBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 WindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the Window::_sfWidth field.

inline
UInt16 &WindowBase::editWidth(void)
{
    editSField(WidthFieldMask);

    return _sfWidth.getValue();
}

//! Get the value of the Window::_sfWidth field.
inline
const UInt16 &WindowBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt16              &WindowBase::getWidth          (void)
{
    return this->editWidth          ();
}
#endif

//! Set the value of the Window::_sfWidth field.
inline
void WindowBase::setWidth(const UInt16 &value)
{
    editSField(WidthFieldMask);

    _sfWidth.setValue(value);
}
//! Get the value of the Window::_sfHeight field.

inline
UInt16 &WindowBase::editHeight(void)
{
    editSField(HeightFieldMask);

    return _sfHeight.getValue();
}

//! Get the value of the Window::_sfHeight field.
inline
const UInt16 &WindowBase::getHeight(void) const
{
    return _sfHeight.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt16              &WindowBase::getHeight         (void)
{
    return this->editHeight         ();
}
#endif

//! Set the value of the Window::_sfHeight field.
inline
void WindowBase::setHeight(const UInt16 &value)
{
    editSField(HeightFieldMask);

    _sfHeight.setValue(value);
}
//! Get the value of the Window::_sfResizePending field.

inline
bool &WindowBase::editResizePending(void)
{
    editSField(ResizePendingFieldMask);

    return _sfResizePending.getValue();
}

//! Get the value of the Window::_sfResizePending field.
inline
const bool &WindowBase::getResizePending(void) const
{
    return _sfResizePending.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &WindowBase::getResizePending  (void)
{
    return this->editResizePending  ();
}
#endif

//! Set the value of the Window::_sfResizePending field.
inline
void WindowBase::setResizePending(const bool &value)
{
    editSField(ResizePendingFieldMask);

    _sfResizePending.setValue(value);
}
//! Get the value of the Window::_sfGlObjectEventCounter field.

inline
UInt32 &WindowBase::editGlObjectEventCounter(void)
{
    editSField(GlObjectEventCounterFieldMask);

    return _sfGlObjectEventCounter.getValue();
}

//! Get the value of the Window::_sfGlObjectEventCounter field.
inline
const UInt32 &WindowBase::getGlObjectEventCounter(void) const
{
    return _sfGlObjectEventCounter.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &WindowBase::getGlObjectEventCounter(void)
{
    return this->editGlObjectEventCounter();
}
#endif

//! Set the value of the Window::_sfGlObjectEventCounter field.
inline
void WindowBase::setGlObjectEventCounter(const UInt32 &value)
{
    editSField(GlObjectEventCounterFieldMask);

    _sfGlObjectEventCounter.setValue(value);
}
//! Get the value of the Window::_sfDrawerId field.

inline
UInt32 &WindowBase::editDrawerId(void)
{
    editSField(DrawerIdFieldMask);

    return _sfDrawerId.getValue();
}

//! Get the value of the Window::_sfDrawerId field.
inline
const UInt32 &WindowBase::getDrawerId(void) const
{
    return _sfDrawerId.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &WindowBase::getDrawerId       (void)
{
    return this->editDrawerId       ();
}
#endif

//! Set the value of the Window::_sfDrawerId field.
inline
void WindowBase::setDrawerId(const UInt32 &value)
{
    editSField(DrawerIdFieldMask);

    _sfDrawerId.setValue(value);
}

//! Get the value of the \a index element the Window::_mfPort field.
inline
ViewportPtrConst WindowBase::getPort(const UInt32 index) const
{
    return _mfPort[index];
}

//! Get the Window::_mfPort field.
inline
const MFUnrecViewportPtr &WindowBase::getPort(void) const
{
    return _mfPort;
}

//! Get the value of the \a index element the Window::_mfGlObjectLastRefresh field.
inline
const UInt32 &WindowBase::getGlObjectLastRefresh(const UInt32 index) const
{
    return _mfGlObjectLastRefresh[index];
}

inline
UInt32 &WindowBase::editGlObjectLastRefresh(const UInt32 index)
{
    editMField(GlObjectLastRefreshFieldMask, _mfGlObjectLastRefresh);

    return _mfGlObjectLastRefresh[index];
}

//! Get the Window::_mfGlObjectLastRefresh field.
inline
MFUInt32 &WindowBase::editGlObjectLastRefresh(void)
{
    editMField(GlObjectLastRefreshFieldMask, _mfGlObjectLastRefresh);

    return _mfGlObjectLastRefresh;
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &WindowBase::getGlObjectLastRefresh(const UInt32 index)
{
    return this->editGlObjectLastRefresh(index);
}

inline
MFUInt32            &WindowBase::getGlObjectLastRefresh(void)
{
    return this->editGlObjectLastRefresh();
}

#endif


//! Get the Window::_mfGlObjectLastRefresh field.
inline
const MFUInt32 &WindowBase::getGlObjectLastRefresh(void) const
{
    return _mfGlObjectLastRefresh;
}

//! Get the value of the \a index element the Window::_mfGlObjectLastReinitialize field.
inline
const UInt32 &WindowBase::getGlObjectLastReinitialize(const UInt32 index) const
{
    return _mfGlObjectLastReinitialize[index];
}

inline
UInt32 &WindowBase::editGlObjectLastReinitialize(const UInt32 index)
{
    editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);

    return _mfGlObjectLastReinitialize[index];
}

//! Get the Window::_mfGlObjectLastReinitialize field.
inline
MFUInt32 &WindowBase::editGlObjectLastReinitialize(void)
{
    editMField(GlObjectLastReinitializeFieldMask, _mfGlObjectLastReinitialize);

    return _mfGlObjectLastReinitialize;
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &WindowBase::getGlObjectLastReinitialize(const UInt32 index)
{
    return this->editGlObjectLastReinitialize(index);
}

inline
MFUInt32            &WindowBase::getGlObjectLastReinitialize(void)
{
    return this->editGlObjectLastReinitialize();
}

#endif


//! Get the Window::_mfGlObjectLastReinitialize field.
inline
const MFUInt32 &WindowBase::getGlObjectLastReinitialize(void) const
{
    return _mfGlObjectLastReinitialize;
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void WindowBase::execSync (      WindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
        _sfWidth.syncWith(pFrom->_sfWidth);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pFrom->_sfHeight);

    if(FieldBits::NoField != (PortFieldMask & whichField))
        _mfPort.syncWith(pFrom->_mfPort,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (ResizePendingFieldMask & whichField))
        _sfResizePending.syncWith(pFrom->_sfResizePending);

    if(FieldBits::NoField != (GlObjectEventCounterFieldMask & whichField))
        _sfGlObjectEventCounter.syncWith(pFrom->_sfGlObjectEventCounter);

    if(FieldBits::NoField != (GlObjectLastRefreshFieldMask & whichField))
        _mfGlObjectLastRefresh.syncWith(pFrom->_mfGlObjectLastRefresh,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (GlObjectLastReinitializeFieldMask & whichField))
        _mfGlObjectLastReinitialize.syncWith(pFrom->_mfGlObjectLastReinitialize,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (DrawerIdFieldMask & whichField))
        _sfDrawerId.syncWith(pFrom->_sfDrawerId);
}
#endif


inline
Char8 *WindowBase::getClassname(void)
{
    return "Window";
}
OSG_GEN_CONTAINERPTR(Window);

OSG_END_NAMESPACE

