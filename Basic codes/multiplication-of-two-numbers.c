#include <stdio.h>

int main()
{
    int m, n, multiple;

    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter b: ");
    scanf("%d", &n);

    multiple = m * n;

    printf("multiple of %d and %d is %d\n", m, n, multiple);

    return 0;
}