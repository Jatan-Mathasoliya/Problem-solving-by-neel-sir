#include <stdio.h>
#include <string.h>

//33. Write a program that takes a year as
//input and checks whether it is a century
//year (a year divisible by 100).

int main() {
	int year;
	printf("Enter a year :");
	scanf("%d", &year);
	
	if (year % 100 == 0) {
		printf("%d ia a century year", year);
	}
	else {
		printf("%d is not a century year", year);
	}
}
