//
// Created by meet on 11/06/25.
//

#pragma once
#include "../Headers/hp.h"
#include "../Headers/statblock.h"

class Wizard : public hp, public Statblock {
public:
    static const hptype HPGROWTH = (hptype)9u;
    static const stattype BASESTR = (stattype)1u;
    static const stattype BASEINT = (stattype)4u;
    /**
 * Wizard is super weak but super smart.
 *
 * Yeah, basically half the programming community.
 *
 * Except this guy actually has a life,
 * doesn’t code 80 hours a week for "fun,"
 * and doesn’t worship some bald CEO who thinks weekends are a foreign virus.
 */
    Wizard() : hp(HPGROWTH, HPGROWTH), Statblock(BASESTR, BASEINT)  {}
};