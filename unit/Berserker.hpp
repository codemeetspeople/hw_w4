#ifndef BERSERKER_HPP
#define BERSERKER_HPP

#include <iostream>
#include "Soldier.hpp"


class Berserker : public Soldier {
    public:
        Berserker(
            const std::string& title = "Berserker",
            int maxHP = 120,
            int dmg = 20,
            int manaLimit = 0
        );
        virtual ~Berserker();
        virtual void takeMagicDamage(int dmg);
};



#endif
