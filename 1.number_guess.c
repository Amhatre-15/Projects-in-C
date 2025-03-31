#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess;
    int count = 0;
    
    srand(time(0));  
    random = (rand() % 100 ) ;  

    printf("***************************************\n");
    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the number between 1 and 100.\n");

    do {
        printf("\nEnter your guess: ");
        
        if (scanf("%d", &guess) == 1) { 
            count++;

            if (guess < random) {
                printf("Too low! Try a number greater than %d.\n", guess); 
            } else if (guess > random) {
                printf("Too high! Try a number smaller than %d.\n", guess);
            } else {
                printf("Congratulations! You guessed the number %d in %d attempts.\n", random, count);
                break;
            }
        } else {
            printf("Invalid input! Please enter a valid number.\n");
            return 1; 
        }

    } while (1);

    printf("\nThanks for playing!\n");
    printf("Made by: Atharva Mhatre\n");

    return 0;
}
