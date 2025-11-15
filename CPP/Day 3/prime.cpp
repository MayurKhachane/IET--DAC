#include<iostream>
using namespace std;
int prime(int);
int main(){

    int a;
    cout<<"Enter number";
    cin>>a;
    if(prime(a))
    {
    cout<<"Not Prime";
    }
    else
    {
    cout<<"This is prime";
    }

}
int prime(int a)
{
     for (int i = 2 ; i < a; i++)
    {
        if(a % i == 0){
            return 1;
            
        }
        else
        {
            return 0;
        }
        
    }
}