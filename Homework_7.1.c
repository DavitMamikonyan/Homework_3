#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // Memory alocation
    char *str = (char*)malloc(10*sizeof(char));
    if (str == NULL){
        printf("Malloc faild\n");
        return 1;
    }

    // String's char = "tutorial"
    strcpy(str, "tutorial");
    printf("String = %s, Adress = %p \n", str, (void*)str);


    //Resizing dor addition(.com) 
    str = (char*)realloc(str, 20*sizeof(char));
    if (str == NULL) {
        printf("Realloc faild");
        return 1;
    }
    
    //Add .com
    strcpy(str, ".com");
    printf("String = %s, Adress = %p \n", str, (void*)str);


    //Clearing the "Ghap"
    free(str);


    return 0;
}