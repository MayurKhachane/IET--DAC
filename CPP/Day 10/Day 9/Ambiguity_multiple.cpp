#include <iostream>   
using namespace std;  
  
class A  
{  
    public:   
    void show()  
    {  
        cout << " It is function of class A " << endl;  
    }  
 };   
   
 class B  
{  
    public:   
    void show()  
    {  
        cout << " It is function of class B " << endl;  
    }  
 };  
   
   
 class child: public A, public B  
 {  
    public: 
    void show()
	{
		A::show();
		B::show();
		cout<<"in child class show()";
	 } 
        void disp()  
        {  
            cout <<"It is the member function of the child class"<< endl;  
         }  
 };  
   
 int main ()  
 {  
     
    child ch;  
    ch.disp();  
	ch.show(); 
  
 } 