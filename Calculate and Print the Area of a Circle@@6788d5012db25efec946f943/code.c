#include <stdio.h>
int main(){
    float r, pi;
    pi = 3.14;
    scanf("%f", &r);
    float a = pi * r * r;
    printf("Area: %.2f", a);
    return 0;
}