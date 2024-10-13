#include <iostream>

#include "unit/Rogue.hpp"
#include "unit/Soldier.hpp"
#include "unit/Werewolf.hpp"

int main() {
    Rogue* rogue = new Rogue(); 
    Soldier* soldier = new Soldier();
    Werewolf* werewolf = new Werewolf();


    std::cout << *rogue << std::endl;
    std::cout << *soldier << std::endl;
    std::cout << *werewolf << std::endl;


    delete(rogue);
    delete(soldier);
    delete(werewolf);

    return 0;
}
