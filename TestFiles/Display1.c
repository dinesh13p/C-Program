/*
WAP to display
1
23
345
4567
56789
*/

#include <stdio.h>

int main() {
    int rows = 5; // Number of rows to print

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print numbers in each row
        for (int j = i; j < i + i; j++) {
            printf("%d", j);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
