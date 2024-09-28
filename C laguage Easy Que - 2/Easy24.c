#include <stdio.h>

//24. Write a program to remove whitespace
//from both ends of a string.Example: Input:
//" hello ", Output: "hello".

int main() {
	
	char str[] = " hel lo ";
	char ans[7] = "";
	int len = strlen(str);
	int i;
	
	for(i=0; i < len; i++) {
		if (str[i] == ' ') {
			ans[7] = ans[7]; 
		}
		else {
			ans[7] = ans[7] + str[i];
		}
		
	}
	printf("%s", ans);
}
