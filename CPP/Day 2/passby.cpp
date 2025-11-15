#include<iostream>
using namespace std;
void swap(int p, int q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
    cout<<"Pass by value a="<<p<<"b="<<q<<"\n";
}
void swap1(int* p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    cout<<"Pass by adress a="<<*p<<"b="<<*q<<"\n";

}
void swap2(int& p,int& q)
{
    int temp;
    temp=p;
    p=q;
    q=temp;
    cout<<"Pass by Refreance a="<<p<<"b="<<q<<"\n";
}
int main()
{
    int a,b;
    cout<<"enter value of a and b";
    cin>>a>>b;
    swap(a,b);
   
    swap2(a,b);
     swap1(&a,&b);

}