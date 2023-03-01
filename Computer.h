// Inherited class Computer 
#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <iostream> 
#include <stdlib> 

using namespace std;

class Player: public Computer
{

    Computer(string name, string move);

    // get name 
    // override 
    std::string get_name() override;
};

#endif