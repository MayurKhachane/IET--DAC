#include <iostream>
using namespace std;

namespace ONE
{
	int a=10;
  void func()
  {
     cout << "Inside space ONE" << endl;
  }
}
 

namespace TWO
{
int a=100;
  void func()
  {
     cout << "Inside space TWO" << endl;
  }
}
using namespace ONE;
int main ()
{
  TWO::func();
  func();
cout<<a;

}