#include "Player.h"
#include <string>

// constructor 

using namespace std;

//  Implent Set name, get name is implemented by inherited class
// becuase it is a pure virtual function

void Player::setName(string name)
{
    this->Name = name;
}

string Player::getName()
{
    return Name;
}

char Player::getMove()
{
    return Move;
}