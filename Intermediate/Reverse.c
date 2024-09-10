#include <stdio.h>

int main() {
    int num, reversedNum = 0;

    // Input a 3-digit number
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Extract and reverse the digits
    reversedNum += (num % 10) * 100;   // Get the last digit and place it as the first digit
    num /= 10;                         // Remove the last digit

    reversedNum += (num % 10) * 10;    // Get the middle digit and place it in the middle
    num /= 10;                         // Remove the middle digit

    reversedNum += num;                // The last remaining digit becomes the last digit

    // Output the reversed number
    printf("Reversed Number: %d\n", reversedNum);

    return 0;
}

