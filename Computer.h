// Inherited class Computer 
#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <iostream> 

class Computer: public Player
{

    Computer(std::string name, std::string move);

    // get name 
    // override 
    std::string getName() override;
};

#endif