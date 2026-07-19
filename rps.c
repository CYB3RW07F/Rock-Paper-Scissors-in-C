#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned)time(NULL));
    const char *moveName[] = { NULL, "Rock", "Paper", "Scissor" };

    printf("Welcome to Rock, Paper, Scissor in C!\n");

    for (;;) {
        int userNum;
        printf("\nRock(1), Paper(2), Scissor(3), or 0 to quit: ");

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

        printf("You: %s | CPU: %s -> ", moveName[userNum], moveName[cpuNum]);
        if (result == 0) printf("Draw\n");
        else if (result == 1) printf("You win\n");
        else printf("You lose\n");

        while (getchar() != '\n');
    }
    return 0;
}