#include<stdio.h>
int main()
{
    float Length, Width;
    float Area, Perimeter;

    printf("Enter the Length of rectangle: ");
    scanf("%f", &Length);
    printf("Enter the Width of rectangle: ");
    scanf("%f", &Width);

    Area = Length * Width;
    printf("THe area of rectangle is: %.2f\n", Area);
    Perimeter = 2*(Length+Width);
    printf("The perimeter of rectangle is: %.2f\n", Perimeter);
    return 0;
}