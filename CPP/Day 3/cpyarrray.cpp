#include<iostream>

using namespace std;
int main()
{
    char a[3];
    char b[3];

    cout<<"Enter value";
    for(int i = 0; i < sizeof(a); i++){
        cin>>a[i];
        b[i] = a[i];
    }
    cout<<"Array B is";
    for (int i = 0; i < sizeof(a); i++)
    {
        cout<<b[i];
    }
    

}