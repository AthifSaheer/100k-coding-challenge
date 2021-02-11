#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j, array[3][3];
	printf("Enter values");
	for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
	        scanf("%d",&array[i][j]);
	    }
	}
	printf("Entered values are: \n");
	for(i=0;i<3;i++){
	    for(j=0;j<3;j++){
	        printf("%d ",array[i][j]);
	    }
	    printf("\n");
	}
	return EXIT_SUCCESS;
}
