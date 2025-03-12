#include "Referee.h"

Referee::Referee() {};

Player * Referee::refGame(Player * player1, Player * player2) {
    Move * move1 = player1->makeMove();
    Move * move2 = player2->makeMove();

    std::cout << player1->getName() << " chose " << move1->getName() << std::endl;
    std::cout << player2->getName() << " chose " << move2->getName() << std::endl;

    if (move1->beats(*move2)) {
        delete move1; delete move2;
        return player1;
    } else if (move2->beats(*move1)) {
        delete move1; delete move2;
        return player2;
    }

    std::cout << "It's a tie!" << std::endl;
    delete move1; delete move2;
    return nullptr;
}