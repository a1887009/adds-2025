#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

// Player is an abstract class
class Player {
public:
    // Vitual functions
    virtual char makeMove( ) = 0;
    virtual std::string getName( ) = 0;
    // Virtual deconstructor
    virtual ~Player() {}
};



#endif //PLAYER_H