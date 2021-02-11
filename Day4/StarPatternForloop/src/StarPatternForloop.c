/*
 ============================================================================
 Name        : PrimeNumberChecking.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, i, j, h;
	printf("Enter a number");
	scanf("%d", &num);
	for(i=1;i<=num;i++){
	    for(j=0;j<i;j++){
	        printf("$ ");
	    }
	    printf("\n");
	}
	return EXIT_SUCCESS;
}

// Reverse printing star


int main(void) {
    int num=10, i, j;
    for(i=1;i<=num;i++){
        for(j=num;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    printf("Finished");
	return EXIT_SUCCESS;
}
