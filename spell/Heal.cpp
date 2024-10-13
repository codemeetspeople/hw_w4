#include "Heal.hpp"

Heal::Heal(int cost, int actionPoints) : Spell(cost, actionPoints) {}

Heal::~Heal() {}

void Heal::action(Unit* target) const {
    target->addHP(this->actionPoints);
}
