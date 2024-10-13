#include "SpellCaster.hpp"


SpellCaster::SpellCaster(const std::string& title, int maxHP, int dmg, int manaLimit)
           : Unit(title, maxHP, dmg, manaLimit) {}

SpellCaster::~SpellCaster() {}

int SpellCaster::getMana() const {
    return this->state->getMana();
}

int SpellCaster::getManaLimit() const {
    return this->state->getManaLimit();
}

void SpellCaster::spendMana(int cost) {
    this->state->spendMana(cost);
}

void SpellCaster::attack(Unit* enemy) {
    enemy->takeDamage(this->getDmg());
    enemy->counterAttack(this);
}

void SpellCaster::counterAttack(Unit* enemy) {
    enemy->takeDamage(this->getDmg()/2);
}

std::ostream& operator<<(std::ostream& out, const SpellCaster& sc) {
    out << sc.getTitle() << ":" << std::endl;
    out << " - hp(" << sc.getHP() << "/" << sc.getMaxHP() << ")";
    out << std::endl;
    out << " - dmg(" << sc.getDmg() << ")" << std::endl;
    out << " - mana(" << sc.getMana() << "/" << sc.getManaLimit() << ")";
    out << std::endl;

    return out;
}