function isPrime(num) {
  if (num <= 1) return false;
  for (let i = 2; i <= Math.sqrt(num); i++) {
    if (num % i === 0) return false;
  }
  return true;
}

let numbers = process.argv.slice(2).map(Number);

let evenSum = 0;
for (let num of numbers) if (num % 2 === 0) evenSum += num;

let evenIndexSum = 0;
for (let i = 0; i < numbers.length; i += 2) evenIndexSum += numbers[i];

let primeSum = 0;
for (let num of numbers) if (isPrime(num)) primeSum += num;

console.log("Even numbers sum:", evenSum);
console.log("Even index sum:", evenIndexSum);
console.log("Prime numbers sum:", primeSum);
