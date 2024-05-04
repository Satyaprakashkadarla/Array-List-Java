function power(x, n) {
    if (n === 0)
        return 1;
    else if (n % 2 === 0) {
        let temp = power(x, n/2);
        return temp * temp;
    } else {
        let temp = power(x, (n-1)/2);
        return x * temp * temp;
    }
}

let x = 2;
let n = 5;
console.log(`${x}^${n} = ${power(x, n)}`);
