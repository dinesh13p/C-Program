#include <stdio.h>
int main()
{
    int i = 1;
    printf("I am returning now");
    return 0;
    do
    {
        printf("%d", i);
        i++;
    } 
    while (i <= 5);
    return 0;
}
