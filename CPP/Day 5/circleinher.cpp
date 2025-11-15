#include<iostream>
using namespace std;
class Circle{
    public:
    double r;
  double area()
  {
    return 3.14*r*r;
  }
};
int main()
{
    Circle obj;
    obj.r=5.5;
    cout<<"Radius is "<<obj.r<<endl;
    cout<<" area of cricle is "<<obj.area();
}