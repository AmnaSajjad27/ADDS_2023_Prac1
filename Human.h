// Inherited class Computer 
#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream> 


class Human: public Player
{

    Human(std::string name, std::string move);

    // get name 
    // override 
    std::string getName() override;
    std::string makeMove() override;

};

#endif