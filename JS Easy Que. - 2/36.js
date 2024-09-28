// 36. Print a pyramid pattern with n rows.

let str = "*"
let n = 5

for (let i = 1; i <= n; i++) {
    let count = "";
    for(j=n-1; j>=i; j--) {
        count = count + ' '
    }
        for(k=0; k < i*2-1; k++) {
            count = count + str
        }
    console.log(count)
}

