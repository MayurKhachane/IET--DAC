#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    cout<<"\nEnter the No. of the Element: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    int large = arr[0];
    int sec = -1;
    for(int i = 0;i<n
        ;i++){
        if(arr[i] > large ){
            large = arr[i];
        }
       
        }
    for(int i = 0;i<n;i++){
        if(arr[i] < large && sec < arr[i] ){
            sec = arr[i];
        }

}
cout<<"\nLarge : "<<large;
    cout<<"\nSecond Large : "<<sec;
}