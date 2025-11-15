
#include<iostream>
using namespace std;
 namespace ONE
{
    class Demo
    {
    public:
        void display()
        {
            cout<<"you are in class Demo \n display()"<<endl;;
        }
    };
}
 
int main()
{
  
   ONE::Demo obj;
 
    obj.display();

}