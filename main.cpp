#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    // Creates the players
    Human human("Mei");
    Computer computer;

    // Create the referee
    Referee referee;

    // Get the winner by passing both players to the referee
    Player* winner = referee.refGame(&human, &computer);

    // Print the result
    if (winner != nullptr) {
        std::cout << winner->getName() << " Wins!" << std::endl;
    } else {
        std::cout << "It's a Tie!" << std::endl;
    }

    return 0;
}
