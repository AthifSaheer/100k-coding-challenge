#include <stdio.h>
#include <stdlib.h>

// First Assignment
int main(void) {
    int limit=5, array1[100], array2[100], i, j, sum=0, temp;
    printf("Enter 5 digit of array1 ");
    for(i=0;i<limit;i++){
        scanf("%d",&array1[i]);
    }
    printf("Enter 5 digit of array2 ");
    for(i=0;i<limit;i++){
        scanf("%d",&array2[i]);
    }
    printf("After Array Swapping: \n");
    printf("Array1: ");
    for(i=0;i<limit;i++){
        printf("%d ",array1[i]);
    }
    printf("Array2: ");
    for(i=0;i<limit;i++){
        printf("%d ",array2[i]);
    }
    return EXIT_SUCCESS;
}

// Second Assignment
