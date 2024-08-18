#include <stdio.h>
#define Pie 3.1415
int main()
{
    float Radius1, Area1;
    printf("Enter the radius of big circle: ");
    scanf("%f", &Radius1);
    Area1 = Pie * Radius1 * Radius1;

    float Radius2, Area2;
    printf("Enter the radius of small circle: ");
    scanf("%f", &Radius2);
    Area2 = Pie * Radius2 * Radius2;

    printf("The area of big circle is: %.2f\n", Area1);
    printf("The area of small circle is: %.2f\n", Area2);

    float Area3;
    Area3 = Area1 - Area2;
    printf("The area of the ring formed between them is: %.2f\n", Area3);

    return 0;
}