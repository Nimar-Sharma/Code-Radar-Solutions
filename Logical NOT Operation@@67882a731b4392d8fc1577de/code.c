// Find the Sum of the Digits of a Given Number
#include <stdio.h>
int main(){
    int x, sum =0;
    printf("qwqqw");
    scanf("%d", &x);
    while(x != 0){
        x%=10;
        int digit = x;
        sum+=x;
        printf("%d" , sum);
    }
    return 0;
}