#include <iostream>
using namespace std;
#include<stdlib.h>
class demo {
    int a;
    public:

    demo()
    {
    cout <<"Constructor  Called"<<endl;
    }
};
 

int main()
{
 
    demo* a = new demo();
    cout << "Object of class A was "
    << "created using new operator!" << endl;
 
    demo* b = (demo*)malloc(sizeof(demo));
    cout << "Object of class A was"
         << "created using malloc()!"
         << endl;

}