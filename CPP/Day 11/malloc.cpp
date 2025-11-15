#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
 int * ptr;
 int n;
 cout<<"Enter size "<<endl;
 cin>>n;

 ptr=(int*) malloc(n*sizeof(int));

 cout<<"Enter Elements data"<<endl;
 for(int i=0;i<n;i++)
 {
    cin>>ptr[i];
 }

  cout<<"Disaplay data "<<endl;
 for(int i=0;i<n;i++)
 {
    cout<<ptr[i]<<"\t ";
 }

}