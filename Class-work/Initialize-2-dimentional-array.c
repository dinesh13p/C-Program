// #include<stdio.h>
// int main()
// {
//     int marks[5];

//     marks[0]=45;
//     marks[1]=0;
//     marks[2]=10;
//     marks[3]=30;
//     marks[4]=35;

//     for(int i=0; i<5; i++)
//     {
//     printf("marks is %d\n",marks[i]);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int marks[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Marks for subject %d is %d\n", i + 1, marks[i]);
    }

    printf("The sum of all marks given is: %d\n", sum);

    float average;
    average = sum / 5;
    printf("The average marks is: %.2f\n", average);

    return 0;
}
