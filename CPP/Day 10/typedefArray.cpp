#include <iostream> 
using namespace std; 
  
int main() 
{ 
  
    typedef int arr[3];   
    arr array1;
    cout<<"Enter values"<<endl;
    for (int i = 0; i < sizeof(array1)/sizeof(array1[0]); i++)
    {
        cin>>array1[i];
    }
     
      
  
    cout << "array output: "

         << "\n"; 
    for (int i = 0; i < 3; i++) { 
        cout << array1[i] << " "; 
    } 
    cout << "\n"; 
}    