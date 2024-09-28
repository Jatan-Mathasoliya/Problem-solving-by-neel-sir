// 31. Write a program to repeat a string a specified number of
// times.Example: Input: ("hello", 3), Output:
// "hellohellohello".

let string = prompt("Enter a string :")
let target = prompt("Enter your target :")
let final = ""

for(i=0; i < target; i++) {
    final = final + string
}
console.log(final)