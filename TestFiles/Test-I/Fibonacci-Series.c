// WAP to find fibonacci sequence upto n.  (0,1,1,2,3,5,8,13)

#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next, i;

    // Ask the user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence:\n");

    for (i = 0; i < n; i++)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");

    return 0;
}
