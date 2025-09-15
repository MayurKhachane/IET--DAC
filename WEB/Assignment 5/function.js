//ASSIAGMENT 1
function calcluate(...a)
{
    let num = 0;
    
    for(let i = 0; i < a.length; i++)
    {
        num = num + a[i];
    }
    console.log("Sum is ", num);
    
    for(let i = 0; i < a.length; i++)
        {
        if(a[i] % 2 != 0){
            console.log("Odds Numbers ", a[i]);
        }
    }
    
}
calcluate(1, 3);
calcluate(1, 10, 4);
calcluate(1, 3, 6, 7);
calcluate(1, 3, 4, 3, 1);






