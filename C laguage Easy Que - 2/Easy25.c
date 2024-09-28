#include <stdio.h>

//25. Write a program to split a string into
//an array of words.

int main() {
	char str[] = "hello";
	char  arr[] = {};
	
	int len = strlen(str);
	int i,j;
	
	for(i=0; i < len; i++) {
		arr[i] = str[i];
	}
		
	for(i=0; i < len; i++) {
		printf("%c\n", arr[i]);
	}
}
