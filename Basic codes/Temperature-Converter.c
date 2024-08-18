#include<stdio.h>
int main()
{
float Celsius, Fahrenheit, Kelvin;
printf("Enter a Temperature in Celcius: ");
scanf("%f", &Celsius);

Fahrenheit = (9.0/5.0 * Celsius)+32;
Kelvin = 273.15 + Celsius;

printf("The temperature in Fahrenheit when it is %.2f in Celsius is: %.2f\n", Celsius, Fahrenheit);
printf("The temperature in Fahrenheit when it is %.2f in Celsius is: %.2f\n", Celsius, Kelvin);
return 0;
}