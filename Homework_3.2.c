#include <stdio.h>

int main(){

    int num1, num2, gcd;

    scanf("Enter the first number:  %d", &num1);
    scanf("Enter the second number:  %d", &num2);

    for (int i; i < num1 + 1 && i < num2 + 1; i++){
        if ( num1%i == 0 && num2%2 == 0){
            gcd = i;
        }
    }
    printf("Gcd of  %d  and  %d  is equal to  %d", num1, num2, gcd);

    return 0;
}