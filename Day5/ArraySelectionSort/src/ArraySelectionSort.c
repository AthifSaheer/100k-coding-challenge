#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit, i, j, value[100], temp;
	printf("Enter a limit of array");
	scanf("%d",&limit);
	printf("Enter %d numbers", limit);
	for(i=0;i<limit;i++){
	    scanf("%d",&value[i]);
	}

	for(i=0;i<limit-1;i++){
	    for(j=i+1;j<limit-1;j++){
	        if(value[i]>value[j]){
	            temp = value[i];
	            value[i] = value[j];
	            value[j] = temp;
	        }
	    }
	}
	printf("Sorted values ");
	for(i=0;i<limit;i++){
	    printf("%d\t",value[i]);
	}
	return EXIT_SUCCESS;
}
