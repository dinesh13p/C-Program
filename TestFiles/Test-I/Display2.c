/*
WAP to print
Nityanandas
ityanands
tyanand
yanan
ana
n
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Nityanandas";
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len - i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}