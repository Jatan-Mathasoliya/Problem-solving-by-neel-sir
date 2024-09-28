#include <stdio.h>

//23. Write a program to concatenate two
//given strings. Example: Input: ("hello", "
//world"), Output: "hello world".

int main() {
	
	char str1[] = "Hello";
	char str2[] = "World";
	
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	
	char final[10];
		
	int i,j;
	
	for(i=0; i < len1; i++) {
		final[i] = str1[i];
	}
	for (j=0; j < len2; j++) {
		final[i+j] = str2[j];
	}
	
	printf("%s", final);
	

}

