#include <stdio.h>
int main()
{
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    int B[2][3] = {
        {10, 20, 30},
        {40, 50, 60}};

    int Sum[2][3];
    Sum[2][3] = A[2][3] + B[2][3];

    printf("The sum of matrix is: \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}