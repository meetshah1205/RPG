//
// Created by meet on 11/06/25.
//

//
// Created by meet on 11/06/25.
//

#pragma once
#include "../Headers/hp.h"
#include "../Headers/statblock.h"

class Rogue : public hp, public Statblock {
public:
    static const hptype HPGROWTH = (hptype)13u;
    static const stattype BASESTR = (stattype)5u;
    static const stattype BASEINT = (stattype)2u;
    /**
 * Rogue is supposed to be the highest melee damage, he has to have a good BASESTR
 *
 * He doesn't need much of a brain
 *
 *  just enough to use his hands mindfully and not yeeting himself off the map
 */
    Rogue() : hp(HPGROWTH, HPGROWTH), Statblock(BASESTR, BASEINT)  {}
};
