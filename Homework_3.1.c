#include <stdio.h>

int is_perfect(int num, int rem, int sum){

    sum = 0;
    rem = 0;

    for (int i = 1; i < num; i++){
        rem = num%i;
        if (rem == 0){
            sum = sum + i;
        }
    }
    return sum == num;
}

int main(){
    int rem = 0;
    int sum = 0;
    for (int i=1; i < 1001; i++){
        if (is_perfect(i, rem, sum)){
            printf("%d - is perfect number \n", i);
        }
        return 0;
    }

}
