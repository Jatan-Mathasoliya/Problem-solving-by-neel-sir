#include <stdio.h>
#include <string.h>

//32.Write a program that categorizes a
//person’s age group based on the given age:
//? Less than 13: "Child"
//? Between 13 and 19: "Teenager"
//? Between 20 and 59: "Adult"
//? 60 and above: "Senior"

int main() {
	int age;
	printf("Enter your age :");
	scanf("%d", &age);
	
	if ((0 < age) && (age <= 13))  {
		printf("You are child");
	}
    else if ((age >=13) && (age <= 19)) {
		printf("You are Teenager");
	}
	else if((age >= 20) && (age <= 59)) {
		printf("You are Adult");
	}
	else if (age >= 60) {
		printf("You are Senior");
	}
	else {
		printf("Please enter a valid number");
	}
}
