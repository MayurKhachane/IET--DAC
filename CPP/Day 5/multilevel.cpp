//    Private visiblity mode

// #include<iostream>
// using namespace std;
// class A
// {
// 	int c;
// public:
// 	int a=45;
// protected:
// 	int b=67;
// public:
// 	void display()
// 	{
// 		cout<<"in display of A\n";
    
// 	}
// };
// class B:private A
// {
// public:
// 	int c=99;
// public:
// 	void show()
// 	{
// 	    display();//allowed
// 		cout<<a<<"  "<<b<<endl;
//         cout<<"ENd class B"<<endl;
// 	}
// };
// class C:private B
// {
// 	public:
// 	void show()
// 	{
// 	  // display(); //not allowed
// 		//cout<< a<<b; //not allowed
// 		cout<<c<<endl;
//         cout<<" end class c";
// 	}
// };
// int main()
// {
// 	B bobj;
//     C cobj;
// 	bobj.show();
//     cobj.show();
//    // cobj.display();
//     //bobj.display(); //not allowed
// }

//    public visiblity mode
// #include<iostream>
// using namespace std;
// class A
// {
// 	int c=12;
// public:
// 	int a=44;
// protected:
// 	int b=55;
// public:
// 	void display()
// 	{
// 		cout<<"in display of A\n";
// 	}

// };
// class B:public A
// {
// public:
// 		public:
// 	void show()
// 	{
// 	    display();
// 		cout<<a<<" & "<<b<<endl;
// 	}
// };
// class C:public B
// {
// 	public:
// 	void show()
// 	{
// 		cout<< a<<" in class c"<<b<<endl;
// 			}
// };
// int main()
// {
// 	B bobj;
//     C cobj;
//     cobj.show();
// 	bobj.show();
// 	bobj.display();
// }

// protected visibilty mode

// #include<iostream>
// using namespace std;
// class A
// {
// int c;
// public:
// 	int a=33;
// protected:
// 	int b=66;
// protected:
// 	void display()
// 	{
// 		cout<<"in display of A\n";
// 	}

// };
// class B:protected A
// {
// public:
// 	int d;
// 	public:
// 	void show()
// 	{
// 	    	B bobj;
// 	bobj.display();
// 		cout<<a<<" & "<<b<<endl;
	
// 	}
// };
// class C: protected B
// {
//     public:
//     void show()
//     {
//         display();
//         cout<<a<< " in c & "<<b;
//     }
// };
// int main()
// {
//     B bobj;
//     bobj.show();
//     C cobj;
//     cobj.show();
// }

// constructor call para
// #include<iostream>
// using namespace std;
// class A
// {
// 	int a;
// public:
// 	A();
//     void display();
//  };
// A::A()
// {
// 	cout<<"in default of A\n";
// 	a=10;
// }
// void A::display()
// {
// 	cout<<a<<endl;
// }
// class B:public A
// {
// 	int b;
// public:
// 	B();
//     B(int );
// 	void display();
// };

// B::B()
// {
// 	cout<<"in default of B\n";
// 	b=20;
// }
// B::B(int a)
// {
//     cout<<" "<<a<<endl;
// }
// void B::display()
// {
// 	A::display();
// 	cout<<b<<endl;
// }
// int main()
// {
// 	B bobj(1000);

// 	bobj.display();
// }

// constructor calls 
#include<iostream>
using namespace std;
class A
{
	int a;
public:
	A(int);
    void display();
 };
A::A(int p)
{
	cout<<"in para of A\n";
	a=p;
}
void A::display()
{
	cout<<a<<endl;
}
class B:public A
{
	int b;
public:
	B(int,int);
	void display();
};
B::B(int p,int q):A(p)//base class initilization list
{
	cout<<"in para of B\n";
	b=q;
}
void B::display()
{
	A::display();
	cout<<b<<endl;
}
int main()
{
	B bobj(10,20);
	bobj.display();
}