#include<iostream>
using namespace std;

class A{
    int i;
    public:
    A(){
        cout<<"A is Default Construtor "<<endl;
    }
    A(int p){
        cout<<"A is paremetrized "<<endl;
    }
};

class B{
    int j;
    public:
    B(){
        cout<<"B is default construtor "<<endl;
    }
    B(int q){
        cout<<"B is paremtrized "<<endl;
    }
};
class C : public B, public A{
    public:
    C(int p, int q):A(p), B()
    {
        cout<<"C para constructor called" <<endl;
    }
};

int main(){
    C obj(10, 20);
}