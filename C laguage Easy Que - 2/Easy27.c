#include <stdio.h>
#include <string.h>
//27. Write a program to extract the file
//extension from a given filename.Example:
//Input: "document.pdf", Output: "pdf".

int main() {
	char str[] = "document.pdf";
	int len = strlen(str);
	int i,j;
	char target = '.';
	int index = 0;
	char final[10];
	int len2 = strlen(final);

	for (i=0; i < len; i++) {
		if(str[i] == target) {
			index = i;
			break;
		}	
	}
	for (j=index; j < len; j++) {
		final[j] =str[j+1];
	}
	printf("%s", final);
	
}






