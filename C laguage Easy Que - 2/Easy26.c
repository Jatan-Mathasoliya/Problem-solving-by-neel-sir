#include <stdio.h>

//26. Write a program to check if a string
//ends with a specific character.Example:
//Input: ("codinggita", "a"), Output: true.

int main() {
	char str[] = "jatan";
	char check[] = "c";
	int len = strlen(str);
	int i;
	int sum = 0;
	
	for(i=0; i < len; i++) {
		if(str[len-1] == check[0]) {
			sum = sum + 1;
		}
	}
	if (sum > 0) {
		printf("true");
	}
	else {
		printf("false");
	}
	
}









