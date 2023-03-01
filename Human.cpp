#include "Player.h"
#include "Human.h"
#include <string>

using namespace std:

HHuman::Human(string name, string move):Player(Name,Move){
    name = "Human";
}

// function that gets the name 

void Player::get_name(string name)
{
    cout << "Enter your name:"
    cin >> name;
}


// function that gets the move 

void Player::makeMove(string move)
{
    //Enter R,P or S 
    cout << "Enter Move:";
    cout << endl;
    cin >> move;

    if (move != 'R' || move != 'P' || move != 'S')
    {
        cout << "INVALID INPUT, PLEASE ENTER R, P OR S" << endl;
        return;
    }
}
