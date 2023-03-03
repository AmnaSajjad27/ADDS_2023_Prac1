// Inherited class Computer 
#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream> 


class Human: public Player
{
    Human::Human();

    // get name 
    // override 
    Human(std::String setName);
    char makeMove() override;
};

#endif