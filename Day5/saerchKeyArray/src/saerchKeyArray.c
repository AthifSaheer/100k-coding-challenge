#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int value[10], i, limit, sum=0, SearchKey, flag;
	printf("Enter a limit of array");
	scanf("%d",&limit);
	printf("Enter %d numbers", limit);
	for(i=0;i<limit;i++){
	scanf("%d", &value[i]);
	sum = sum + value[i];
	}
	printf("Result: %d\n", sum);
	printf("Please Enter Search Key");
	scanf("%d", &SearchKey);

	for(i=0;i<limit;i++){
	    if(SearchKey==value[i]){
	        flag = 1;
	        break;
	    }
	}
	if(flag==1){
	    printf("value Found at %d Position", i+1);
	}else{
	    printf("Sry, value Not Found");
	}
	return EXIT_SUCCESS;
}
