#ifndef UNIT_HPP
#define UNIT_HPP

#include <iostream>
#include "../state/State.hpp"


class Unit {
    protected:
        State* state;

    public:
        Unit(const std::string& title, int maxHP, int dmg, int manaLimit);
        virtual ~Unit();

        virtual const std::string& getTitle() const;
        virtual int getHP() const;
        virtual int getMaxHP() const;
        virtual int getDmg() const;

        virtual void takeDamage(int dmg);
        virtual void takeMagicDamage(int dmg);
        virtual void addHP(int hp);

        virtual void attack(Unit* enemy) = 0;
        virtual void counterAttack(Unit* enemy) = 0;
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif
