/*
WAP to display
3 6 9 12
6 9 12 15
9 12 15 18
*/

#include <stdio.h>

int main() {
    int rows = 3; // Number of rows in the pattern
    int cols = 4; // Number of columns in the pattern
    int startValue = 3; // Starting value of the pattern
    
    // Loop through each row
    for (int i = 0; i < rows; i++) {
        // Loop through each column in the row
        for (int j = 0; j < cols; j++) {
            // Print the current value with a space
            printf("%d ", startValue + i * 3 + j * 3);
        }
        // Move to the next line after printing all columns in a row
        printf("\n");
    }

    return 0;
}
