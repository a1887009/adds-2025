#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"

class Referee{
public:
// Constructor
Referee( );

//Game command
Player * refGame(Player * player1, Player * player2);

};

#endif //REFEREE_H