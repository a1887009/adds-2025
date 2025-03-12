#include "Human.h"
#include "Referee.h"
#include "Computer.h"

int main() {
    Human player1("Player1");
    Computer player2("Computer");
    Referee referee;

    Player * winner = referee.refGame(&player1, &player2);
    if (winner) {
        std::cout << "Winner: " << winner->getName() << std::endl;
    }

    return 0;
}