#include<iostream>
using namespace std;

class Temp{

    int size;
    int* ptr;

    public:
    Temp();
    void get();
    void show();
    int max();
    int min();
};

Temp :: Temp(){
    cout<<"Enter value"<<endl;
    cin>>size;
    ptr = new int[size];
}

void Temp :: get(){

    cout<<"Enter Arrays values"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>ptr[i];
    }
}

void Temp :: show(){
    cout<<"Arrays are :"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<ptr[i]<<"\t";
    }
    cout<<endl;
    
}

int Temp :: max(){
    int m = ptr[0];
    for (int i = 1; i < size; i++)
    {
        if(ptr[i]>m){
            m = ptr[i];
        }
    }
    return m;
    
}

int Temp :: min(){
    int n = ptr[0];
    for (int i = 1; i < size; i++)
    {
if (ptr[i]<n)
{
    n = ptr[i];
}
}
return n;
    

}

int main(){
    Temp t1;
    t1.get();
    t1.show();
    cout<<"maxi is "<<t1.max()<<endl;
        cout<<"mini is "<<t1.min()<<endl;

}