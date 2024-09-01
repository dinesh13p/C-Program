/*
WAP to display the following:
5  10 15 20 25
10 15 20 25 30
15 20 25 30 35
20 25 30 35 40
25 30 35 40 45
*/

#include<stdio.h>
int main()
{
    int i,j;
    for (i=1; i<=5; i++)
    {
        for (j=0; j<=5; j++)
        {
            int multiply =(i+j)*5;
            printf("%d\t", multiply);
        }
        printf("\n");
    }
    return 0;
}