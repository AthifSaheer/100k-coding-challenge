/*
 ============================================================================
 Name        : Function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum();
int main(void) {
	sum();
	sum();
	int a=10;
	printf("!!!Hello World!!! %d",a);
	return EXIT_SUCCESS;
}

void sum(){
	int n1, n2, sum;
	printf("Enter 2 numbers");
	scanf("%d%d", &n1, &n2);
	sum = n1 + n2;
	printf("Result: %d",sum);
}
