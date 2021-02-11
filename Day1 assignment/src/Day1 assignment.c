/*
 ============================================================================
 Name        : Day1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// 1st Assignment
//int main(void) {
//	char a;
//	printf("Enter your name here");
//	scanf("%c", &a);
//	printf("Welcome %c", a);
//	return EXIT_SUCCESS;
//}

// 2nd Assignment
//int main(void) {
//	int num1;
//	float num2, sum;
//	printf("Enter 2 numbers");
//	scanf("%d", &num1);
//	scanf("%f", &num2);
//	sum = num1 + num2;
//	printf("Entered 2 numbers result is: %f", sum);
//	return EXIT_SUCCESS;
//}

// 3rd Assignment
int main(void) {
	int p;
	float r, n, si;
	printf("Enter 3 numbers");
	scanf("%d", &p);
	scanf("%f%f", &r, &n);
	si = (p*r*n)/100;
	printf("Result is: %f", si);
	return EXIT_SUCCESS;
}
