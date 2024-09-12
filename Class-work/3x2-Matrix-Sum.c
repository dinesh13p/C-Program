#include <stdio.h>
int main()
{
    int A[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    int B[][2] = {
        {10, 20},
        {30, 40},
        {50, 60}};

    int Sum[2][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("The sum of matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}