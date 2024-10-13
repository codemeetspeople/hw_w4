#ifndef HEALER_HPP
#define HEALER_HPP

#include "SpellCaster.hpp"

class Healer : public SpellCaster {
    public:
        Healer(
            const std::string& title = "Healer",
            int maxHP = 80,
            int dmg = 10,
            int manaLimit = 100
        );
        virtual ~Healer();
        virtual void cast(Unit* target);
};

#endif