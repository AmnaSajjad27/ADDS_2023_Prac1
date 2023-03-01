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
    string getName() override;
    string makeMove() override;

};

#endif