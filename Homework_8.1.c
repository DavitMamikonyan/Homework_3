#include <stdio.h>
#include <string.h>


struct student {
    int GPA;
    char name[130];
} st[10];

struct beststudent {
    struct student first;
    struct student second;
    struct student third;
} bs;


// swaping 
void swap(struct student *a, struct student *b) {
    struct student temp = *a;
    *a = *b;
    *b = temp;
}

// sorting
void sort_student(struct student arr[], int n) {
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j].GPA < arr[j+1].GPA){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}


int main() {
    //inputing 10 students

    for (int i=0; i<10; i++){
        printf("Enter the name %d", i+1);
        scanf(" %[^\n]", st[i].name);
        printf("Enter the GPA %d", i+1);
        scanf(" %d", &st[i].GPA);
    }

sort_student(st, 10);

bs.first = st[0];
bs.second = st[1];
bs.third = st[2];

printf("\nTop 3 Students:\n");
    printf("1st: %s with GPA %d\n", bs.first.name, bs.first.GPA);
    printf("2nd: %s with GPA %d\n", bs.second.name, bs.second.GPA);
    printf("3rd: %s with GPA %d\n", bs.third.name, bs.third.GPA);



return 0;
}


