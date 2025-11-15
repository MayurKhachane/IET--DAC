#include<iostream>
using namespace std;
#include<string.h>
class string1
{
  int len;
  char* ptr;
  public:
   string1();
   string1(const char*);
   string1(int);
   string1(char,int);
   void dsip();
   ~string1(){
       cout<<"Distructor"<<endl;
        if(ptr)
        {
            delete [] ptr;
            ptr=NULL;

        }

   }

};
void string1::dsip()
{
   if(len>1)
   {
    cout<<"lenth is "<<len<<endl;
    cout<<"String is "<<ptr<<endl;
   }
   else{
    cout<<"Len is "<<len<<endl;
    cout<<"String is "<<*ptr<<endl;
   }
   cout<<endl;

}
string1::string1()
{
   len=1;
   ptr=new char[len];
    *ptr='v';
}
 string1::string1(const char* s)
 {
    len=strlen(s);
    ptr=new char[len+1];
    strcpy(ptr,s);
 }
 string1::string1(int l)
 {
  
    len=l;
    ptr=new char[len+1];
    cout<<"enter String "<<endl;
    cin>>ptr;

 }
string1::string1(char a,int b)
{
    int i;
    len=b;
    ptr=new char[len+1];

    for(i=0;i<len;i++)
    {
        ptr[i]=a;
    }
    ptr[len]='\0';
}
int main()
{
    string1 s1;
    s1.dsip();
    string1 s2("rahul");
    s2.dsip();
    string1 s3('*',80);
    s3.dsip();
    string1 s4(4);
    s4.dsip();

}