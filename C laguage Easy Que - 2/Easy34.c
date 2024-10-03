#include <stdio.h>
#include <string.h>

int main() {
	int arr[] = {10,20,30,40,50};
	
	int len = sizeof(arr) / sizeof(arr[0]);
	int f1 = arr[0];
	int f2 = arr[len-1];
	
	printf("First element is %d\n", f1);
	printf("Last element is %d", f2);
}



