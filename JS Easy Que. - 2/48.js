let str = "jatan"
let final = ""

for(i=0; i<str.length; i++) {
        if((str[i] != "a")&&(str[i] != "e") && (str[i] != "i") && (str[i] != "o") && (str[i] != "u")){
                final = final + str[i]
        }
    }

console.log(final)