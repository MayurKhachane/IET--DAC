const num = parseInt(process.argv[2]);

if (isNaN(num)||num<0) 
{
  console.log("Please provide a valid non-negative integer.");
}
else 
{
 
  console.log(`Factorial of ${num} is: ${factorial(num)}`);
}

function factorial(n) 
{
  if (n===0) return 1; 
  return n * factorial(n - 1);

}

