#include "Human.h"
#include "Referee.h"

int main() {
    Human player1("Player1");
    Human player2("Player2");
    Referee referee;

    Player * winner = referee.refGame(&player1, &player2);
    if (winner) {
        std::cout << "Winner: " << winner->getName() << std::endl;
    }

    return 0;
}