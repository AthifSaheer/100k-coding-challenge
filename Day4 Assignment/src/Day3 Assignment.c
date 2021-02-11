#include <stdio.h>
#include <stdlib.h>

// Assignment one (Multiplication)
int main(void) {
    int num, i,a, t;
    printf("This is Multiplication Project, So Enter number\n");
    scanf("%d", &num);
    printf("You Entered %d\n", num);
    for(i=1;i<=1;i++){
        for(a=1;a<=10;a++){
            t = num*a;
            printf("%d*%d=%d\n",a,num, t);
        }
    }
    printf("\nMultiplication is Finished");
	return EXIT_SUCCESS;
}

// Assignment Two
int main(void) {
    int num, i,t;
    printf("Enter a number ");
    scanf("%d", &num);
    for(i=2;i<=num;i++){
        if(i%2==1){
            t = t+i;
            printf("%d\n",t);
        }
    }
    printf("Finished");
	return EXIT_SUCCESS;
}

// Assignment Three
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num=10, a, b;
    for(a=1;a<=num;a++){
        for(b=1;b<=a;b++){
            printf("%d",b);
        }
        printf("\n");
    }
    printf("Finished");
	return EXIT_SUCCESS;
}
