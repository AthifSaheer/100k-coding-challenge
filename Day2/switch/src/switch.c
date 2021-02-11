/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	printf("1 for grapes \n2 for apple \n3 for orange \n4 for banana");
	scanf("%d", &choice);
	switch(choice) {
	case 1:
		printf("U hv selected grapes");
		break;
	case 2:
		printf("U hv selected apple");
		break;
	case 3:
		printf("U hv selected orange");
		break;
	case 4:
		printf("U hv selected banana");
		break;
	default:
		printf("U r foooooool ! ! !");
	}
	return EXIT_SUCCESS;
}
