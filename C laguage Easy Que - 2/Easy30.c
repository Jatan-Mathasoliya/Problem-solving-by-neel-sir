#include <stdio.h>

//30. Write a program to input an integer 'n' and print the
//sum of all its even digits and the sum of all its odd digits
//separately. Example : Input: 'n' = 132456, Output: 12, 9

int main() {

int n = 123456;

char str[10];

sprintf(str, "%d", n);


int len = strlen(str);
int i;
int sum1 = 0;
int sum2 = 0;


for (i=0; i < len; i++) {
	
	int num = atoi(str[i]);
	
	if (num % 2 == 0) {
		sum1 = sum1 + num;
	}
	if (num % 2 != 0){
		sum2 = sum2 + num;
	}
}
printf("Even : %d Odd : %d", sum1,sum2);
}
