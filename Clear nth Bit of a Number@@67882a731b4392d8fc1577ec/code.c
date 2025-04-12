#include <stdio.h>
int main(){
    int x, n ,b;
    scanf("%d %d", &x, &n);
    b = (x >> n) &0;
    printf("%d", b);
    return 0;
}