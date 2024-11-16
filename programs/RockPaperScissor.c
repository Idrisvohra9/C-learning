#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // The star operator (*) is used because choices is an array of strings (char pointers)
    char *choices[] = {"Rock", "Paper", "Scissors"};
    int userChoice, computerChoice;

    // Initialize random seed
    srand(time(0));
    computerChoice = rand() % 3;

    printf("Choose an option: 0 - Rock, 1 - Paper, 2 - Scissors: ");
    scanf("%d", &userChoice);

    printf("You chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);

    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
