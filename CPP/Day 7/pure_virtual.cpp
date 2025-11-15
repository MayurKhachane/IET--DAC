#include<iostream>
using namespace std;

class Car{
    public:
    virtual void run() = 0;
   
};

class Tata : public Car{
    public:
    void run(){
        cout<<"Thi is Tata car"<<endl;
    }
};

class Maruti : public Car{
    public:
    void run(){
        cout<<"This is Maruti Car"<<endl;
    }
};

int main(){
    Car* c = new Maruti();
    c->run();
}