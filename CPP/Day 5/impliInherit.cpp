#include<iostream>
using namespace std;
class Parent 
{
  public:
   int a;

};
  class child: public Parent
  {
    public:
     int b;

  };
   int main ()
   {
    child obj;
    Parent obj1;
    obj1.a=99999;
    // obj1.b=12;
    obj.a=25;
    obj.b=10;
    cout<<"parent clas a is"<<obj.a<<endl;
    cout<<"child class b is "<< obj.b<<endl;
    cout<<sizeof(obj)<<endl;

    cout<<"parent clas a is"<<obj1.a<<endl;
    // cout<<"child class b is "<< obj1.b<<endl;
    cout<<sizeof(obj1);
   } 
