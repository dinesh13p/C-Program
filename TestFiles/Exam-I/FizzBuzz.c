#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("divisible by both 3 and 5");
    }
    else if (num % 3 == 0)
    {
        printf("divisible by 3");
    }
    else if (num % 5 == 0)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("not divisible by 3 or 5");
    }
    return 0;
}
