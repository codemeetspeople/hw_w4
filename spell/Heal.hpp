#ifndef HEAL_HPP
#define HEAL_HPP

#include "Spell.hpp"

class Heal : public Spell {
    public:
        Heal(int cost, int actionPoints);
        virtual ~Heal();
        virtual void action(Unit* target) const;
};

#endif
