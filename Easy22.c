#include <stdio.h>

//22. Write a program to find the length of a
//given string.


int main() {
	char str[] = "hello";
	int count = 0;
	int i;
	int len = strlen(str);
	
	for(i=0; i < len; i++) {
		if (str[i] == '/0') {
			break;
		}
		else {
			count++;
		}
	}
	
	printf("%d", count);
}
