#include<iostream>
using namespace std;

template <class T, class Y>

T max(T a, Y b ){
return (a > b) ? a : b;
};

int main(){
    cout<<max(66, 'A')<<endl;
    cout<< max<double>(3, 4)<<endl;
    cout<<max('g', 'e')<<endl;
    
}

