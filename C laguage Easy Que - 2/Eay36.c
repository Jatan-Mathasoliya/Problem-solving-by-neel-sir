#include <stdio.h>
#include <string.h>

//36. Print a pyramid pattern with n rows.

int main() {
	int n =5;
	int i,j,k;
	
	for(i=n;  i >=1; i--) {
		for(j=n-1; j > n-i; j--){
			printf(" ");
		}
		for(k=2*i-1; k <=2*n-1; k++) {
			printf("*");
		}
		printf("\n");
	}
}
