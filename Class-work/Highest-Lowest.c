#include<stdio.h>
int main()
{
    int numbers[7]={34, 43, 12, 32, 20, 300, 40};

    printf("The elements of the array are \n");

    int highest = numbers[0];
    int lowest = numbers[0];
    
    for (int i = 0; i < 7; i++){
        printf("%d\t", numbers[i]);

        if (numbers[i] > highest){
            highest = numbers[i];
        }

        if (numbers[i] < lowest){
            lowest = numbers[i];
        }
    }

    printf("\n The highest number in the array is: %d", highest);
    printf("\n The lowest number in the array is: %d", lowest);

    return 0;
}