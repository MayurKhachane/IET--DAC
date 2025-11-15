#include<iostream>
#include<string.h>
using namespace std;

class Parent{
    private:
    int pvt = 1;

    protected :
    int prot = 2;
    public:
    int pub = 3;

    int getPvt(){
        return pvt;
    }
};
class Child : protected Parent{
    public:
    int getProt(){
        return prot;
    }

    int getpub(){
        return pub;
    }
};
int main(){
    Child c1;
    // cout<<c1.getPvt()<<endl;
    cout<<c1.getProt()<<endl;
    cout<<c1.getpub();
}

