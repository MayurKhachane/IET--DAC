#include<iostream>
using namespace std;

int  fact(int);
int fact(int num){
    if(num <= 1 ){
        return 1;
    }
    return num * fact(num - 1);
  
}
int main()
{
  cout<<fact(5);
  return 0;
}

// int main(){
//     int b;
//   int fact = 1;
//   cout<<"Enter value";
//   cin>>b;
//   for(int i = 1; i<=b; i++)
//   {

//     fact = fact * i;

//   }
//   cout<<fact;
  


// }