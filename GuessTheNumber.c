@ -1,39 +0,0 @@
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define BLUE    "\x1b[34m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

int main() {
    int guess, number, attempts = 0;

    srand(time(NULL));

    number = rand() % 100 + 1;

    printf(BLUE"==========================================\n");
    printf("Welcome to the Guess the Number game!\n");
    printf("Try to guess the number between 1 and 100.\n");
    printf("==========================================\n"RESET);

    do {
        printf(CYAN"Enter your guess: "RESET);
        scanf("%d", &guess);

        attempts++;

        if (guess > number) {
            printf(RED"Too high! Try again.\n"RESET);
        } else if (guess < number) {
            printf(RED"Too low! Try again.\n"RESET);
        } else {
            printf(GREEN"Congratulations! You guessed the number in %d attempts.\n"RESET, attempts);
        }
    } while (guess != number);

    return 0;
}
