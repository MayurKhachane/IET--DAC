#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, sum=0;
    int cmt=0;
    cout<<"Enter Value";
    cin>>num;
    int act=num;
    int a=num;
    while(a != 0){
        
        a = a / 10;
        cmt++;
    } 
    cout<<"Count of entered num"<<cmt<<endl;
    while(num != 0){
        int rem = num % 10;
        // cout<<rem<<endl;
        // int cub=;
        cout<<pow(rem,cmt);

        sum = sum + pow(rem,cmt);
        num = num / 10;
        // cout<<num<<endl;
    }
    if(sum==act)
    {
    cout <<"the no is Amstrong "<<sum;}
    else
    {
     cout <<"the no is NOT Amstrong "<<sum;
    }
}