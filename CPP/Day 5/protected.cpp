#include<iostream>
using namespace std;
class Parent
{
    protected:
     int prot_id;
};
class child: public Parent
{
    public:
    void setId(int a)
    {
        prot_id=a;
    }
    void Display()
    {
        cout<<"Protected id is :"<<prot_id;
    }
};
int main()
{
child obj;
obj.setId(25);
obj.Display();
   
}