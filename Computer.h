// Inherited class Computer 
#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <iostream> 

using namespace std;

class Computer: public Player
{

    Computer(string name, string move);

    // get name 
    // override 
    string getName() override;
};

#endif