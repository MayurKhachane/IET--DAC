#include<iostream>
using namespace std;

int main(){

    int a[3][3];
    int b[3][3];
    int c[3][3];

    cout<<"Enter a matrix"<<endl;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   cin>>a[i][j];

        }
    }
    cout<<"Enter b matrix"<<endl;
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   cin>>b[i][j];
            
        }
        
    }
    cout<<"addtion of matrix is"<<endl;
    
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   

            c[i][j] = a[i][j] + b[i][j];
        }
        
    }

           for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   cout<<c[i][j]<<"\t";
            
        }
        cout<<endl;
    }
    
    
}