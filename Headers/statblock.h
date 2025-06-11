//
// Created by meet on 11/06/25.
//

#pragma once
#include "stattypes.h"

class Statblock {
    stattype Strength;
    stattype Intellect; // Infinite for me, hehehe

    /**
     * Both `Strength` and `Intellect` are of type `stattype`,
     * Bound by the might of 0xFF — a single byte,
     * A mere fragment of an integer,
     * Yet capable of shaping warriors and wizards alike.
     */
public:
    Statblock() {
        Strength = (stattype)1u;
        Intellect = (stattype)1u;
    }

    /**
     *
     * @param s strength
     * @param i intellect
     * O Strength and Intellect—
     * Thou shalt not ascend beyond 255,
     * Lest the system smite thee with overflow,
     * And cast thy bits into the void.
     */
    explicit Statblock(stattype s, stattype i) {
        Strength = s;
        Intellect = i;
    }

    stattype getStrength() { return Strength;}
    stattype getIntellect() { return Intellect; }
};
