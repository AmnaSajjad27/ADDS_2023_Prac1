#ifndef PLAYER_H
#define PLAYER_H

// Abstract class player 
#include <iostream> 
#include <string>

using namespace std;

class Player
{
    protected:
    // Each player has a name and its move
    string Name;
    string Move;

    public:

    Player(string name, string move);

    // set the name and move of the player 
    void setName(string name);
    void makeMove(string move);

    // get the name and move of the player 
    virtual string getName() = 0;
    virtual char getMove()= 0;

    // Destructor 
    ~Player(){};

};

#endif