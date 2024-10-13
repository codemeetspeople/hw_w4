#include "FireBall.hpp"

FireBall::FireBall(int cost, int actionPoints) : Spell(cost, actionPoints) {}

FireBall::~FireBall() {}

void FireBall::action(Unit* target) const {
    target->takeDamage(this->actionPoints);
}
