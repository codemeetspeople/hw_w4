#ifndef STATE_HPP
#define STATE_HPP

#include <iostream>

class State {
    protected:
        std::string title;
        int hp;
        int maxHP;
        int dmg;
        int mana;
        int manaLimit;

    public:
        State(const std::string& title, int maxHP, int dmg, int manaLimit);
        virtual ~State();

        virtual const std::string& getTitle() const;
        virtual int getHP() const;
        virtual int getMaxHP() const;
        virtual int getDmg() const;
        virtual int getMana() const;
        virtual int getManaLimit() const;

        virtual void takeDamage(int dmg);
        virtual void spendMana(int cost);
};

#endif