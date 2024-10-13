#ifndef WIZARD_HPP
#define WIZARD_HPP

#include "SpellCaster.hpp"

class Wizard : public SpellCaster {
    public:
        Wizard(
            const std::string& title = "Wizard",
            int maxHP = 80,
            int dmg = 10,
            int manaLimit = 100
        );
        virtual ~Wizard();
        virtual void cast(Unit* target);
};

#endif