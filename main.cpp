#include <iostream>

#include "unit/Rogue.hpp"
#include "unit/Soldier.hpp"
#include "unit/Werewolf.hpp"
#include "spellcaster/Wizard.hpp"

int main() {
    Rogue* rogue = new Rogue(); 
    Soldier* soldier = new Soldier();
    Werewolf* werewolf = new Werewolf();
    Wizard* wizard = new Wizard();


    wizard->cast(soldier);
    wizard->cast(werewolf);

    std::cout << *rogue << std::endl;
    std::cout << *soldier << std::endl;
    std::cout << *werewolf << std::endl;
    std::cout << *wizard << std::endl;


    delete(rogue);
    delete(soldier);
    delete(werewolf);
    delete(wizard);

    return 0;
}
