#include<iostream>
using namespace std;
class cdate
{
    int dd,mm,yy;
    public:
      cdate()
      {
        dd=0;
        mm=0;
        yy=0;
      }
      cdate(int d,int m,int y)
      {
        dd=d;
        mm=m;
        yy=y;
      }
      void show()
      {
        cout<<"Date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
      }
};
int main()
{
    cdate * ptr = new cdate(10,05,2003);
    ptr->show();
    delete ptr;
    

    
}
