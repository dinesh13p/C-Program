#include<stdio.h>
int main()
{
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("The matrix is: \n");
    int i;
    int j;
    for (i = 0; i < 2; i++){
        for  (j = 0; j < 3; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    int transpose[3][2];
    transpose[3][2] = matrix[j][i];
    printf("%d\t", transpose[i][j]);

    return 0;
}