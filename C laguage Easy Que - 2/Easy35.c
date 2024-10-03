#include <stdio.h>
#include <string.h>

//35. Print an inverted right-angled triangle
//pattern with n rows.

int main() {
    
int n = 5;
int i,j,k;

for(i=n; i >=1; i--) {
	for(j=n-1; j > n-i; j--){
		printf(" ");
	}
    for(k=i; k <= n; k++) {
        printf("*");
    }
    printf("\n");
}
}
