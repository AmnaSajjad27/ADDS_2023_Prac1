// Inherited class Computer 
#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <iostream> 

class Computer: public Player
{
    public:
    Computer();
    // get name 
    // override 
    char makeMove();
};

#endif