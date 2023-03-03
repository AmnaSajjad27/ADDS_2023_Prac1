#include "Player.h"
#include "Computer.h"
#include <string>

using namespace std;

// default contructor 
Computer::Computer()
{
    makeMove();
    this->setName("Computer");
}

char Computer::makeMove()
{
    return 'R';
}