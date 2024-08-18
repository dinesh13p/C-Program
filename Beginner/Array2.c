#include<stdio.h>
int main()
{
    char Nepal[8]="My Nepal";

    printf("%-8.8s\n",Nepal);
    printf("%-8.7s\n",Nepal);
    printf("%-8.6s\n",Nepal);
    printf("%-8.5s\n",Nepal);
    printf("%-8.4s\n",Nepal);
    printf("%-8.3s\n",Nepal);
    printf("%-8.1s\n\n",Nepal);

    printf("%-8.1s\n",Nepal);
    printf("%-8.3s\n",Nepal);
    printf("%-8.4s\n",Nepal);
    printf("%-8.5s\n",Nepal);
    printf("%-8.6s\n",Nepal);
    printf("%-8.7s\n",Nepal);
    printf("%-8.8s\n",Nepal);

    printf("%8.2s\n",Nepal);

    return 0;
}

/* Output:
My Nepal
My Nepa
My Nep
My Ne
My N
My
M
M
My N
My Ne
My Nep
My Nepa
My Nepal
*/