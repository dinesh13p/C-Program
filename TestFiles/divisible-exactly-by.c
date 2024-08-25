// WAP to find the sum of numbers from 1 to 100 which are exactly divisible by 5 and not by 3

#include <stdio.h>

int main() {
    int sum = 0;

    // Loop through numbers from 1 to 100
    for (int i = 1; i <= 100; i++) {
        // Check if the number is divisible by 5 but not by 3
        if (i % 5 == 0 && i % 3 != 0) {
            sum += i;  // Add the number to the sum
        }
    }

    // Display the result
    printf("The sum of numbers from 1 to 100 that are divisible by 5 but not by 3 is: %d\n", sum);

    return 0;
}