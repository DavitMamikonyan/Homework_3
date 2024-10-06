#include <stdio.h>

int main(){
    int num1, num2, grv, gcdR;     // grv means the greatest value
    scanf("Enter two values:  %d %d", &num1, &num2);

    if (num1>num2){
        grv = num1;
    }
    else{
        grv = num2;
    }

    while (1)
    {
        if (grv%num1 == 0 && grv%num2 ==0);{
            gcdR = grv;
            break;
        }
        grv--;
    }
    
    return 0;

    // I watched this from in youtube. If it is true, i need some explainations please

}

