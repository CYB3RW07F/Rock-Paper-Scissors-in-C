#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    const char *moveName[] = { NULL, "Rock", "Paper", "Scissors" };

    printf("Welcome to Rock, Paper, Scissors in C!\n");

    for (;;) {
        int userNum;
        printf("\nRock(1), Paper(2), Scissors(3) or 0 to quit: ");

        if (scanf("%d", &userNum) != 1) {
            printf("Invalid input.\n");
            while (getchar() != '\n');
            continue;
        }
        if (userNum == 0) break;
        if (userNum < 1 || userNum > 3) {
            printf("Invalid input.\n");
            while (getchar() != '\n');
            continue;
        }

        int cpuNum = (rand() % 3) + 1;
        int result = (userNum - cpuNum + 3) % 3;

        printf("You: %s | CPU: %s", moveName[userNum], moveName[cpuNum]);
        if (result == 0) printf("\n\nYou both have the same move, it's a draw!\n");
        else if (result == 1) printf("\n\nYour %s beats the CPU's %s, you win!\n", moveName[userNum], moveName[cpuNum]);
        else printf("\n\nYour %s loses to the CPU's %s, you lose!\n", moveName[userNum], moveName[cpuNum]);

        while (getchar() != '\n');
    }
    return 0;
}