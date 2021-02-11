/*
 ============================================================================
 Name        : SumOfArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int value[10], i, sum=0;
	for(i=0;i<3;i++){
	scanf("%d", &value[i]);
	sum = sum + value[i];
	}
	printf("Result: %d", sum);
	return EXIT_SUCCESS;
}
