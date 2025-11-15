#include <iostream>
using namespace std;

int main() {
    int r; 
    cout<<"Enter row"<<endl;
    cin>>r;
    int s = r;

    for (int i = 1; i<=r; i++) 
    {
        
        for (int j = 1;j<= s;j++)
         {
            cout << "  ";
        }

        
        char ch = 'A';
        for (int k =1;k<= 2*i-1; k++) 
        {
            cout<<ch<< " ";
            ch++;
        }

        cout<<endl;
        s--;
    }

   
}
