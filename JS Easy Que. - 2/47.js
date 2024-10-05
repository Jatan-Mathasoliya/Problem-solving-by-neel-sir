// 47. Given an array of integers, find the first element that repeats. If no element repeats, return -1.
// Input: [10, 5, 3, 4, 3, 5, 6]
// Output: 5

let arr = [10,5,3,5,3,5,6]
let temp = 0

for(i=0; i<arr.length; i++) {
    for(j=i+1; j<arr.length; j++) {
        if(arr[i] === arr[j]) {
            console.log(arr[i])
            temp = 1
            break
        }
    }
    if (temp == 1) {
        break
    }
}