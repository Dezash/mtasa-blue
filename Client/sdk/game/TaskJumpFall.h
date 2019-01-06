/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        sdk/game/TaskJumpFall.h
 *  PURPOSE:     Jump/fall task interface
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#pragma once

#include "Task.h"

class CTaskSimpleClimb : public virtual CTaskSimple
{
public:
    virtual ~CTaskSimpleClimb(void){};
};

class CTaskSimpleJetPack : public virtual CTaskSimple
{
public:
    virtual ~CTaskSimpleJetPack(void){};
};
