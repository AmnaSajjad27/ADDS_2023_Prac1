#include "Referee.h"
#include <string>

using namespace std;

Referee::Referee(Player * player1, Player * player2)
{
    if (player1 == 'R' && player2 == 'R')
        return NULL;
    if (player1 == 'P' && player2 == 'P')
        return NULL;
    if (player1 == 'S' && player2 == 'S')
        return NULL;
    if (player1 == 'R' && player2 == 'S')
        return *player1;
    if (player1 == 'S' && player2 == 'P')
        return *player1;
    if (player1 == 'P' && player2 == 'R')
        return *player1;
    else 
        return *player2;
}
