// function multiplyIfPositive(a, b) {
//   return new Promise((res, rej) => {
//     if (a > 0 && b > 0) res(a * b);
//     else rej("Numbers must be positive");
//   });
// }

// multiplyIfPositive(2, 3)
//   .then(result => console.log(result))
//   .catch(err => console.log(err));

const prompt = require('prompt-sync')();


function multiply(num1, num2) {
  return new Promise((resolve, reject) => {
    if (num1 > 0 && num2 > 0) {
      resolve(num1 * num2); 
    } else {
      reject('Both numbers must be positive!'); 
    }
  });
}

const num1 = parseFloat(prompt("Enter the first number: "));
const num2 = parseFloat(prompt("Enter the second number: "));

multiply(num1, num2)
  .then(result => {
    console.log(`Multiplication result: ${result}`);
  })
  .catch(error => {
    console.log(`Error: ${error}`);
  });
