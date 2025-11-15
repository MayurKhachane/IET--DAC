#include <iostream>
using namespace std;

namespace op1 {
    int calculate(int a, int b)
     {
        return a*b;
     } 
}

namespace op2 {
    int calculate(int a, int b)
     {
        return a+b; 
    }
}

int main()
{

    cout<<"Multiplication: "<<op1::calculate(5,6)<<endl; 
    cout<<"Addition: " <<op2::calculate(5,6)<<endl;       

    
}
