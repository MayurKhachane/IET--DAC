#include<iostream>
using namespace std;

int main(){
    int a = 0;int b = 1; int c;
    
    int count;
    
    cout<<"enter value for fob"<<endl;

    cin>>count;
    cout<<endl;
    cout<<a<<"\n"<<b<<endl;

    for (int i = 2; i < count; i++)
    {
        c = a + b;
        cout<<c<<endl;
        a = b;
        b = c;
    }

    
}