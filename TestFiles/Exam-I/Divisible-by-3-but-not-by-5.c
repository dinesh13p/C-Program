//WAP to display sum of numbers from 1-100 that are divisible by 3 but not by 5.
#include <stdio.h>
int main()
{
    int i;
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        // if (i % 3 == 0 && i % 5 != 0)
        if((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }
    printf("sum is %d", sum);
    return 0;
}