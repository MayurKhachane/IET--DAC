
#include<iostream>
using namespace std;
class base
{
    int a=1;
    protected :
    int b =2;
     public:
     int c=3;
    int getId()
    {
        return a;
    }
};
class Derived : public base
{
public:
  int getprot()
  {
    return b;
  }

};
int main()
{
    Derived obj;
      
    cout << "Private = " << obj.getId() << endl; 
    cout << "Protected = " << obj.getprot() << endl; 
    cout << "Public = " << obj.c << endl; 
//cout << "Public = " << obj.b<< endl; //error
}
