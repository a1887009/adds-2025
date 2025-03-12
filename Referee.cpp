#include "Referee.h"

Referee::Referee() {};

Player * Referee::refGame(Player * player1, Player * player2) {
    Move * move1 = player1->makeMove();
    Move * move2 = player2->makeMove();

    std::cout << player1->getName() << " " << player2->getName() << " " << move1->getName() << " " << move2->getName() << std::endl;

    Player * winner = nullptr;
    if (move1->beats(*move2)) {
        winner = player1;
    } else if (move2->beats(*move1)) {
        winner = player2;
    }

    delete move1; delete move2;
    return winner;
}