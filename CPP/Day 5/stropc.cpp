#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string s1 ="Mayurpowar";
    string s2 ="Mayurpowar";
    string s4;
    char a[40]="Hellooo";
    char b[40];
    cout<<"Length of s2 "<< s2.length()<<endl; 
    string sub =s2.substr(0,7); 
    bool equal=(s1==s2); 
    s4=s1;
    cout<<"String copied is"<<s4<<endl;

    cout<<"String concat is"<<s1+s2<<endl;
    cout<<"string copy function using "<<strcpy(b,a)<<endl;
      cout<<"string Concat function using "<<strcat(b,a)<<endl;
    cout << "Substring is " << sub << endl;
    cout << "Comparison is  " << equal << endl;


}
