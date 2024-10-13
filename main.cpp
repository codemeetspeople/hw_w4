#include <iostream>

#include "unit/Rogue.hpp"
#include "unit/Soldier.hpp"
#include "unit/Werewolf.hpp"
#include "unit/Berserker.hpp"
#include "spellcaster/Wizard.hpp"
#include "spellcaster/Healer.hpp"

int main() {
    Rogue* rogue = new Rogue(); 
    Soldier* soldier = new Soldier();
    Werewolf* werewolf = new Werewolf();
    Wizard* wizard = new Wizard();
    Healer* healer = new Healer();
    Berserker* berserker = new Berserker();

    std::cout << *wizard << std::endl;
    std::cout << *healer << std::endl;
    std::cout << *soldier << std::endl;

    wizard->cast(soldier);
    
    std::cout << *wizard << std::endl;
    std::cout << *healer << std::endl;
    std::cout << *soldier << std::endl;

    healer->cast(soldier);

    std::cout << *wizard << std::endl;
    std::cout << *healer << std::endl;
    std::cout << *soldier << std::endl;


    delete(rogue);
    delete(soldier);
    delete(werewolf);
    delete(wizard);
    delete(berserker);
    delete(healer);

    return 0;
}
