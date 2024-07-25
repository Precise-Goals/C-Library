#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Choose(int a, char na[]);
void Choose(int a, char na[])
{
    if (a == 0) {
        printf("%s Choosed the Snake\n", na);
    } else if (a == 1) {
        printf("%s Choosed the Water\n", na);
    } else if (a == 2) {
        printf("%s Choosed the Gun\n", na);
    } else {
        printf("%s Choosed Invalid Input\n", na);
    }
};
int main()
{
    srand(time(0));
    int player, curr = 0, n;
    int pl = 0, cp = 0;
    int computer = (rand() % 3) + 0;
    printf("Welcome to Snake Water Gun game...\n");
    printf("How many pointer match you wanna play ?\n");
    printf("Enter the Amount : ");
    scanf("%d", &n);

    while (curr != n) {
        printf("_____snake water gun______\n");
        printf("|   help    | - scores - |\n");
        printf("| 0 - Snake | pl      cp |\n");
        printf("| 1 - Water | %d       %d  |\n", pl, cp);
        printf("| 2 - Gun   |            |\n");
        printf("| Your Output : ");
        scanf("%d", &player);
        printf("__________________________\n");
        Choose(player, "You");
        Choose(computer, "Computer");
        if (player == 0 || player == 1 || player == 2) {

            if ((player == 1 && computer == 2) || (player == 2 && computer == 0) || (player == 0 && computer == 1)) {
                printf("Player takes the Point !\n");
                pl++;
            } else if ((player == 1 && computer == 0) || (player == 2 && computer == 1) || (player == 0 && computer == 2)) {
                printf("Computer Takes the Point\n");
                cp++;
            } else if ((player == 2 && computer == 2) || (player == 1 && computer == 1) || (player == 0 && computer == 0)) {
                printf("Its a Draw !\n");
            }
        } else {
            printf("Enter the Valid input!\n");
            continue;
        }
        printf("__________________________\n");
        curr = curr + 1;
    }
    if (pl > cp) {
        printf("Player Aclaimed his Victory with %d points !\n", pl);
        printf("Computer loses with %d points !\n", cp);
    } else if (pl < cp) {
        printf("Computer had Defensive Victory with %d points !\n", cp);
        printf("Player loses with %d points !\n", pl);
    } else if (pl == cp) {
        printf("Both Computer and Player made this match Draw with %d points !\n", cp);
    } else {
        printf("Technical Issues Match is being cancelled like neet exam !\n");
    }
    printf("__________________________\n");

    return 0;
}