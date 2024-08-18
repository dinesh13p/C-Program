#include<stdio.h>
int main()
{
    int n=57;
    int r;
    int s=0;
    while(n>0)
    {
        r = n%10;
        s+=r;
        n/=10;
    }
    printf("Sum is %d", s);

    return 0;
}