//
// Created by meet on 11/06/25.
//

#pragma once
#include "../Headers/hp.h"
#include "../Headers/statblock.h"

class Cleric : public hp, public Statblock {
public:
    static const hptype HPGROWTH = (hptype)14u;
    static const stattype BASESTR = (stattype)2u;
    static const stattype BASEINT = (stattype)3u;
    /**
 * Cleric got nerfed because with an HP of 14 and strength of 4, he'd pretty much destroy the game
 * And I have no intentions of being even remotely like EA
 */
    Cleric() : hp(HPGROWTH, HPGROWTH), Statblock(BASESTR, BASEINT)  {}
};