#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char str1[10]= "hello";
    char str2[10];
    strcpy(str2,str1);
    cout<<"Copied string is "<<str2<<endl;
    cout<<"Concat String is = "<<strcat(str1,str2)<<endl;
    
}