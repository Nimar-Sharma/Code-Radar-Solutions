#include <stdio.h>
int main(){
    int x, n ,b;
    scanf("%d %d", &x, &n);
    x = x & ~ (1 << n);
    printf("%d", x);
    return 0;
}