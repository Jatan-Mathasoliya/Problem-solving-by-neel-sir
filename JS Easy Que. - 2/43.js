// 43. The "Max Consecutive Ones" problem is a common algorithmic challenge that involves finding the maximum number of consecutive 1s in a binary array.
// Problem Statement Given a binary array, find the maximum number of consecutive 1s in the array.
// Example
// Input: [1, 1, 0, 1, 1, 1]
// Output: 3 (the longest sequence of 1s is 111)

let arr = [1,1,0,1,1,1,0,1,1,1,1,1,1,1]
let sum = 0

for(i=0; i<arr.length; i++) {
    if(arr[i] === 1) {
        sum += 1
    }
    else{
        sum = 0
    }
}
console.log(sum)