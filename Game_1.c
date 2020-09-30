#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("The number is %d", number);

    do
    {
        printf("Guess The Number Between 1 TO 100 : \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower NUMBER Pls : \n");
        }
        else if (guess < number)
        {
            printf("Higher Number PLS : \n");
        }
        else
        {
            printf("You guessed in %d attempts \n", nguess);
        }
        nguess++;

    } while (guess != number);

    return 0;
}