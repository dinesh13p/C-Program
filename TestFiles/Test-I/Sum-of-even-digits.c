// WAP to find the sum of even digits of any number supplied by the user.

#include <stdio.h>

int main()
{
    int num, digit, sum = 0;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop through each digit of the number
    while (num != 0)
    {
        digit = num % 10; // Get the last digit
        if (digit % 2 == 0)
        {
            sum += digit; // Add the digit to the sum if it's even
        }
        num /= 10; // Remove the last digit
    }

    // Display the result
    printf("Sum of even digits: %d\n", sum);

    return 0;
}
