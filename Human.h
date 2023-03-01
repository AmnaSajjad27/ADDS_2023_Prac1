// Inherited class Computer 
#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream> 

using namespace std;

class Human: public Player
{

    Human(string name, string move);

    // get name 
    // override 
    std::string get_name() override;
};

#endif