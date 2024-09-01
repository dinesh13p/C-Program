// WAP to read a number from user, count the number of even and odd digits contained in it and display number of odd and even count#include <stdio.h>

int main() {
    int number, digit;
    int evenCount = 0, oddCount = 0;

    // Read a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Make sure the number is positive
    if (number < 0) {
        number = -number;
    }

    // Process each digit
    while (number != 0) {
        digit = number % 10; // Extract the last digit
        if (digit % 2 == 0) {
            evenCount++; // Increment even count
        } else {
            oddCount++; // Increment odd count
        }
        number /= 10; // Remove the last digit
    }

    // Display the results
    printf("Even digit count: %d\n", evenCount);
    printf("Odd digit count: %d\n", oddCount);

    return 0;
}
