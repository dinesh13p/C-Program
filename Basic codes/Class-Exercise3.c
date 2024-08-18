#include<stdio.h>

int main() {
    float a, b, c;
    a = 3;
    scanf("%f", &a); 
    b = 4;
    scanf("%f", &b);
    c = (a != b) ? 1 : 0;
    printf("%.1f",c);
    return 0;
}
