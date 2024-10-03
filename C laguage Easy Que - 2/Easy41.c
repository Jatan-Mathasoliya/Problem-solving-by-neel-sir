#include <stdio.h>
#include <string.h>

//41. Given a valid IP address, you are asked to return a
//defanged version of that IP address. A defanged IP
//address replaces every period "." with "[.]".
//Example1:Input: address = "1.1.1.1" Output: "1[.]1[.]1[.]1"
//Example2:Input: address = "255.100.50.0" output: "255[.]100[.]50[.]0"


int main() {
	char address[] = "255.100.50.1";
	int len = strlen(address);
	int i,j;
	int sum = 0;
	char final[5];
	
	for(i=0; i < len; i++) {
		if(address[i] != '.') {
			final[j++] =address[i];
		}
		else {
			final[j++] = '[';
			final[j++] = '.';
			final[j++] = ']';
			
		}
		final[j] = '\0';
	}
	printf("%s", final);
	
}
