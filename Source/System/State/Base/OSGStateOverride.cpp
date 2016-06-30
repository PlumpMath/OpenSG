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

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGBaseFunctions.h"
#include "OSGFieldContainer.h"
#include "OSGStateOverride.h"
#include "OSGShaderProgramChunk.h"
#include "OSGShaderProgramVariableChunk.h"
#include "OSGSimpleSHLChunk.h"

OSG_USING_NAMESPACE

/*! \class OSG::StateOverride
 */

/*-------------------------------------------------------------------------*/
/*                            Constructors                                 */

StateOverride::StateOverride(void) :
    _vChunks       (    ),
    _pShader       (NULL),
    _pShaderVar    (NULL),
    _vProgChunks   (    ),
    _vProgIds      (    ),
    _vProgVarChunks(    ),
    _vProgVarIds   (    ),
    _uiSortKey     (   0),
    _uiKeyGen      (   0),
    _uiKeyMask     (   0)
{
}

/*-------------------------------------------------------------------------*/
/*                             Destructor                                  */

StateOverride::~StateOverride(void)
{
}

void StateOverride::rebuildSortKey(void)
{
    OSG_ASSERT(false);
}

void StateOverride::addOverride(UInt32 uiSlot, ShaderProgramChunk *pChunk)
{
    if(pChunk == NULL)
    {
        return;
    }

    ShaderProgramChunk::MFVertexShaderType::const_iterator sIt  = 
        pChunk->getMFVertexShader()->begin();

    ShaderProgramChunk::MFVertexShaderType::const_iterator sEnd = 
        pChunk->getMFVertexShader()->end();


    for(; sIt != sEnd; ++sIt)
    {
        UInt16    uiProgId = (*sIt)->getProgramId();

        IdStoreIt iIt      = std::lower_bound(_vProgIds.begin(),
                                              _vProgIds.end  (),
                                               uiProgId        );
        
        if(iIt == _vProgIds.end())
        {
            _vProgIds.push_back(uiProgId);
        }
        else if(*iIt != (*sIt)->getProgramId())
        {
            _vProgIds.insert(iIt, uiProgId);
        }
    }


    sIt  = pChunk->getMFGeometryShader()->begin();
    sEnd = pChunk->getMFGeometryShader()->end  ();

    for(; sIt != sEnd; ++sIt)
    {
        UInt16    uiProgId = (*sIt)->getProgramId();

        IdStoreIt iIt      = std::lower_bound(_vProgIds.begin(),
                                              _vProgIds.end  (),
                                               uiProgId        );
        
        if(iIt == _vProgIds.end())
        {
            _vProgIds.push_back(uiProgId);
        }
        else if(*iIt != (*sIt)->getProgramId())
        {
            _vProgIds.insert(iIt, uiProgId);
        }
    }

    sIt  = pChunk->getMFFragmentShader()->begin();
    sEnd = pChunk->getMFFragmentShader()->end  ();

    for(; sIt != sEnd; ++sIt)
    {
        UInt16    uiProgId = (*sIt)->getProgramId();

        IdStoreIt iIt      = std::lower_bound(_vProgIds.begin(),
                                              _vProgIds.end  (),
                                               uiProgId        );
        
        if(iIt == _vProgIds.end())
        {
            _vProgIds.push_back(uiProgId);
        }
        else if(*iIt != (*sIt)->getProgramId())
        {
            _vProgIds.insert(iIt, uiProgId);
        }
    }

    _vProgChunks.push_back(pChunk);

    _pShader = NULL;
}

void StateOverride::addOverride(UInt32                      uiSlot, 
                                ShaderProgramVariableChunk *pChunk)
{
    if(pChunk == NULL)
    {
        return;
    }

    UInt16    uiVarId = pChunk->getVariableId();

    IdStoreIt iIt      = std::lower_bound(_vProgVarIds.begin(),
                                          _vProgVarIds.end  (),
                                           uiVarId            );
        
    if(iIt == _vProgVarIds.end())
    {
        _vProgVarIds.push_back(uiVarId);
    }
    else if(*iIt != uiVarId)
    {
        _vProgVarIds.insert(iIt, uiVarId);
    }

    _vProgVarChunks.push_back(pChunk);

    _pShaderVar = NULL;
}

void StateOverride::addOverride(UInt32          uiSlot, 
                                SimpleSHLChunk *pChunk)
{
    insertOverride(uiSlot, pChunk);
}

void StateOverride::insertOverride(UInt32      uiSlot, 
                                   StateChunk *pChunk)
{
    ChunkElement newElem(uiSlot, pChunk);

    ChunkStoreIt cIt = std::lower_bound(_vChunks.begin(),
                                        _vChunks.end  (),
                                         newElem        );

    if(cIt == _vChunks.end())
    {
        _vChunks.insert(cIt, newElem);
    }
    else
    {
        if(cIt->first == uiSlot)
        {
            cIt->second = pChunk;
        }
        else
        {
            _vChunks.insert(cIt, newElem);
        }
    }
    
    if(pChunk == NULL)
    {
        return;
    }
            
    UInt32 uiKey1 =  _uiKeyGen & Key1Mask;
    UInt32 uiKey2 = (_uiKeyGen & Key2Mask) >> 10;
    UInt32 uiKey3 = (_uiKeyGen & Key3Mask) >> 20;
            
    if(uiKey1 != InvalidKey && uiKey1 == uiSlot)
    {
        uiKey1 = 
            (pChunk->getIgnore() == false) ? pChunk->getChunkId() : 0;
        
        _uiKeyMask &= ~Key1Mask;
    }
    else
    {
        uiKey1 = 0;
    }
    
    if(uiKey2 != InvalidKey && uiKey2 == uiSlot)
    {
        uiKey2 = 
            (pChunk->getIgnore() == false) ? pChunk->getChunkId() : 0;
        
        _uiKeyMask &= ~Key2Mask;
    }
    else
    {
        uiKey2 = 0;
    }
    
    if(uiKey3 != InvalidKey && uiKey3 == uiSlot)
    {
        uiKey3 = 
            (pChunk->getIgnore() == false) ? pChunk->getChunkId() : 0;
        
        _uiKeyMask &= ~Key3Mask;
    }
    else
    {
        uiKey3 = 0;
    }
    
    _uiSortKey = 
        (uiKey1 & Key1Mask)        | 
        ((uiKey2 & Key1Mask) << 10) |
        ((uiKey3 & Key1Mask) << 20);
}

void StateOverride::addOverride(UInt32 uiSlot, StateChunk *pChunk)
{
    ShaderProgramChunk *pSPChunk = dynamic_cast<ShaderProgramChunk *>(pChunk);

    if(pSPChunk == NULL)
    {
        ShaderProgramVariableChunk *pSPVChunk = 
            dynamic_cast<ShaderProgramVariableChunk *>(pChunk);

        if(pSPVChunk == NULL)
        {
            insertOverride(uiSlot, pChunk);
        }
        else
        {
            this->addOverride(uiSlot, pSPVChunk);
        }
    }
    else
    {
        this->addOverride(uiSlot, pSPChunk);
    }
}

void StateOverride::subOverride(UInt32 uiSlot, ShaderProgramChunk *pChunk)
{
    if(pChunk == NULL)
    {
        return;
    }

    ShaderProgramChunk::MFVertexShaderType::const_iterator sIt  =
        pChunk->getMFVertexShader()->begin();

    ShaderProgramChunk::MFVertexShaderType::const_iterator sEnd =
        pChunk->getMFVertexShader()->end();


    for(; sIt != sEnd; ++sIt)
    {
        UInt16    uiProgId = (*sIt)->getProgramId();

        std::pair<IdStoreIt, IdStoreIt> pairIt
            = std::equal_range(_vProgIds.begin(),
                               _vProgIds.end  (),
                               uiProgId         );

        if(pairIt.first != pairIt.second)
        {
            _vProgIds.erase(pairIt.first);
        }
    }

    sIt  = pChunk->getMFGeometryShader()->begin();
    sEnd = pChunk->getMFGeometryShader()->end  ();

    for(; sIt != sEnd; ++sIt)
    {
        UInt16    uiProgId = (*sIt)->getProgramId();

        std::pair<IdStoreIt, IdStoreIt> pairIt
            = std::equal_range(_vProgIds.begin(),
                               _vProgIds.end  (),
                               uiProgId         );

        if(pairIt.first != pairIt.second)
        {
            _vProgIds.erase(pairIt.first);
        }
    }

    sIt  = pChunk->getMFFragmentShader()->begin();
    sEnd = pChunk->getMFFragmentShader()->end  ();

    for(; sIt != sEnd; ++sIt)
    {
        UInt16    uiProgId = (*sIt)->getProgramId();

        std::pair<IdStoreIt, IdStoreIt> pairIt
            = std::equal_range(_vProgIds.begin(),
                               _vProgIds.end  (),
                               uiProgId         );

        if(pairIt.first != pairIt.second)
        {
            _vProgIds.erase(pairIt.first);
        }
    }

    ProgramChunkStore::iterator sIt2
        = std::find(_vProgChunks.begin(), _vProgChunks.end(), pChunk);

    if(sIt2 != _vProgChunks.end())
        _vProgChunks.erase(sIt2);
}

void StateOverride::subOverride(UInt32                      uiSlot,
                                ShaderProgramVariableChunk *pChunk)
{
    if(pChunk == NULL)
    {
        return;
    }

    UInt16    uiVarId = pChunk->getVariableId();

    std::pair<IdStoreIt, IdStoreIt> pairIt
            = std::equal_range(_vProgVarIds.begin(),
                               _vProgVarIds.end  (),
                               uiVarId             );

    if(pairIt.first != pairIt.second)
    {
        _vProgVarIds.erase(pairIt.first);
    }

    ProgramVarChunkStore::iterator sIt2
        = std::find(_vProgVarChunks.begin(), _vProgVarChunks.end(), pChunk);

    if(sIt2 != _vProgVarChunks.end())
        _vProgVarChunks.erase(sIt2);
}

void StateOverride::subOverride(UInt32          uiSlot,
                                SimpleSHLChunk *pChunk)
{
    eraseOverride(uiSlot, pChunk);
}

void StateOverride::eraseOverride(UInt32      uiSlot,
                                  StateChunk *pChunk)
{
    ChunkElement newElem(uiSlot, pChunk);

    std::pair<ChunkStoreIt, ChunkStoreIt> pairIt
        = std::equal_range(_vChunks.begin(),
                           _vChunks.end  (),
                            newElem        );

    for(; pairIt.first != pairIt.second; ++pairIt.first)
    {
        if(pairIt.first->first == uiSlot)
        {
            _vChunks.erase(pairIt.first);
            break;
        }
    }
}

void StateOverride::subOverride(UInt32 uiSlot, StateChunk *pChunk)
{
    ShaderProgramChunk *pSPChunk = dynamic_cast<ShaderProgramChunk *>(pChunk);

    if(pSPChunk == NULL)
    {
        ShaderProgramVariableChunk *pSPVChunk =
            dynamic_cast<ShaderProgramVariableChunk *>(pChunk);

        if(pSPVChunk == NULL)
        {
            eraseOverride(uiSlot, pChunk);
        }
        else
        {
            this->subOverride(uiSlot, pSPVChunk);
        }
    }
    else
    {
        this->subOverride(uiSlot, pSPChunk);
    }
}
