#include <stdio.h>
int main(){
    char n[100];
    char h[100];
    int a;
    scanf("%s%d%s", &n, &a, &h);
    printf("Name: %s\nAge: %d\n Hobby: %s", n, a, h);
    return 0;
}