// Inherited class Computer 
#ifndef REFEREE-H
#define REFEREE_H
#include "Human.h"
#include "Computer.h"

#include <iostream> 
#include <stdlib> 

class Referee
{
    Public:
    Referee(); // constructor
    Player * refGame(Player * player1, Player * player2)
    // returns the reference to the winning player

};

#endif