#ifndef SPELL_CASTER_HPP
#define SPELL_CASTER_HPP

#include <iostream>
#include "../unit/Unit.hpp"
#include "../spell/Spell.hpp"

class SpellCaster : public Unit {
    protected:
        Spell* spell;

    public:
        SpellCaster(const std::string& title, int maxHP, int dmg, int manaLimit);
        virtual ~SpellCaster();
        
        virtual int getMana() const;
        virtual int getManaLimit() const;

        virtual void spendMana(int cost);

        virtual void cast(Unit* target) = 0;

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
};

std::ostream& operator<<(std::ostream& out, const SpellCaster& sc);

#endif
