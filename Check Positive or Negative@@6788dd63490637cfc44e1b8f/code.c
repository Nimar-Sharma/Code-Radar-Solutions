#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x > 0){
        if(x < 0){
            printf("Negative");
        }
    printf("Positive");
    }
    else{
        printf("Zero");
    }
    return 0;
}