#include "Referee.h"

Referee::Referee() {};

Player * Referee::refGame(Player * player1, Player * player2) {
    Move * move1 = player1->makeMove();
    Move * move2 = player2->makeMove();


    Player * winner = nullptr;
    if (move1->getName() == move2->getName()) {
        std::cout << "Tie" << std::endl;
    } else if (move1->beats(*move2)) {
        winner = player1;
    } else {
        winner = player2;
    }

    delete move1; delete move2;
    return winner;
}