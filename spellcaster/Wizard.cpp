#include "Wizard.hpp"
#include "../spell/FireBall.hpp"

Wizard::Wizard(const std::string& title, int maxHP, int dmg, int manaLimit)
      : SpellCaster(title, maxHP, dmg, manaLimit)
{
    this->spell = new FireBall(40, 25);
}

Wizard::~Wizard() {}

void Wizard::cast(Unit* target) {
    this->spendMana(this->spell->getCost());
    this->spell->action(target);
}
