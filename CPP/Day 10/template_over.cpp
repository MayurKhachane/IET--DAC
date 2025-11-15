#include<iostream>
using namespace std;
template<class X>
void fun(X a )
{
    cout<<"1st Template "<<a<<endl;
}

template<class T, class Y>
void fun(T x, Y y){
    cout<<"Second template is "<<x <<"  " <<y<<endl;
}

template<class T, class Y, class Q>
T fun(T p, Y q, Q r){
    return p + q + r;
}
int main(){
    fun(10);
    fun(12, 20);
    cout<<fun(10, 'A', 'B')<<endl;
    return 0;
}
