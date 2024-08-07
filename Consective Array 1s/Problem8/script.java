JavaScript (script.js):

function findMaxConsecutiveOnes() {
    const inputArray = document.getElementById("inputArray").value;
    const nums = inputArray.split(",").map(Number);
    
    let maxCount = 0;
    let currentCount = 0;
    
    for (let num of nums) {
        if (num === 1) {
            currentCount++;
        } else {
            maxCount = Math.max(maxCount, currentCount);
            currentCount = 0;
        }
    }
    
    const resultElement = document.getElementById("result");
    resultElement.textContent = `Maximum consecutive 1s: ${Math.max(maxCount, currentCount)}`;
}