/*
WAP to find the sum of the series:
1 + x^2 + 3x^3 + 4x^4 + .... + nx^n
*/

#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    int series = 0;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the number of terms n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        series += i * pow(x, i);
    }

    printf("The sum of the series for x = %d and n = %d is: %d\n", x, n, series);

    return 0;
}
