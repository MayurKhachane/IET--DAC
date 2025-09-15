let a=[5,4,1,12,9];
a.sort();

let num = a[0];
for(let i=1;i<a.length; i++){
    if(a[i] > num)
        {
        num = a[i]; 
    }

}
console.log("Array is ");
console.log(a);
console.log("Largest Num is  ");
console.log(num);