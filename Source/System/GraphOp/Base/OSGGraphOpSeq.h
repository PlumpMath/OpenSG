/*---------------------------------------------------------------------------*\
*                                OpenSG                                     *
*                                                                           *
*                                                                           *
*             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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


#ifndef _OSGGRAPHOPSEQ_H_
#define _OSGGRAPHOPSEQ_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGSystemDef.h"
#include "OSGAction.h"
#include "OSGGraphOp.h"

OSG_BEGIN_NAMESPACE

//! \ingroup GrpSystemRenderingBackend
//! GraphOpSeq class

class OSG_SYSTEM_DLLMAPPING GraphOpSeq : public MemoryObject
{
    /*==========================  PUBLIC  =================================*/
    
  public:

    typedef MemoryObject                            Inherited;
    typedef GraphOpSeq                              Self;
    
    typedef RefCountPtr<Self, MemObjRefCountPolicy> ObjRefPtr;
    typedef TransitPtr <Self                      > ObjTransitPtr;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static const char *getClassname(void) { return "GraphOpSeq"; };

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */
    
    GraphOpSeq(      void               );
    GraphOpSeq(const std::string &params);

    static ObjTransitPtr create(      void               );
    static ObjTransitPtr create(const std::string &params);
    
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Main methods                               */
    /*! \{                                                                 */

    bool run(Node *root);

    /*! \}                                                                 */

    void setGraphOps(const std::string &params);

    void addGraphOp            (GraphOp *op                 );
    void removeGraphOp         (GraphOp *op                 );    
    void clearGraphOps         (void                        );

    UInt16      getSize        (void                        );
    GraphOp*    getGraphOp     (UInt16 index                );
    bool        setGraphOp     (UInt16 index, GraphOp *op   );
    bool        removeGraphOp  (UInt16 index                );

    /*=========================  PROTECTED  ===============================*/

  protected:    

    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    ~GraphOpSeq(void);


    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:
    std::vector<GraphOpRefPtr> _graphOperators;
    std::list<std::string>     _excludeNames;

    UInt16 extractStr(const std::string  param, 
                            UInt16       spos, 
                      const Char8       *delim, 
                            std::string &result);
};

typedef GraphOpSeq *GraphOpSeqP;

typedef GraphOpSeq::ObjRefPtr       GraphOpSeqRefPtr;
typedef GraphOpSeq::ObjTransitPtr   GraphOpSeqTransitPtr;

OSG_END_NAMESPACE

#endif /* _OSGGRAPHOPSEQ_H_ */
