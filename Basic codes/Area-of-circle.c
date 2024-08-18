#include <stdio.h>
#include<math.h>
int main()
{
    float Pie = 22/7;
    float r, Area;
    printf("Enter radius: ");
    scanf("%f", &r);
    // Area = Pie * r * r;
    Area = Pie * pow(r,2);
    printf("The Area of circle is: %.2f\n", Area);
    return 0;
}