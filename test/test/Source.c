#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define MAX_TRIES 6
#define WORDS_COUNT 10

char* words[] = {
    "programming",
    "computer",
    "algorithm",
    "language",
    "keyboard",
    "software",
    "developer",
    "application",
    "internet",
    "database"
};

int main() {
    srand((unsigned int)time(NULL));
    char secretWord[20];
    char displayWord[20];
    size_t wordLength;
    int tries = 0;
    int i, found, win;
    char guess;

    printf("Welcome to Hangman Game!\n");

    // Select a random word from the list
    size_t randomIndex = rand() % WORDS_COUNT;
    strcpy_s(secretWord, sizeof(secretWord), words[randomIndex]);
    wordLength = strlen(secretWord);

    // Initialize displayWord with underscores
    for (i = 0; i < wordLength; i++) {
        displayWord[i] = '_';
    }
    displayWord[wordLength] = '\0';

    do {
        printf("Word to guess: %s\n", displayWord);
        printf("Enter a letter: ");
        scanf_s(" %c", &guess, sizeof(guess));

        found = 0;
        for (i = 0; i < wordLength; i++) {
            if (tolower((unsigned char)guess) == secretWord[i]) {
                displayWord[i] = secretWord[i];
                found = 1;
            }
        }

        if (!found) {
            tries++;
            printf("Incorrect guess. Tries left: %d/%d\n", MAX_TRIES - tries, MAX_TRIES);
        }

        // Check if the player has won
        win = (strcmp(secretWord, displayWord) == 0);

    } while (tries < MAX_TRIES && !win);

    if (win) {
        printf("Congratulations! You've guessed the word: %s\n", secretWord);
    }
    else {
        printf("You've run out of tries. The word was: %s\n", secretWord);
    }

    return 0;
}
