#include<iostream>
#include<string.h>
using namespace std;
 class A
 {
    public:
    int a = 10;
    // string name = "hiii";
    disp(){
        cout<<"This is parent class"<< a << endl;
    }
    
    

 };
 class B
 {
     public:
     int b = 20;
    show(){
        cout<<"This is second parent class"<< b << endl;

    }
    

 };
 
class C : public A, public B{
    public:
    int c= 30;
    C(){
        cout<<"This is child class"<< c << endl;
        disp();
        show();
    }

};

int main(){
    C obj;
}