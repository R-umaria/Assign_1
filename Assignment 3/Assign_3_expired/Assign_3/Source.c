#include "rps_game.h"
#include <string.h>

char* determine_rps_winner(const char player1_choice[], const char player2_choice[]) {
    if (strcmp(player1_choice, "rock") == 0 && strcmp(player2_choice, "scissors") == 0) {
        return "Player 1 wins!";
    }
    else if (strcmp(player1_choice, "scissors") == 0 && strcmp(player2_choice, "paper") == 0) {
        return "Player 1 wins!";
    }
    else if (strcmp(player1_choice, "paper") == 0 && strcmp(player2_choice, "rock") == 0) {
        return "Player 1 wins!";
    }
    else if (strcmp(player2_choice, "rock") == 0 && strcmp(player1_choice, "scissors") == 0) {
        return "Player 2 wins!";
    }
    else if (strcmp(player2_choice, "scissors") == 0 && strcmp(player1_choice, "paper") == 0) {
        return "Player 2 wins!";
    }
    else if (strcmp(player2_choice, "paper") == 0 && strcmp(player1_choice, "rock") == 0) {
        return "Player 2 wins!";
    }
    else {
        return "It's a tie!";
    }
}

int main() {
    
    printf("::    Rock Paper Scissors ::\n");


    return 1;
}