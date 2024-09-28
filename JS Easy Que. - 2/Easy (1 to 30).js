// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.

// const side1 = prompt("Enter side1 value :");

// const side2 = prompt("Enter side2 value :");

// const side3 = prompt("Enter side3 value : ");

// if (side1 == side2 == side3) {
//     console.log("Triangle is equilaterral.")
// }
//  else if ((side1 == side2) && ((side1 != side3) && (side2 != side3))){
//     console.log("Triangle is isosceles.")
// }
// else{
//     console.log("Triangle is scalene.")
// }





// 4. Write a function to check whether a given character is a vowel or consonant.

// let char = "a"

// let vowels = "aeiouAEIOU"

// let sum = 0;

// for (i=0; i < vowels.length; i++) {
//     if (vowels[i] != char ) {
//         sum = sum + 1;
//         break
//     }
// }
// console.log(sum)
// if (sum > 1) {
//     console.log(char + " is a consonant");
// }
// else {
//     console.log(char + " is a vowel");
// }




// 6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; otherwise, print "Login failed."

// +

// let password = "123456"

// let user1 = prompt("Enter username :")

// let pass = prompt("Enter your password :")

// if (username == user1 && password == pass) {
//     console.log("Login Successful")
// }
// else {
//     console.log("Login Failed")
// }




// 8. Find the Average of an Array.

// let array = [1,2,3] 

// let sum = 0;

// for (i=0; i < array.length; i++) {
//     sum = sum + array[i]

//     final = sum / array.length
// }
// console.log(final)




// 9. Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].

// let arr = [4,2,8,5,1]

// let array = arr.sort((a,b) => a-b)

// console.log(array)

// let arr = [4,2,8,5,1]

// let temp = []

// for (i=0; i < arr.length; i++) {
//     for (j=i+1; j < arr.length; j++) {
//         if (arr[i] > arr[j]) {
//             temp = arr[i]
//             arr[i] = arr[j]
//             arr[j] = temp
//         }
//     }
// }
// console.log(arr[i])




// 10. Given an array of integers, count how
// many numbers are even and how many are odd.
// Example
// ● Input: [1, 2, 3, 4, 5]
// ● Output: Even: 2, Odd: 3

// let arr = [1,2,3,4,5,6] 

// let sum1 = 0

// let sum2 = 0

// for (i=0; i < arr.length; i++) {
//     if (arr[i] % 2 == 0) {
//         sum1 = sum1 + 1
//     }
//     else if (arr[i] % 2 != 0) {
//         sum2 = sum2 + 1
//     }
// }
// console.log("Even :" + sum1 + " Odd :" + sum2) 




// 11. Remove duplicate elements from the array arr =
// [1, 2, 2, 3, 4, 4, 5] and print the updated array.

// let arr = [1,2,3,2,4,4,5] {


// let temp = []

// for(i=0; i < arr.length; i++) {
//     temp.push(arr[i])
//     for (j=0; j < temp.length; j++) {
//         if(arr[j] != arr[i]) {
//             temp.push(arr[i])
//         }
//     }

// }
// console.log(temp)





// 12. Add the number 6 to the end of the array arr = [1,
//     2, 3, 4, 5] and print the updated array.

// let arr = [1,2,3,4,5]

// arr.push(6)

// console.log(arr)





// 16. Check if all the elements in arr = [3, 5, 9, 1,
//     7] are positive numbers, and print true or false.
    
// let arr = [3,5,-9,1,7]

// sum = 0

// for(i=0; i < arr.length; i++) {
//     if (arr[i] < 0) {
//         sum = sum + 1
//     }
// }
// if (sum > 0) {
//     console.log(false)
// }
// else {
//     console.log(true)
// }




// 17. Count how many positive and negative numbers are in
// arr = [1, -2, 3, -4, 5, -6] and print the result.

// let arr = [1,-2,3,-4,5,-6]

// let count1 = 0

// let count2 = 0

// for(i=0; i < arr.length; i++) {
//     if (arr[i] > 0) {
//         count1 = count1 + 1
//     }
//     else if (arr[i] < 0) {
//         count2 = count2 + 1
//     }
// }
// console.log("Positive " + count1, "Negative " + count2)




// 18. Print all elements that are at even indexes in the array
// arr = [10, 20, 30, 40, 50]

// let arr = [10,20,30,40,50]

// for (i=1; i < arr.length; i++) {
//     if (arr.indexOf(arr[i]) % 2 == 0) {
//         console.log(arr[i])
//     }
// }




// 19. Check if the array arr = [1, 2, 3, 4, 5] is
// sorted in ascending order, and print true or false.

// let arr = [2,5,4,1,3]

// let array = arr.sort((a,b) => a-b)

// for(i=0; i < arr.length; i++) {
    
// }
// for(j=0; i < array.length; j++) {
    
// }

// console.log(array)
// if (arr[i] == array[j]) {
//     console.log(true)
// }
// else {
//     console.log(false)
// }




// 20. Find and print the difference between the maximum
// and minimum elements in arr = [80, 30, 70, 50,
// 20].

// let arr = [80,30,70,50,20]

// let max = arr[0]

// let min = arr[0]

// for(i=0; i < arr.length; i++) {
//     if (arr[i] > max) {
//         max = arr[i]
//     }
//     if (arr[i] < min) {
//         min = arr[i]
//     }
// }
// console.log(max - min)





// 23. Write a program to concatenate two
// given strings. Example: Input: ("hello", "
// world"), Output: "hello world".

// let str1 = "hello"
// let str2 = "world"

// let str = str1.concat(str2)

// console.log(str)





// 24. Write a program to remove whitespace
// from both ends of a string.Example: Input:
// " hello ", Output: "hello".

// let str = " hello  World" 
// let temp = ''

// for(i=0; i < str.length; i++) {
//     if(str[i] == ' ') {
//         temp = temp 
//     }
//     else {
//         temp = temp + str[i]
//     }
// }
// console.log(temp)





// 25. Write a program to split a string into
// an array of words.

// let str = "Hello"

// let final = str.split('')

// console.log(final)

// let arr = []

// for(i=0; i < str.length; i++) {
//     arr.push(str[i])
// }
// console.log(arr)






// 26. Write a program to check if a string
// ends with a specific character.Example:
// Input: ("codinggita", "a"), Output: true.

// function specificchar (str, target) {
//     let len = str.length
//     let sum = 0

//     for(i=0; i < len; i++) {
//         if(str[len-1] == target) {
//             sum = sum + 1
//         }
//     }
//     if(sum > 0) {
//         console.log(true)
//     }
//     else {
//         console.log(false)
//     }
// }
// specificchar("codinggita", "a")





// 27. Write a program to extract the file
// extension from a given filename.Example:
// Input: "document.pdf", Output: "pdf".

// let str = "document.txt"

// let index = str.indexOf(".")
// let final = ""

// for(i = index +1; i<str.length; i++) {
//     final = final + str[i]
// }
// console.log(final)





// 28. Write a function that takes two numbers
// and prints the largest one.

// let num1 = prompt("Enter your num1 : ")
// let num2 = prompt("Enter your num2 :")





// 29.Write a program to find all pairs in an
// array whose sum is equal to a given number.
// Example 1: Input: nums = [2,7,11,15], target = 9 , Output:
// [0,1].

// let nums = [11,2,15,7]

// for(i=0; i < nums.length; i++) {
//     for(j=i+1; j < nums.length; j++) {
//         if(nums[i] + nums[j] == 9) {
//             console.log([i,j])
//         }
//     }
// }





// 30. Write a program to input an integer 'n' and print the
// sum of all its even digits and the sum of all its odd digits
// separately. Example : Input: 'n' = 132456, Output: 12, 9
// Explanation:
// The sum of even digits = 2 + 4 + 6 = 12
// The sum of odd digits = 1 + 3 + 5 = 9

// let n = 132456

// let string = n.toString()

// let sum1 = 0

// let sum2 = 0

// for (i=0; i < string.length; i++) {
//     if ( Number(string[i]) % 2 != 0) {
//         sum1 = sum1 + Number(string[i])
//     }
//     if ( Number(string[i]) % 2 == 0) {
//         sum2 = sum2 + Number(string[i])
//     }
// }
// console.log("Odd " + sum1, "Even " + sum2)















