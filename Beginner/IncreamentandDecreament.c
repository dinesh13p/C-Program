#include<stdio.h>
int main()
{
    int m = 6;
    printf("The initial value: m= %d\n",m);
    printf("Post increament value: m= %d\n",m++);
    printf("After post increament: m= %d\n",m);
    printf("Pre increament value: m= %d\n",++m);
    printf("Post decreament: m-- = %d\n", m--);
    printf("After post-decreament m is: %d\n",m);
    return 0;
}