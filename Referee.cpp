#include "Referee.h"
#include <string>

using namespace std;

    Referee::Referee(){};

    Player * Referee::refGame(Player * player1, Player * player2)
    {
    char h = player1->makeMove();
    char c = player2->makeMove();

    if (h == 'R' && c == 'R')
    {
        return nullptr;
    }
    if (h == 'P' && c == 'P')
    {
        return nullptr;
    }
    if (h == 'S' && c == 'S')
    {
        return nullptr;
    }
    if (h == 'R' && c == 'S')
    {
        return player1;
    }
    if (h == 'S' && c == 'P')
    {
        return player1;
    }
    if (h == 'P' && c == 'R')
    {
        return player2;
    }
    else 
    {
        return player1;
    }
}
