#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()

{
    int guess = 0;

    srand(time(0));
    int a = rand() % 100 + 1;

    printf("\n\nI have generated a no. between 1 to 100\n");

    // printf("%d", a);
    printf("\nGuess the number\n");
    

    for(int i = 1; guess!=a; i++)
    {
        scanf("%d", &guess);

        if (guess > 100 || guess < 0)
        {
            printf("Invalid Input\n");
        }

        else if (guess > a)
        {
            printf("Lower Number Please\n");
        }

        else if (guess < a)
        {
            printf("Higher Number Please\n");
        }
       
        else
        {
             printf("You got it correct in %d attempts\n", i);
        }

        
    }

   

    return 0;
}