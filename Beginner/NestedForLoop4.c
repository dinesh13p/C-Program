#include<stdio.h>
int main()
{
    for(int i = 4; i >= 1; i--)
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
1111
111
11
1
*/