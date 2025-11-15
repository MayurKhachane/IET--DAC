#include<iostream>
using namespace std;

// Base class
class A
{
    public:
    A(){
    cout<<"In A class"<<endl;}
};

// Parent class 1
class B : virtual public A
{
    public:
    B(){
    cout<<"In B class"<<endl;}
};

// Parent class 2
class C : virtual public A
{
    public:
    C(){
    cout<<"In C class"<<endl;}
};


// Child class inheriting from both Parent1 and Parent2
class D : public B,public C
{
    public:
    D()
    {
       cout<<"In D class"<<endl; 
    }
};

int main()
{
    D* obj=new D();
    

}