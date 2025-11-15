#include<iostream>
using namespace std;

class Animal{
    public:
   virtual void  move(){
        cout<<"This is Animal class"<<endl;
    }
};
// class Dog : public Animal{
//     public:
//     void move(){
//         cout<<"Dog can run"<<endl;
//     }
// };

class Bird : public Animal{
    public:
    // void move(){
    //     cout<<"Birds can fly"<<endl;

    // }

};

int main(){
    Bird b1;
    b1.move();
    // Dog d1;
    // d1.move();
    // Animal a1;
    // a1.move();

}