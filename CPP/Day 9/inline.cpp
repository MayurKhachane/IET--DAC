#include<iostream>
using namespace std;
inline int add(int a,int b)
{
    return a+b;
}
inline int cube(int s)
{
    return s*s*s;
}
int main()
{
    cout<<"Adition is :"<<add(10,5)<<endl;
    cout<<"Cube is :"<<cube(5)<<endl;

}