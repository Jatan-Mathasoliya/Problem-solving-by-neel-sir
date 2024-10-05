// 49. Given an array and two indices, swap the elements at those indices.
// Input: arr = [1, 2, 3, 4], i = 1, j = 3
// Output: [1, 4, 3, 2]

let arr = [1,2,3,4]
let temp = arr[1]
arr[1] = arr[3]

arr[3] = temp

console.log(arr)

