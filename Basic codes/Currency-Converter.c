#include <stdio.h>
int main()
{
    float Dollar, Rupees;
    printf("Enter Dollar: ");
    scanf("%f", &Dollar);
    Rupees = Dollar * 135.5;
    printf("Nepalese rupees when %.2f Dollar is: Rs%.2f", Dollar, Rupees);

    return 0;
}
