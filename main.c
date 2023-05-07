// guess the number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // generates random numbers
    srand(time(0));
    // variables to store values in integer
    int num1 = rand() % 100 + 1, num2 = rand() % 100, player1 = 1, player2 = 1, guess;
    // print a message as the title of the program
    printf("Guess the Number!\n");
    // print the start of first player's turn
    printf("First Player's Turn\n");
    // run a loop
    do
    {
        // input user a integer value as the guess of the number
        printf("Enter Guess: ");
        // store the value in the 'guess' variable
        scanf("%d", &guess);
        // if the value of 'guess' variable is greater than 'num1'
        if (guess > num1)
        {
            // print that the guess is higher
            printf("It's Too High\n");
        }
        // else if the value of 'guess' variable is smaller than 'num1'
        else if (guess < num1)
        {
            // print that the guess is lower
            printf("It's Too Low\n");
        }
        // else
        else
        {
            // print that the guess is right
            printf("It's %d!\n", num1);
        }
        // increase the value of 'player1' vairable by 1
        player1++;
        // while the value of 'guess' variable is not equal to 'num1'
    } while (guess != num1);
    // print the start of second player's turn
    printf("Second Player's Turn\n");
    // run a loop
    do
    {
        // input user a integer value as the guess of the number
        printf("Enter Guess: ");
        // store the value in the 'guess' variable
        scanf("%d", &guess);
        // if the value of 'guess' variable is greater than 'num2'
        if (guess > num2)
        {
            // print that the guess is higher
            printf("It's Too High\n");
        }
        // else if the value of 'guess' variable is smaller than 'num2'
        else if (guess < num2)
        {
            // print that the guess is lower
            printf("It's Too Low\n");
        }
        // else
        else
        {
            // print that the guess is right
            printf("It's %d!\n", num2);
        }
        // increase the value of 'player2' vairable by 1
        player2++;
        // while the value of 'guess' variable is not equal to 'num1'
    } while (guess != num2);
    // if the value of 'player1' variable is equal to 'player2'
    if (player1 == player2)
    {
        // print the game as tie
        printf("Tie!\n");
    }
    // else if the value of 'player' is less than 'player2;
    else if (player1 < player2)
    {
        // print the game as the win of first player
        printf("First Player Wins!\n");
    }
    // else
    else
    {
        // print the game as the win of second player
        printf("Second Player Wins!\n");
    }
    return 0;
}