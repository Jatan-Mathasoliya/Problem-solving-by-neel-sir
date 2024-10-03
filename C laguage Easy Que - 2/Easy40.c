#include <stdio.h>
#include <string.h>

//40. Given two numbers, generate an array
//containing all numbers between them
//(inclusive). Example: Input: 1,5 Output: [1,
//2, 3, 4, 5]

int main() {
	int start;
	printf("Enter start num :");
	scanf("%d", &start);
	
	int end;
	printf("Enter end num :");
	scanf("%d", &end);
	
	int i;
	for(i=start; i <= end; i++) {
		printf("%d", i);
	}
}
