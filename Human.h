// Inherited class Computer 
#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include <iostream> 
#include <stdlib> 

using namespace std;

class Player: public Human
{

    Human(string name, string move);

    // get name 
    // override 
    std::string get_name() override;
};

#endif