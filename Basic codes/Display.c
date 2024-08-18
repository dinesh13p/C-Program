#include<stdio.h>
int main(){
    char ch;
    //prompt the user
    printf("Press any key to continue ...\n");
    //wait for the user to press the key
    ch=getchar();
    //display th epressed key
    printf("You pressed:%c\n",ch);
    return 0;
}