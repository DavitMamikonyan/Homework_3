#include <stdio.h>
#include <string.h>

void string_splitrer(char *str){

    char word = strtok(*str, " ");

    while (word != NULL){
        printf("%c \n", word);
        word = strtok(NULL, " ");
    }
    
}

int main(){

    char str[] = "This is test string";
    string_splitrer(str);
 
 return 0;
}