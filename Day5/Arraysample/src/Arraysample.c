#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[5], i, limit;
    printf("Enter array Size");
    scanf("%d", &limit);
	printf("Enter %d values", limit);
	for(i=0;i<limit;i++){
	    scanf("%d", &a[i]);
	}
	printf("Entered values: ");
	for(i=0;i<limit;i++){
	    printf("%d\t",a[i]);
	}
	return EXIT_SUCCESS;
}
