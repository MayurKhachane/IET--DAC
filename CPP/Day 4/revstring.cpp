#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string name = "HelloWorld";

    for (int i = name.size() - 1; i > 0; i--)
    {
        cout<<name[i];
    }
}