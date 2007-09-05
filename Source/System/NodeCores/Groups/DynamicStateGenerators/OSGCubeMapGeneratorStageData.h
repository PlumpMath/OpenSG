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

#ifndef _OSGCUBEMAPGENERATORSTAGEDATA_H_
#define _OSGCUBEMAPGENERATORSTAGEDATA_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGCubeMapGeneratorStageDataBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief CubeMapGeneratorStageData class. See \ref
           PageGroupCubeMapGeneratorStageData for a description.
*/

class OSG_GROUP_DLLMAPPING CubeMapGeneratorStageData : public CubeMapGeneratorStageDataBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef CubeMapGeneratorStageDataBase Inherited;
    typedef CubeMapGeneratorStageData     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details   );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in CubeMapGeneratorStageDataBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    CubeMapGeneratorStageData(void);
    CubeMapGeneratorStageData(const CubeMapGeneratorStageData &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CubeMapGeneratorStageData(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldBundle;
    friend class CubeMapGeneratorStageDataBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const CubeMapGeneratorStageData &source);
};

OSG_END_NAMESPACE

#include "OSGCubeMapGeneratorStageDataBase.inl"
#include "OSGCubeMapGeneratorStageData.inl"

#endif /* _OSGCUBEMAPGENERATORSTAGEDATA_H_ */