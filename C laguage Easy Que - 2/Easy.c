#include <stdio.h>




// 1.Write a function to check the grade of a student based
// on the score:
// ● 90-100: A
// ● 80-89: B
// ● 70-79: C
// ● 60-69: D
// ● Below 60: F

// int main(){
//     int num1;

//     printf("Enter your marks :");
//     scanf("%d",&num1);

//     if ((90 <= num1) &&(num1 < 100)) {
//         printf("A - Grade");
//     }
//     else if ((80 <= num1) &&(num1 <= 89)) {
//         printf("B");
//     }
//     else if ((70 <= num1) &&(num1 <= 79)) {
//         printf("C");
//     }
//     else if ((60 <= num1) &&(num1 <= 69)) {
//         printf("D");
//     }
//     else if ((1 > num1) &&(num1 > 100)){
//         printf("Error");
//     }
//     else {
//         printf("F");
//     }
//     return 0;
// }





// 2. Write a function to determine whether a given number is
// positive, negative, or zero.

// int main() {
//     int num;

//     printf("ENter a number :");
//     scanf("%d", &num); 
//     if (num > 0) {
//         printf("The number is positive");
//     }
//     else if (num < 0) {
//         printf("The number is negative");
//     }
//     else {
//         printf("The number is zero");
//     }

// }












//4. Write a function to check whether a given character is a
//vowel or consonant.

//int main() {
//	char input ;
//	printf("Enter a char : ");
//	scanf("%c", &input);
//	
//	char vowel[] = "aeiou";
//	int value;
//	int i;
//	int len = sizeof(vowel) / sizeof(vowel[0]);
//	
//	
//	for(i=0; i < len; i++) {
//		if (strcmp(input, vowel) == 0) {
//			printf("Vowel");
//		}
//		else {
//			printf("consonant");
//		}
//	}
//		return 0;
//	}







//5. Write a function that checks if a person is eligible to
//vote. The person is eligible if they are 18 years old or
//older.

//int main() {
//	
//	int age;
//	printf("Enter your age");
//	scanf("%d", &age);
//	
//	if (age > 18) {
//		printf("You are eligible");
//	}
//	else {
//		printf("You are not eligible");
//	}
//	return 0;
//}





//6. Write a function that checks if a username and
//password match predefined values. If the username is
//"admin" and the password is "1234", print "Login
//successful"; otherwise, print "Login failed."

//int main() {
//
//	char user[]= "";
//	
//	int pass;
//	
//	printf("Enter your username");
//	scanf("%s", &user);
//	
//	
//	printf("Enter your password");
//	scanf("%d", &pass);
//	
//	
//	if(strcmp(user,"admin") == 0 && (pass == 1234)) {
//		printf("sucessful");
//	}
//	else {
//		printf("Login failed");
//	}
//	 
//	 return 0;
//	
//}






//7. Write a function that simulates a traffic light system. The
//function should take the current light color (red, yellow,
//green) as input and print the corresponding action:
//? "red" ? "Stop"
//? "yellow" ? "Slow down"
//? "green" ? "Go"

//int main () {
//	char light[]="";
//	printf("Enter light colour");
//	scanf("%s", light);
//	
//	if(strcmp(light, "red") == 0) {
//		printf("Stop");
//	} 
//	else if(strcmp(light, "yellow") == 0) {
//		printf("Slow down");
//	}
//	else if(strcmp(light, "green") == 0) {
//		printf("Go");
//	}
//	else {
//		printf("Enter a valid colour");
//	}
//}






//8. Find the Average of an Array.

//int main() {
//	int arr[] = {1,2,3,4,5};
//	
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	int sum = 0;
//	int final;
//	
//	for (i=0; i < len; i++) {
//		sum = sum + arr[i];
//		
//		final = sum / len;
//	}
//	printf("%d", final);
//	 
//}






//9. Sort an Array in Ascending Order Example: Input:
//nums = [4,2,8,5,1]; Output: nums =
//[1,2,4,5,8].

//int main() {
//	int arr[] = {4,2,8,5,1};
//		
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	int j;
//	int temp;
//	
//	for(i=0; i < len; i++) {
//		for(j=i+1; j < len; j++) {
//			if (arr[i] > arr[j]) {
//			temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//			}
//		}
//	}
//	int k;
//	for (k=0; k < len; k++) {
//		printf("%d\n", arr[k]);
//	}
//		
//}






//10. Given an array of integers, count how
//many numbers are even and how many are odd.
//Example
//? Input: [1, 2, 3, 4, 5]
//? Output: Even: 2, Odd: 3

//int main() {
//    int arr[] = {1,2,3,4,5};
//
//    int len = sizeof(arr) / sizeof(arr[0]);
//
//    int odd = 0;
//    int even = 0;
//    int i;
//
//
//    for(i=0; i < len; i++) {
//        if(arr[i] % 2 == 0) {
//            even = even + 1;
//        }
//        else {
//            odd = odd + 1;
//        }
//    }
//
//    printf("Even %d", even);
//    printf("Odd %d", odd);	
//}





//12. Add the number 6 to the end of the array arr = [1,
//2, 3, 4, 5] and print the updated array.

//int main() {
//	int arr[] = {1,2,3,4,5};
//	int i;
//	
//	int len = sizeof(arr) / sizeof(arr[0]);
//	
//	for(i=0; i < len; i++) {
//	}
//	
//	arr[len] = 6;
//	
//	int k;
//	for(k=0; k < len; k++) {
//		printf("%d", arr[k]);
//	}
//	
//}





//13. Check if the array arr = [1, 2, 3, 4, 5]
//contains the number 3 and print true or false.

//int main() {
//	
//	int arr[] = {1,2,4,3,5};
//	
//	int len = sizeof(arr) / sizeof(arr[0]);
//	
//	int i;
//	int sum = 0;
//	
//	for(i=0; i < len; i++) {
//		if(arr[i] == 3) {
//			sum = sum + 1;
//		}
//	}
//	if (sum == 1) {
//		printf("true");
//	}
//	else {
//		printf("False");
//	}
//}





//14. Add Element to the Beginning of an Array Example:
//Input: nums = [1, 2, 3, 4]; Output: nums =
//[0,1,2,3,4].

//int main() {
//	int arr[] = {1,2,3,4};
//	
//	int len = sizeof(arr) / sizeof(arr[0]);
//	
//	int i;
//	
//	for(i=len; i > 0; i--) {
//		arr[i] = arr[i-1];
//	}
//	arr[0] = 0;
//	len++;
//	
//	int j;
//	for(j=0; j < len; j++) {
//		printf("%d", arr[j]);
//	}
//	
//}





//15. Remove the Last element Input: nums = [1, 2,
//3, 4,5]; Output: nums = [1,2,3,4].

//int main() {
//	int arr[] = {1,2,3,4,5};
//	
//	int len = sizeof(arr) / sizeof(arr[0]);
//	
//	int i;
//	
//	for(i=0; i < len -1; i++) {
//	printf("%d", arr[i]);
//	}
//}















 
