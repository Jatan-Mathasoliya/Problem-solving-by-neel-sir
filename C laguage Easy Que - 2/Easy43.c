#include <stdio.h>
#include <string.h>

//43. The "Max Consecutive Ones" problem is a common
//algorithmic challenge that involves finding the maximum
//number of consecutive 1s in a binary array.
//Problem Statement
//50. Given a binary array, find the maximum number of
//consecutive 1s in the array.
//Example
//? Input: [1, 1, 0, 1, 1, 1]
//? Output: 3 (the longest sequence of 1s is 111)


int main() {
	int arr[] = {1,1,0,1,1,1};
	int len = sizeof(arr) / sizeof(arr[0]);
	int i,j;
	int temp = 0;
	
	for(i=0; i < len; i++) {
		for(j=i+1; j < len; j++) {
			if(arr[i] == arr[j]) {
				temp++;
			}
		}
	}
	printf("%d", temp);
}
