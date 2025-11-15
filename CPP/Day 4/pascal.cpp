#include <iostream>
using namespace std;

int main() {
int r;
      cout << "Enter the num of rows ";
    cin >> r;
    for (int i = 0;i< r;i++)
     {
        for (int j=1; j<=r-i;j++)
        {
            cout<<"  ";
        }

        int b = 1;
        for (int k=0;k<=i;k++) 
        {
            cout <<" "<<b<<"  ";
            b=b*(i-k)/(k + 1);
        }
        cout<<endl;
    }

  
   
}
