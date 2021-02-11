/*
 ============================================================================
 Name        : if.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter a number");
	scanf("%d", &num);
	if(num<0) {
		printf("Entered number is negative");
	}else {
		printf("Entered number is Positive");
	}
	return EXIT_SUCCESS;
}
//
//int main(void) {
//	int num1, num2;
//	printf("Enter 2 number");
//	scanf("%d%d", &num1, &num2);
//	if(num1>num2) {
//	    printf("Greates number is %d",num1);
//	}else {
//	    printf("Greates number is %d",num2);
//	}
//	return EXIT_SUCCESS;
//}
