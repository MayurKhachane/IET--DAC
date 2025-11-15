#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    //sqrt()
    double ans;
    ans=sqrt(49);
    cout<<"Sq. root of  = "<<ans<<endl;
    cout<<endl;

    //abs()
    int a, b;
    a=abs(14.9);
    b=abs(-43.1);
    cout<<"Abs value "<<a<<" "<<b<<endl;
    cout<<endl;

    //pow()
    int base= 2,expo = 2;
    cout<<" power is = "<<pow(base,expo)<<endl;
    cout<<endl;
   
    //ceil()
    float x=8.4;
    float y = -8.8;
    cout<<"ceil value is = "<<ceil(x)<<endl;
     cout<<"ceil value is = "<<ceil(y)<<endl;
     cout<<endl;

    //floor()
    float g=8.4;
    float h = -10.0;
    cout<<" floor value is = "<<floor(g)<<endl;
    cout<<" floor value is = "<<floor(h)<<endl;
    cout<<endl;

    //round()
    float i=8.5;
    float o = -10.5;
    cout<<" round value is = "<<round(i)<<endl;
    cout<<" round value is = "<<round(o)<<endl;
    cout<<endl;


}