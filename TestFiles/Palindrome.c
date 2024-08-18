/* WAP to read a number from keyboard and check weather it is a palindrome or not */

#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder, originalNum;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number
    originalNum = num;

    // Reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number and reversed number are the same
    if (originalNum == reversedNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);

    return 0;
}
