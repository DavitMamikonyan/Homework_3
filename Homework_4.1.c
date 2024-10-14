#include <stdio.h>

int main(){

printf("Enter the amount of the values \n");
int n, k = 0, j = 0;
scanf("%d", &n);


int nums[n], even[n], odd[n];

printf("Enter the values \n");
for (int i = 0; i<n; i++){
    scanf("%d", &nums[i]);
}


for (int i=0; i<n; i++){
    if (nums[i]%2 == 0){
        even[k++] = i;
    }
    else{
        odd[j++] = i;
    }
}

      //Printing all even nummbers
for (int i = 0; i < k; i++){
   printf("%d", even[i]);
}

      //Printing all odd nummbers
for (int i = 0; i < j; i++){
   printf("%d", odd[i]);
}


return 0;
}