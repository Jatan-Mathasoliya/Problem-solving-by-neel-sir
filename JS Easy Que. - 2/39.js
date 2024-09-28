// 39. Given a string, check if all brackets
// are closed properly. Example:Input: "{[()]}"
// Output: true

let str = "{[()]}"

let len = str.length
let sum =0;

for(i=0; i < len; i++) {
    if((str[i] == "{") || (str[i] == "[") || (str[i] == "(") || (str[i] == ")") || (str[i] == "]") || (str[i] == "}")) {
        sum = sum + 1
    }
}
if (sum <= 0) {
    console.log(false)
}
else{
    console.log(true)
}

