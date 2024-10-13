#include "Soldier.hpp"

Soldier::Soldier(const std::string& title, int maxHP, int dmg, int manaLimit)
       : Unit(title, maxHP, dmg, manaLimit) {}

Soldier::~Soldier() {}

void Soldier::attack(Unit* enemy) {
    enemy->takeDamage(this->getDmg());
    enemy->counterAttack(this);
}

void Soldier::counterAttack(Unit* enemy) {
    enemy->takeDamage(this->getDmg()/2);
}
