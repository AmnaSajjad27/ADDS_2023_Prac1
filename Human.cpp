#include "Player.h"
#include "Human.h"
#include <string>

using namespace std;

Human::Human()
{
    Name = "Human";
}
Human::Human(std::string name)
{
    this->Name = name;
}

// function that gets the move 
// commitng 
char Human::makeMove()
{
    char temp = ' ';
    //Enter R,P or S 

    while (move != 'R' || move != 'P' || move != 'S')
    {
        std::cout << "Enter Move:";
        std::cin >> temp;
    }
    return temp;
}