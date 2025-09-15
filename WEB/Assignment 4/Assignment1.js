console.log("Hello world");


// 1) Write a function getFactorialImpl ( choice="FORLOOP" ) ----it could be FORLOOP or RECUR
// 	Function Fact2(n1)
// 	Use recursion and print the factorial
// 	If the choice is FORLOOP return Fact1
// 	If the choice is RECUR then return Fact2
// 	Outside --- call let rv = getFactorialImpl("RECUR")
// 	rv(3)
// 	Rv = getFactorialImpl()
// 	rv(5)

console.log();
console.log("===============================")
function fact(n){
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
        {
        return n*fact(n-1);
    }
}
rv = fact(3);
console.log("Factorial is-",rv);



//2)Write a Program to use Different Array Library Functions using switch case
console.log();
let a=[10,20,50];
console.log("Array - ",a);
a.pop();
console.log("After pop Array - ",a);
a.push(60,20);
console.log("After push Array - ",a);
a.shift();
console.log("After shift index 1 is remove  - ",a);
a.unshift(80);
console.log("After Unshift  Value Added in index 1  - ",a);



// 3) Declare Array with String Data display every element in uppercase format(use prdefined methods of String)
console.log();
let s = ["Mayur", "Nayan", "AmaN", "kedar", "mayuresh"];

let lowercase = s.map(name => name.toLowerCase());
console.log("Lowercase array-",lowercase);
let uppercase = s.map(name => name.substring(0,3).toUpperCase());

console.log("Uppercase array upto 0-3 substring",uppercase);

// 4) write a function to add 3 numbers and print the values
console.log();
function addition(a,b,c)
{
    return a+b+c;
}
console.log("Adiition Is",addition(10,4,7));


// 5) write a function that multiplies two numbers and returns the value
console.log();
function multiply(a, b)
{
    return a * b;
}
let mul = multiply(2, 10);
console.log("Multiplication is-",mul);

// 6) Write a function to divide two numbers and assign function to a variable
console.log();
function divide(a, b)
{
    if (b === 0) 
    {
    return "Error: division by zero";
    }
    return a / b;
}
let d = divide(10, 5);
console.log("Division - ",d);

// 7)To Find max number from array write code in 3 ways as shown in lecture
console.log();
let b=[5,4,9,7];


let num = b[0];
for(let i=1;i<b.length; i++)
{
    if(b[i] > num)
    {
        num = b[i]; 
    }
        
}

console.log("Array is ", b);
b.sort();
console.log("Array Sorted:", b);
console.log("Largest Element is  ",num);
