// Question link: https://docs.google.com/document/d/1QAUw74oBduUwMs2omqCm5x7Hwq_JzXEAtJR5HoPdEPE/edit
#include <stdio.h>
#include <stdlib.h>

// First Assignment (it's not finished).

// Second Assignment
int main(void){
    int array[10][10], array2[10][10], i, j, ai, aj;
    printf("Enter array1: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d ", &array[i][j]);
        }
    }
    printf("Array 1:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    // Array 2 -------------------------------------------
    printf("Enter array 2: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &array2[i][j]);
        }
    }
    printf("Array 2:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",array2[i][j]);
        }
        printf("\n");
    }

    // Array Sum -------------------------------------------
    printf("Sum of 2 arrays is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            ai = array[i][j] + array2[i][j];
            printf("%d ",ai);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}


// Third Assignment
void getArray();
void displayArray(int);

int main(void){
    int array[10], i;
    getArray();
    for(i=0;i<3;i++){
        scanf("%d",&array[i]);
        displayArray(array[i]);
    }
    return EXIT_SUCCESS;
}

void getArray(){
    printf("Enter a number");
}

void displayArray(int a){
    printf("Value: %d \n",a);
}
