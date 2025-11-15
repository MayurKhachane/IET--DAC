#include<iostream>
using namespace std;

class Demo{

    int* ptr;
    public:
    Demo(){
        ptr = new int;
        *ptr = 10;

    }

    void dips(){
        cout<<"Ptr value is "<< *ptr<<endl;
      
    }
};

int main(){
    Demo* obj = new Demo();
    obj->dips();
}