#include <stdio.h>  // include the standard input/output library
#include <stdlib.h> // include the standard library for random number generation
#include <time.h>   // include the time library for seeding the random number generator

int main(void)
{
    srand((unsigned)time(NULL));                                  // seed the random number generator with the current time
    const char *moveName[] = {NULL, "Rock", "Paper", "Scissors"}; // array of move names for display

    printf("Welcome to Rock, Paper, Scissors in C!\n");

    for (;;)
    {
        int userNum; // variable to store the user's move
        printf("\nRock(1), Paper(2), Scissors(3) or 0 to quit: ");

        if (scanf("%d", &userNum) != 1)
        { // check if the input is a valid integer
            printf("Invalid input.\n");
            while (getchar() != '\n')
                ;     // clear the input buffer
            continue; // continue to the next iteration of the loop
        }
        if (userNum == 0)
            break; // exit the loop if the user chooses to quit

        if (userNum < 1 || userNum > 3)
        { // check if the input is within the valid range
            printf("Invalid input.\n");
            while (getchar() != '\n')
                ;     // clear the input buffer
            continue; // continue to the next iteration of the loop
        }

        int cpuNum = (rand() % 3) + 1;           // generate a random move for the CPU (1-3)
        int result = (userNum - cpuNum + 3) % 3; // calculate the result of the game (0 = draw, 1 = user wins, 2 = CPU wins)

        /* The logic for determining the winner is calculated with modulus arithmetic. The formula (userNum - cpuNum + 3) % 3 gives:
           - 0 if both moves are the same (draw)
           - 1 if the user's move beats the CPU's move (user wins)
           - 2 if the CPU's move beats the user's move (CPU wins) */

        printf("You: %s | CPU: %s", moveName[userNum], moveName[cpuNum]);
        if (result == 0)
            printf("\n\nYou both have the same move, it's a draw!\n"); // the draw scenario
        else if (result == 1)
            printf("\n\nYour %s beats the CPU's %s, you win!\n", moveName[userNum], moveName[cpuNum]); // the user wins scenario
        else
            printf("\n\nYour %s loses to the CPU's %s, you lose!\n", moveName[userNum], moveName[cpuNum]); // the CPU wins scenario

        while (getchar() != '\n')
            ; // clear the input buffer to prepare for the next game
    }
    return 0; // return 0 to indicate successful execution of the program
}