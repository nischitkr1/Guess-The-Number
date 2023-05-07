#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int num1 = rand() % 100 + 1, num2 = rand() % 100, player1 = 1, player2 = 1, guess;
    printf("Guess the Number!\n");
    printf("First Player's Turn\n");
    do
    {
        printf("Enter Guess: ");
        scanf("%d", &guess);
        if (guess > num1)
        {
            printf("It's Too High\n");
        }
        else if (guess < num1)
        {
            printf("It's Too Low\n");
        }
        else
        {
            printf("It's %d!\n", num1);
        }
        player1++;
    } while (guess != num1);
    printf("Second Player's Turn\n");
    do
    {
        printf("Enter Guess: ");
        scanf("%d", &guess);
        if (guess > num2)
        {
            printf("It's Too High\n");
        }
        else if (guess < num2)
        {
            printf("It's Too Low\n");
        }
        else
        {
            printf("It's %d!\n", num2);
        }
        player2++;
    } while (guess != num2);
    if (player1 == player2)
    {
        printf("Tie!\n");
    }
    else if (player1 < player2)
    {
        printf("First Player Wins!\n");
    }
    else
    {
        printf("Second Player Wins!\n");
    }
    return 0;
}