#include "Player.h"
#include <string>

// constructor 

Player::Player(string name, string move)
{
    Name = name;
    Move = move;
}

//  Implent Set name, get name is implemented by inherited class
// becuase it is a pure virtual function

void Player::setName(string name)
{
    Name = name;
}

// Implent get and set move
void Player::makeMove(string move)
{
    Move = move;
}