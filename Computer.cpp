#include "Player.h"
#include "Computer.h"
#include <string>

using namespace std;

Computer::Computer(string name, string move):Player(Name,Move){
    name = "Computer";
    move = 'R';
}