#include<iostream>
using namespace std;
template< class T>
T add(T &a,T &b)
{
   T result = a+b;
   return result;
}
int main()
{
    int i=2,j=5;
    float a=2.6,b=2.5;
    cout<<"Adition of int "<<add(i,j)<<endl;
    cout<<"Adition of float "<<add(a,b)<<endl;
}