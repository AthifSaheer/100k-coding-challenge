/*
 ============================================================================
 Name        : StringSample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char name[5];
    printf("Enter ur name: ");
    scanf("%s", name);

    printf("Ur name is: %s", name);
	return EXIT_SUCCESS;
}
