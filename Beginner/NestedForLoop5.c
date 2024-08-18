#include<stdio.h>
int main()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("1\t");
        }
        printf("\n");
    }
    return 0;
}

/*
1
11
111
1111
*/