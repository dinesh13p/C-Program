#include <stdio.h>

int main()
{
    float b, h ,area;
    

    printf("Enter base: ");
    scanf("%f", &b);

    printf("Enter height: ");
    scanf("%f", &h);

    area = 0.5 * b * h;

    printf("The area for triangle for base=%f  and height=%f is  = %f\n", b, h, area);
    return 0;
}