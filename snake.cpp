#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int BOARD_SIZE = 100;
const int NUM_SNAKES = 5;
const int NUM_LADDERS = 5;

int rollDice() {
    return (rand() % 6) + 1;
}

int main() {
    srand(time(0));

    int board[BOARD_SIZE] = { 0 };

  int snakes[NUM_SNAKES][2] = { { 17, 7 }, { 54, 34 }, { 62, 19 }, { 64, 60 }, { 87, 36 } };
    int ladders[NUM_LADDERS][2] = { { 4, 14 }, { 9, 31 }, { 20, 38 }, { 28, 84 }, { 40, 59 } };

    int playerPos = 0;
    int diceRoll;

    while (playerPos < BOARD_SIZE) {
        diceRoll = rollDice();
        cout << "You rolled a " << diceRoll << ". ";

        playerPos += diceRoll;
        cout << "You are now on square " << playerPos << endl;

        for (int i = 0; i < NUM_SNAKES; i++) {
            if (playerPos == snakes[i][0]) {
                cout << "Oh no! You landed on a snake and went down to " << snakes[i][1] << endl;
                playerPos = snakes[i][1];
            }
        }

        for (int i = 0; i < NUM_LADDERS; i++) {
            if (playerPos == ladders[i][0]) {
                cout << "Yay! You climbed a ladder and went up to " << ladders[i][1] << endl;
                playerPos = ladders[i][1];
            }
        }
    }

    cout << "Congratulations! You won!" << endl;

    return 0;
}