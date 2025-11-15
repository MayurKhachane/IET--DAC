#include<iostream>
using namespace std;

class Complex{
    int real, img;
    public:

    void disp(); 
    void setReal(int);
    int getReal();
    Complex(){
        real = 1;
        img = 2;
    }
  
};



void Complex::disp() 
{
    cout<<"\nreal value="<<real<<"\nimg value is "<< img;

}

void Complex::setReal(int r)  
{
    real=r;

}

int Complex::getReal()
{
    return real;
}

int main()
{
    Complex c1;
 
    c1.disp();
    // c1.setReal(50);
    cout<<"\ngetreal value is = "<<c1.getReal();
}


