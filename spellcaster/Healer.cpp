#include "Healer.hpp"
#include "../spell/Heal.hpp"

Healer::Healer(const std::string& title, int maxHP, int dmg, int manaLimit)
      : SpellCaster(title, maxHP, dmg, manaLimit)
{
    this->spell = new Heal(40, 25);
}

Healer::~Healer() {}

void Healer::cast(Unit* target) {
    this->spendMana(this->spell->getCost());
    this->spell->action(target);
}
