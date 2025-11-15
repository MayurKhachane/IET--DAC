#include<iostream>
using namespace std;

//....   Statcis Function.................

// class Demo{
//     public:

//     void non_statics(){
//         cout<<"This is non statcis"<<endl;
//     }

//     static void show(){
//         cout<<"This is statics fun";
//     }

// };
// int main(){
//     Demo d1;
//     d1.non_statics();
//     Demo::show();

// }

//...............Statcis keyword............
class Complex{
    
    public:
  
    void show(){
       static int num = 0;
    cout<<""<<num<<endl;
    num++;
    }
    
};

int main()
{
    Complex c1;
  for(int i=0;i<=5;i++)
  {
   c1.show();
  }   
} 