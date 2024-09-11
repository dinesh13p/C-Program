// MATRIX
#include <stdio.h>
int main()
{
    int OneDArray[3] = {10, 25, 53};
    printf("element of position at 2 is: %d \n", OneDArray[1]);
    // Update the value at position 2
    OneDArray[1] = 44;

    int matrix[2][3] = {
        {1, 2, 33}, // First Row
        {4, 5, 6}   // Second Row
    };

    // access the element in an array
    printf("The element at row 1 and column 3 is: %d\n", matrix[0][2]);
    // update the value at row 1 and cloumn 3
    matrix[0][2] = 3;

    printf("After update the element at row 1 and column 3 is: %d\n", matrix[0][2]);

    // Print 2D array
    printf("The matrix is: \n");
    for (int i = 0; i < 2; i++) // loop over rows
    {
        for (int j = 0; j < 3; j++) // loop over column
        {
            printf("%d\t", matrix[i][j]); // access each elements using matrix[i][j]
        }
        printf("\n"); // move to the next line after each row
    }

    return 0;
}