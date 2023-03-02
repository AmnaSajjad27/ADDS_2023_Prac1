#ifndef PLAYER_H
#define PLAYER_H

// Abstract class player 
#include <iostream> 
#include <string>

class Player
{
    protected:
    // Each player has a name and its move
    std::string Name;
    std::string Move;

    public:

    Player(std::string name, std::string move);

    // set the name and move of the player 
    void setName(std::string name);
    void makeMove(std::string move);

    // get the name and move of the player 
    virtual std::string getName() = 0;
    virtual char getMove()= 0;

    // Destructor 
    ~Player(){};

};

#endif