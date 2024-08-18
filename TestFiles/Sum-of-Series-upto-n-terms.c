// WAP to display sum of the following series upto n terms, Sum = X - X^2 + X^3 -X^4 + .......

#include <stdio.h>
#include <math.h>

int main() {
    int n, X;
    float sum = 0.0;

    // Ask the user to enter the values of X and n
    printf("Enter the value of X: ");
    scanf("%d", &X);
    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Loop to calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        float term = pow(X, i);  // Calculate X^i

        // Alternate adding and subtracting terms
        if (i % 2 == 0) {
            sum -= term;  // Subtract term if i is even
        } else {
            sum += term;  // Add term if i is odd
        }
    }

    // Display the result
    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}
