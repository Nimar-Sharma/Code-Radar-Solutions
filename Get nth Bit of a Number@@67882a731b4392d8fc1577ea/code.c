#include <stdio.h>
int main(){
    int x, n;
    scanf("%d %d", &x, &n);
    int b = (x >> n) & 1;
    printf("%d", b);
    return 0;
}