//
// Created by meet on 11/06/25.
//

#pragma once
#include "../Headers/hp.h"
#include "../Headers/statblock.h"

class Warrior : public hp, public Statblock {
public:
    /**
     * without static, everytime we add a new warrior
     * it consumes 4 more bytes of memory, which is fine
     * but why not add static if I can
     * because this is my game, and i am the supreme here
     */
    static const hptype HPGROWTH = (hptype)19u;
    static const stattype BASESTR = (stattype)4u;
    static const stattype BASEINT = (stattype)1u; // Warriors don't need brains, learn from Kratos in GOW
    /**
     *  WARNING:
     * `BASEINT` is not an `integer` it is short for Base Intellect
     */

    Warrior() : hp(HPGROWTH, HPGROWTH), Statblock(BASESTR, BASEINT)  {}
};