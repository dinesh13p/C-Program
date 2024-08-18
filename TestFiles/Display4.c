/*
Nityanandas
ityananda
tyanand
yanan
ana
n
*/

#include <stdio.h>
#include <string.h>

void printPattern(char *str) {
    int length = strlen(str);
    
    for (int i = 0; i < length; i += 2) {  // Step of 2 for reducing string length
        for (int j = i; j < length - i; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}

int main() {
    char str[] = "Nityanandas";
    
    printPattern(str);

    return 0;
}
