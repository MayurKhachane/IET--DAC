#include <iostream>
using namespace std;

namespace ONE
{
  void func()
  {
     cout << "Inside space ONE" << endl;
  }
  
  namespace TWO
  {
     void func()
     {
        cout << "Inside space TWO" << endl;
     }
  }
}


//using namespace ONE::second_space;
using namespace ONE;
int main ()
{
   ONE::TWO::func();
      func();

}