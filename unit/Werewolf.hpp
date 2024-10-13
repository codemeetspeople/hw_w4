#ifndef WEREWOLF_HPP
#define WEREWOLF_HPP

#include "Soldier.hpp"
#include "../state/State.hpp"

class Werewolf : public Soldier {
    protected:
        State* altState;
    
    public:
        Werewolf(
            const std::string& title = "Werewolf (human)",
            int maxHP = 100,
            int dmg = 15,
            int manaLimit = 0
        );
        virtual ~Werewolf();
        virtual void transform();
};


#endif
