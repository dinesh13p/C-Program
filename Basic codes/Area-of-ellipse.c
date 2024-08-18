#include <stdio.h>
int main()
{
    float Pie = 3.14;
    float minor, major, Area;
    printf("Enter value of minor: ");
    scanf("%f", &minor);
    printf("Enter value of major: ");
    scanf("%f", &major);
    Area = Pie * minor * major;
    printf("The area of ellipse when Pie=%f, minor=%f and major=%f is: %f\n", Pie, minor, major, Area);
    return 0;
}
