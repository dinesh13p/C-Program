#include <stdio.h>
#include<math.h>

int main()
{
    float p, r, t, n, ci;

    printf("Enter Principle: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%f", &t);

    printf("Enter number of times interest applied per time period: ");
    scanf("%f", &n);

    float a;
    a = 1 + r/100;

    ci = p *( pow (a,n))-p;

    printf("The Compound Interest is: %.2f\n", ci);

    return 0;
}




