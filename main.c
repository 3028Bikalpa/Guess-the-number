/*
This a demo game, in which a random number between 0-20 is generated and the user has to guess the random number in 5 attempts
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t));
    int RandomNumber= rand()%21;
    int GuessedNumber;
    for (int i=5; i>=1; i--)
    {
        printf("You have %d attempts left\n", i);
        printf("Enter your guess number from 0-20:\n ");
        scanf("%d", &GuessedNumber);
        if (GuessedNumber==RandomNumber)
        {
            printf("You have successfully guessed the number\n\n");
            break;
        }
        else if (GuessedNumber<RandomNumber)
        {
            printf("You have guessed the number less than the random number\n\n");
        }
        else if (GuessedNumber>RandomNumber)
        {
            printf("You have guessed the number greater than the random number\n\n");
        }
        else
        {
            printf("There seems to be a problem with your entry\n\n");
        }
    }
    return 0;
}
