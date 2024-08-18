#include<stdio.h>
#define PI 3.1415
int main()
{
    float radius, area;
    const float radius1=100;
    const float rate=3.5;
    const float pie=3.1415;

    float area1;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area= PI * radius * radius;
    area1 = pie * radius1 * radius1;

    printf("The area of circle with radius %.2f is: %.2f\n ", radius, area);
    printf("The area of circle with radius1 %.2f is: %.2f\n", radius1, area1);

    return 0;
}