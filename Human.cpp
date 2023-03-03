#include "Player.h"
#include "Human.h"
#include <string>

using namespace std;

Human::Human(string name, string move):Player(Name,Move){
    name = "Human";
}

// function that gets the name 

string Player::getName(string name)
{
    cout << "Enter your name:"
    cin >> name;
    return name;
}


// function that gets the move 

char Human::makeMove()
{
    char move;
    //Enter R,P or S 
    cout << "Enter Move:";
    cout << endl;
    cin >> move;

    while (move != 'R' || move != 'P' || move != 'S')
    {
        cout << "INVALID INPUT, PLEASE ENTER R, P OR S" << endl;
        return;
    }
    return move;
}

string Player::getMove()
{
    return Move;
}
