#include <stdio.h>
#include <stdlib.h>


// Function without Argument Without Return value -------------------------------
void sum();
int main(void) {
	sum();
	return EXIT_SUCCESS;
}

void sum(){
	int n1, n2, sum;
	printf("Enter 2 numbers");
	scanf("%d%d", &n1, &n2);
	sum = n1 + n2;
	printf("Result: %d",sum);
}


// Function with Argument Without Return value -------------------------------
void sum(int, int);
int main(void) {
	int a, b;
	printf("Enter 2 number: ");
	scanf("%d%d",&a, &b);
	sum(a,b);
	return EXIT_SUCCESS;
}

sum(int n1, int n2){
	int result;
	result = n1 + n2;
	printf("Result is: %d",result);
}


// Function with Argument With Return value -------------------------------
int sum(int, int);
int main(void) {
    int a, b, c;
    printf("Enter 2 numbers");
    scanf("%d%d",&a,&b);
    c = sum(a,b);
    printf("Result: %d",c);
	return EXIT_SUCCESS;
}

int sum(int n1, int n2){
    int result;
    result = n1 + n2;
    return result;
}


// Function without Argument With Return value -------------------------------
int sum();
int main(void){
    int k;
    k = sum();
    printf("Result: %d",k);
    return EXIT_SUCCESS;
}

int sum(){
    int a, b, c;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    c = a + b;
    return c;
}
