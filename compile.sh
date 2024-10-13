#! /bin/bash

g++ -c state/State.cpp
g++ -c unit/Unit.cpp
g++ -c unit/Soldier.cpp
g++ -c unit/Rogue.cpp
g++ -c unit/Werewolf.cpp
g++ main.cpp Rogue.o Soldier.o State.o Werewolf.o Unit.o
rm *.o
