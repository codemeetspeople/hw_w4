#include "Berserker.hpp"

Berserker::Berserker(const std::string& title, int maxHP, int dmg, int manaLimit)
       : Soldier(title, maxHP, dmg, manaLimit) {}

Berserker::~Berserker() {}

void Berserker::takeMagicDamage(int dmg) {}
