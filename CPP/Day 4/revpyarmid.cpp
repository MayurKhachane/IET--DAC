#include <iostream>
using namespace std;

int main() {
    int rows = 5; 

    for (int i=rows; i >= 1;i--) 
    {
       
        for (int k =0;k<(rows-i)*2;k++)
         {
            cout <<" ";
        }
        
        for (int j = 1; j <= (2*i-1); j++)
         {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
