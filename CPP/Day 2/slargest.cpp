#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,5,7,2};
    int max=a[0];
    int slarg=-1;
    for(int i=0;i<5;i++)
    {
        if(max<a[i]){
        slarg=max;
        max=a[i];
    }
        
    }
   
    for(int i=0;i<5;i++)
    {
        if(max>a[i] && a[i]>slarg )
        {
            slarg=a[i];
        }
    }
    cout<<"Second largest is "<<slarg;
    
}