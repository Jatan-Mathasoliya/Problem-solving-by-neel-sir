// 50. Given a string and a character, count how many times the character appears in the string.
// Input: str = "hello world", char = "o"
// Output: 2

let str = prompt("Enter a string :")
let count = 0
let target = prompt("Enter your target :")

for(i=0; i<str.length; i++){
    if(str[i] == target){
        count++;
    }
}
console.log(count);
