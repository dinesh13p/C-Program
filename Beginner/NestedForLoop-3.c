#include<stdio.h>
int main()
{
    for(int i = 4; i >= 1; i--)
    {
        for(int j = 1; j <=i; j++)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}

/*
1234
123
12
1
*/