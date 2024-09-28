#include <stdio.h>

//28. Write a function that takes two numbers
//and prints the largest one.


int main() {
	int a;
	printf("Enter first number :");
	scanf("%d", &a);
	
	int b;
	printf("Enter second number :");
	scanf("%d", &b);
	
	if (a > b) {
		printf("%d is greater then %d", a,b);
	}
	else {
		printf("%d is greater then %d", b,a);
	}
}



