#include<iostream>
using namespace std;
template <class T>
void  swap1(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    
 
}
int main()
{
    int a=10,b=20;
    char x='A',z='B';
    cout<<"A = "<<a<<" B= "<<b<<endl;
    cout<<"A = "<<x<<" B= "<<z<<endl;
    cout<<"After swap "<<endl;
    swap1(a,b);
    cout<<"A = "<<a<<" B= "<<b<<endl;
    swap1(x,z);
    cout<<"X = "<<x<<" Z= "<<z<<endl;
}