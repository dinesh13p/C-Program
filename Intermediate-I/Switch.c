#include <stdio.h>
int main()
{
    int day;
    printf("Enter a number(1-7): ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thursday\n");
        break;
    case 6:
        printf("Fridayday\n");
        break;
    case 7:
        printf("Saturday\n");

    default:
        printf("Invalid");
        break;
    }

    return 0;
}