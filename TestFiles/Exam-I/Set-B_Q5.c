#include <stdio.h>

int main() {
    int num, i, Prime = 1;

    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are neither prime nor composite
    if (num <= 1) {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    // Check if the number is prime
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            Prime = 0; // Set Prime to 0 if the number is divisible by any number other than 1 and itself
            break;
        }
    }

    // Output the result
    if (Prime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is a composite number.\n", num);

    return 0;
}


// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a positive integer: ");
//     scanf("%d", &a);
//     switch (a)
//     {
//     case 1:
//     if(a<=1){
//         printf("Neither prime nor composite\n");
//         }
//         break;
//     case 2:
//     if(a)
//         printf("Monday\n");
//         break;
//     case 3:
//         printf("Tuesday\n");
//         break;
//     }

//     return 0;
// }