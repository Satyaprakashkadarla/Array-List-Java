const names = ["John", "Alice", "Bob"];

// Sort in ascending order
const sortedNamesAsc = [...names].sort();
console.log("Ascending order:");
console.log(sortedNamesAsc.join(" "));

// Sort in descending order
const sortedNamesDesc = [...names].sort((a, b) => b.localeCompare(a));
console.log("Descending order:");
console.log(sortedNamesDesc.join(" "));
