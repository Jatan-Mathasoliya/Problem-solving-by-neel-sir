#include <stdio.h>
#include <string.h>

//39. Given a string, check if all brackets
//are closed properly. Example:Input: "{[()]}"
//Output: true

int main() {
	char str[] = "{[()]}";
	int i,j;
	int temp = 0;
	int len = strlen(str);
	
	for(i=0; i < len; i++) {
		for(j=i+1; j < len; j++) {
			if(str[i] == str[j]) {
				temp = temp + 1;	
			}
		}
	}
	printf("%d", temp);

	if(temp == len-1){
		printf("true");
	}
	else {
		printf("false");
	}
	
}



