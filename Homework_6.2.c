#include <stdio.h>

char *my_strcpy(char *str1, const char *str2){

    while (*str1 &&(*str1 == *str2)){
        *str1++;
        *str2++;
    }

    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int main(){
 
 char str1 = "Hello";
 char str2 = "Hello";

 int result = my_strcpy(str1, str2);

if (result == 0) {
        printf("They are equal: difference = %d\n", result);
    } else if (result > 0) {
        printf("str1 > str2: difference = %d\n", result);
    } else {
        printf("str1 < str2: difference = %d\n", result);
    }

 return 0;
}