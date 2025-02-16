#include <stdio.h>
int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    float p = x * y;
    printf("Product: %.2f", p);
    return 0;
}