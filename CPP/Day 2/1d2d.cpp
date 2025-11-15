#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    cout<<"Enter array\0";

    // for(int i=0;i<5;i++)
    // {
    //     cin>>a[i];
    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<a[i]<<"\t";
    // }

// 2d array pointer
//     for(int i=0;i<3;i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin>>*(*(a+i)+j);
//         }
        
//     }
//     for(int i=0;i<3;i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout<<*(*(a+i)+j)<<"\t";
//         }
//         cout<<endl;
        
//     }
    


    //subscript array
    for(int i=0;i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for(int i=0;i<3;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
        
    }
}
