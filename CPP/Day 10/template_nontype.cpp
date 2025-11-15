#include<iostream>
using namespace std;
template< class M, int S>
class A
{
    public:
    M arr[S];
    void insert()
    {
        cout<<"Enter number "<<S<<" numbers"<<endl;
        for(int i=0;i<S;i++)
        {
            cin>>arr[i];
            
        }
    }
    void display(){
        for(int i=0;i<S;i++){
            cout<<arr[i]<<" ";

        }
    }
};

int main(){
    A<int,10>t1;
    t1.insert();
    t1.display();
}