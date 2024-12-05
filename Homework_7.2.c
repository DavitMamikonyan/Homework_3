#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, add, i;
    float *arr, sum1 = 0, sum2 = 0;

    printf("Enter amount of elements: ");
    scanf("%d", &n);

// Alocation
    arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL){
        printf("Alocation faild! \n");
        return 1;
    }
 
// Sum 1
    for (i=0; i<n; i++){
        printf("Enter the number %d: ", i + 1 );
        scanf("%f", &arr[i]);
        sum1 += arr[i];
    }

    printf(" \n Sum1 = %.2f \n", sum1);

// Request for adding
    printf(" \n Amount of new elements: ");
    scanf("%d", &add);
    
// Realocc
   arr = (float *)realloc(arr, (n + add)*sizeof(float));
   if (arr == NULL){
        printf("Alocation faild! \n");
        return 1;
    }

// Sum 2
   for (i=0; i<add; i++){
        printf("Enter the number %d: ", n + i + 1 );
        scanf("%f", &arr[n + i]);
        sum2 += arr[n + i ];
    }

    sum2 += sum1;
    printf(" \n Sum2 = %.2f", sum2);

//Free
    free(arr);

    return 0;
   
}