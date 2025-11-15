//  Print Hello World
//   Addtwonumbers/binary numbers/characters
//   Calculate compound interest
//   Calculate power of a number
//   Swaptwonumbers
//   Calculate area of rectangle

#include<iostream>
using namespace std;
void power()
{
int exp; int a;
int pow;
cout<<"Enter exp value and Num value ";
cin>>exp>>a;
for(int i=0;i<exp;i++)
{
     pow = exp*a;
   
}
 cout<<"\nPower of "<<a<<"Exp."<<exp<<"Power is "<<pow;
}
void area()
{
    int length = 10; int breadth = 20;
    cout<<" area of rectangle   "<< length*breadth;
}
void compound(){
    int principla = 1000;
    int rate = 55;
    int time = 2;

    int ci = principla*rate*time/100;
    cout<<" compund interest is "<< ci;
   
}
void add()
{
int a = 10; int b = 20;
    cout<<"Addtion of two num"<< a + b<<"\n";
}
void swap()
{
int p = 10; int q = 20;
cout<<" before"<< "" << p <<  " " <<q<<"\n";
    int temp = p;
    p = q;
    q = temp;
    cout<<"After swapping"<< "" << p <<  " " <<q<<"\n";
}

int main(){
    // cout<<"Hello World";

    int choice;
    
    
    do
    {
        cout<<"\n1.Power, 2.Compound, 3.add, 4.swap, 5.area "<<"\n";

    cout<<"   Enter choice";
        cin>>choice;

        switch (choice)
        {
        case 1:
            power();
            break;
        case 2:
        compound();
           break;
        case 3:
            add();
            break;
        case 4:
        swap();
           break;
        case 5:
        area();
           break;
           
        default:
            break;
        }
    }while(choice!=0);
    
    

}

    

