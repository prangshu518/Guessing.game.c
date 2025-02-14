// GUESS THE NUMBER GAME

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate and print a random number between 1 and 100
    int randomnumber = rand() % 100 + 1;
    int guessed, no_of_guesses=0;

    do
    {
        printf("Guess the no: \n");
        scanf("%d", &guessed);

        if (guessed > randomnumber)
        {
            printf("Lower nnumber please!\n");
        }
        else if (guessed < randomnumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!!!\n");
        }
        no_of_guesses++;
    } while (guessed != randomnumber);
    printf("You guesed the no. in %d guesses\n", no_of_guesses);

    return 0;
}
