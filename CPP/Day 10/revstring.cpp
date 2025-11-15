#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string name;
    string revname;
    cout<<"Enter String "<<endl;
    cin>>name;
    int n= name.size();
    //   cout<<"::"<<name <<endl;
    for(int i=n-1;i>=0;i--)
    {
        revname=revname+name[i];
    }
    // revname[n]='\0';
    cout<<revname;
    
}



  