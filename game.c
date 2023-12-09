#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand((unsigned int)time(NULL));
    int r = rand() % 11; // Generate a random number between 0 and 10
    int userNum;

    printf("Try a number between 0 and 10: \n");
    scanf("%d", &userNum);

    while (userNum != r) {
        printf("Wrong guess! Try another number: \n");
        scanf("%d", &userNum);
    }

    printf("Good job! You guessed it right!\n");

    return 0;
}
