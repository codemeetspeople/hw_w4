#include "Spell.hpp"


Spell::Spell(int cost, int actionPoints) : cost(cost), actionPoints(actionPoints) {}

Spell::~Spell() {}

int Spell::getCost() const {
    return this->cost;
}

int Spell::getActionPoints() const {
    return this->actionPoints;
}
