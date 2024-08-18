//WAP to find the average and sum of marks of five subjects using while loop.

#include <stdio.h>

int main() {
    int marks, i = 1;
    int sum = 0;
    float average;

    // Loop to input marks of 5 subjects
    while (i <= 5) {
        printf("Enter marks for subject %d: ", i);
        scanf("%d", &marks);

        // Add the marks to sum
        sum += marks;

        // Increment counter
        i++;
    }

    // Calculate the average
    average = sum / 5.0;

    // Display the sum and average
    printf("Sum of marks: %d\n", sum);
    printf("Average of marks: %.2f\n", average);

    return 0;
}
