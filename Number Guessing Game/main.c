#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int num = (rand() % 100) +  1;
    int guess = 0, guessed;

    printf("Welcome to Number Guessing Game\n");
    printf("Try to Guess the Number in 25 chances...\n");
    for (int i = 1; i < 50; i++) {
        printf("Enter any Number : ");
        scanf("%d", &guessed);

        // Guessed and num Relation
        if (guessed < num) {
            printf("Think a bit of greater Number\n");
            guess++;
        } else if (guessed > num) {
            printf("Guess a bit of lesser Number\n");
            guess++;
        } else if (guessed == num) {
            printf("You Won! Got the Right Number in %d guesses\n", guess + 1);
            break;
        }

        // Chances Counter
        if (i == 25) {
            printf("You Lose ! Took More than %d Guesses\n", i);
            break;
        }
    }

    return 0;
}
