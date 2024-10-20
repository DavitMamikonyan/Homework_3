#include <stdio.h>

                                         // I have no clue how use pointers here

int main(){
 
 // Definitions
 int a_matrix[3][2] = {{1,4}, {2,5}, {3,6}};
 int b_matrix[2][3] = {{7,8,9}, {10,11,12}};
 int i, j, k;
 int prod_result[i][j] = {0};

 // Production of a and b
 for (i=0; i<3; i++){
   for (j=0; j<3; j++){
     for (k=0; k<2; k++){
       prod_result[i][j] += a_matrix[i][k] * b_matrix[k][j];
     }
   }
 }
 
 // Result printing
 for (i=0; i<3; i++){
    for (j=0; j<3; j++){
        printf("%d", prod_result[i][j]);
    }
    printf("\n");
 }


 return 0;
}