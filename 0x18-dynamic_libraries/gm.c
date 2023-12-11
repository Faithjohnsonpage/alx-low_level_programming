#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random number in a given range
int generateRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to randomly choose six numbers for Giga Millions
void chooseGigaMillionsNumbers(int numbers[6]) {
    // Seed the random number generator with the current time
    srand((unsigned int)time(NULL));

    // Choose five numbers from 1 to 75
    for (int i = 0; i < 5; ++i) {
        numbers[i] = generateRandomNumber(1, 75);
    }

    // Choose one bonus number from 1 to 15
    numbers[5] = generateRandomNumber(1, 15);
}

int main() {
    int gigaMillionsNumbers[6];

    // Call the function to choose Giga Millions numbers
    chooseGigaMillionsNumbers(gigaMillionsNumbers);

    // Print the chosen numbers
    printf("Giga Millions Numbers: ");
    for (int i = 0; i < 6; ++i) {
        printf("%d ", gigaMillionsNumbers[i]);
    }
    printf("\n");

    return 0;
}

