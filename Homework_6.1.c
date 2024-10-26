#include <stdio.h>

char *my_strcpy(char *dest, const char *src){

    char *dest_ptr = dest;

    while (*src != '/n'){
        *dest_ptr = *src;
        *dest_ptr++;
        *src++;
    }
    *dest_ptr = '/n';

    return dest;
}

int main(){
 
 char src = "Hello";
 char dest[50];

 my_strcpy(dest, src);
 printf("Copied string is %s \n", dest);

 return 0;
}
