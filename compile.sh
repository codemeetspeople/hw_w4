#! /bin/bash

g++ -c state/State.cpp
g++ -c unit/Unit.cpp
g++ -c unit/Soldier.cpp
g++ -c unit/Rogue.cpp
g++ -c unit/Werewolf.cpp
g++ -c spell/Spell.cpp
g++ -c spell/FireBall.cpp
g++ -c spellcaster/SpellCaster.cpp
g++ -c spellcaster/Wizard.cpp

g++ main.cpp Rogue.o Soldier.o State.o Werewolf.o Unit.o Spell.o FireBall.o SpellCaster.o Wizard.o

rm *.o
