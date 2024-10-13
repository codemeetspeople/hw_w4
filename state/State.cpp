#include "State.hpp"
#include "../exceptions/HPException.hpp"
#include "../exceptions/ManaException.hpp"

State::State(const std::string& title, int maxHP, int dmg, int manaLimit)
     : title(title), hp(maxHP), maxHP(maxHP), dmg(dmg), manaLimit(manaLimit),
       mana(manaLimit) {}

State::~State() {}

const std::string& State::getTitle() const {
    return this->title;
}

int State::getHP() const {
    return this->hp;
}

int State::getMaxHP() const {
    return this->maxHP;
}

int State::getDmg() const {
    return this->dmg;
}

int State::getMana() const {
    return this->mana;
}

int State::getManaLimit() const {
    return this->manaLimit;
}

void State::takeDamage(int dmg) {
    if ( this->getHP() == 0 ) {
        throw HPException();
    }
    if ( dmg > this->getHP() ) {
        this->hp = 0;
        return;
    }
    this->hp -= dmg;
}

void State::spendMana(int cost) {
    if ( cost > this->getMana() ) {
        throw ManaException();
    }
    this->mana -= cost;
}
