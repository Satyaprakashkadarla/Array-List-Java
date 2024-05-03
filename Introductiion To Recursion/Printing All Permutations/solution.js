function permutations(string, current = '') {
    if (string.length === 0) {
        console.log(current);
    } else {
        for (let i = 0; i < string.length; i++) {
            const newString = string.slice(0, i) + string.slice(i + 1);
            permutations(newString, current + string[i]);
        }
    }
}

const inputString = 'abc';
console.log(`Permutations of '${inputString}' are:`);
permutations(inputString);
