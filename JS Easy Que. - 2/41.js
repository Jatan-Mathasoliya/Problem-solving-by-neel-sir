// 41. Given a valid IP address, you are asked to return a defanged version of that IP address. A defanged IP address replaces every period "." with "[.]".
// Example1:Input: address = "1.1.1.1" Output: "1[.]1[.]1[.]1"
// Example2:Input: address = "255.100.50.0" output: "255[.]100[.]50[.]0"

let str = "255.100.50.0"
let temp = ""
for(i=0; i<str.length; i++){
    if(str[i]!="."){
        temp = temp + str[i]
    }
    else{
        temp = temp + "[.]"
    }
}
console.log(temp)