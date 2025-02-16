#include <stdio.h>
int main(){
    int x, y;
    scanf("%d%d", &x, &y);
    if (x > y){
        printf("True");
    }
    else(){
        printf("False");
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     int num1, num2;

//     // Taking input from the user
//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     // Checking if the first number is greater than the second
//     if (num1 > num2) {
//         printf("The first number (%d) is greater than the second number (%d).\n", num1, num2);
//     } else {
//         printf("The first number (%d) is not greater than the second number (%d).\n", num1, num2);
//     }

//     return 0;
// }