#include "Unit.hpp"

Unit::Unit(const std::string& title, int maxHP, int dmg, int manaLimit) {
    this->state = new State(title, maxHP, dmg, manaLimit);
}
Unit::~Unit() {
    delete(this->state);
}

const std::string& Unit::getTitle() const {
    return this->state->getTitle();
}

int Unit::getHP() const {
    return this->state->getHP();
}

int Unit::getMaxHP() const {
    return this->state->getMaxHP();
}

int Unit::getDmg() const {
    return this->state->getDmg();
}

void Unit::takeDamage(int dmg) {
    this->state->takeDamage(dmg);
}

void Unit::takeMagicDamage(int dmg) {
    this->state->takeDamage(dmg);
}

void Unit::addHP(int hp) {
    this->state->addHP(hp);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << unit.getTitle() << ":" << std::endl;
    out << " - hp(" << unit.getHP() << "/" << unit.getMaxHP() << ")";
    out << std::endl;
    out << " - dmg(" << unit.getDmg() << ")" << std::endl;

    return out;
}