#include<iostream>
using namespace std;
int main()
{
    typedef  int mayur;
    mayur a=10;
    cout<<" "<<a<<endl;


    typedef int* intptr;
     intptr p1=&a;
     
    cout<<" value of p1 : "<<*p1<<endl;
}