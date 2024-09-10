#include <stdio.h>
#include <string.h>

int main() {
    char str[10] = "Gauranga";
    int len = strlen(str);

    for (int i =0; i <len ; i++) {
        printf("%s\n", &str[i]);
    }

    return 0;
}

/*
Gauranga
auranga
uranga
ranga
anga
nga
ga
a
*/