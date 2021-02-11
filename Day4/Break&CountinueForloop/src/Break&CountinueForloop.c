/*
 ============================================================================
 Name        : Break&CountinueForloop.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Continue in Forloop
int main(void) {
    int i;
    for(i=1;i<10;i++){
        printf("Athif ");
        if(i==5){
            continue;
        }
        printf("Saheer \n");
    }
    printf("Finished");
	return EXIT_SUCCESS;
}

// Break in Forloop
int main(void) {
    int i;
    for(i=1;i<10;i++){
        printf("Athif ");
        if(i==5){
            break;
        }
        printf("Saheer \n");
    }
    printf("Finished");
	return EXIT_SUCCESS;
}
