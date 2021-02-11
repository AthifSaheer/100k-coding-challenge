/*
 ============================================================================
 Name        : MathematicChoise.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, choice, result;
	printf("Enter 2 numbers");
	scanf("%d%d",&num1, &num2);
	printf("1 for addition \n2 for Subtraction \n3 for multiplication \n4 for division \nEnter what u want !");
	scanf("%d",&choice);
	if(choice==1) {
	    result = num1+num2;
	}else if(choice==2){
	    result = num1 - num2;
	}else if(choice==3){
	    result = num1 * num2;
	}else if(choice==4){
	    result = num1 / num2;
	}else {
	    printf("u r a fool ! !");
	}
	printf("result is: %d",result);
	return EXIT_SUCCESS;
}
