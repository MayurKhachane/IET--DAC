#include<iostream>
using namespace std;
static int a=10;//global
void show();
int main()
{
  cout<<""<<a<<endl;
  a++;
  show();
  cout<<"after show  "<<a<<endl;
}
void show()
{
 
    cout<<" "<<a<<endl;
      a=0;//local
      cout<<"in show"<<a<<endl;
      a++;
      cout<<""<<a<<endl;

}