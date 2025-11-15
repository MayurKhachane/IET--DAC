#include <iostream>  
using namespace std;  
int main()  
{ 
    int ptr1[3];  
    int *ptr2[3]; 
    cout << "Enter 3 numbers " <<endl;  
    for(int i=0;i<3;i++)  
    {  
        cin >> ptr1[i];  
    }  

    for(int i=0;i<3;i++)  
    {  
        ptr2[i]=&ptr1[i];   
    }  

  cout << "The values are" << endl; 
    for(int i=0;i<3;i++)  
    {  
        cout << *ptr2[i] << endl;  
    }
		cout<<sizeof(ptr2);
}  