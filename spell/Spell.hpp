#ifndef SPELL_HPP
#define SPELL_HPP

#include "../unit/Unit.hpp"

class Spell {
    protected:
        int cost;
        int actionPoints;

    public:
        Spell(int cost, int actionPoints);
        virtual ~Spell();

        virtual int getCost() const;
        virtual int getActionPoints() const;

        virtual void action(Unit* target) const = 0;
};


#endif