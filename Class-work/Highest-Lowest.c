#include<stdio.h>
int main()
{
    int numbers[7]={34, 43, 12, 32, 20, 300, 40};

    printf("The elements of the array are \n");

    int highest = numbers[0];
    int lowest = numbers[0];
    int i;
    int search;
    int found = 0;

    printf("Enter a number to search in the array: ");
    scanf("%d", &search);
    printf("searching for %d ... \n", search);

    for ( i = 0; i < 7; i++){
        printf("%d\t", numbers[i]);

        if (numbers[i] > highest){
            highest = numbers[i];
        }

        if (numbers[i] < lowest){
            lowest = numbers[i];
        }

        if (numbers[i]==search){
            found = 1;
        }
    }

    if (found == 1){
        printf("\n Yes I found %d \n", search);
    }
    else{
        printf("\n Sorry not found %d \n", search);
    }

    printf("The highest number in the array is: %d\n", highest);
    printf("The lowest number in the array is: %d\n", lowest);

    return 0;
}
