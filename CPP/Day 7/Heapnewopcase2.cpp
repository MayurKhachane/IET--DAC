//case 2: object creation on heap with new operator
// without virtual keyword
#include<iostream>
using namespace std;
class Employee
{
    int id;
    public:
    Employee(); 
    Employee(int);
    void Display();
    int find_sal()
    {
        return 0;
    }

};
class Wegemployee : public Employee
{
    int hrs , rate;
    public:
    Wegemployee();
    Wegemployee(int,int,int);
    void Display();
    int find_sal();

};

Wegemployee::Wegemployee()
{
    cout<<"You are in defult wegeployee"<<endl;
    hrs=0;
    rate=0;
}

Wegemployee::Wegemployee(int i, int h, int r):Employee(i)
{
    hrs=h;
    rate = r;
}
void Wegemployee:: Display()
{
    Employee::Display();
    cout<<"Hrs and rate is "<<hrs<<" "<<rate<<endl;
}
int Wegemployee:: find_sal()
{
    return hrs*rate;
}

Employee::Employee()
{
    cout<<"Default constructor of Employee"<<endl;
    id=0;
};
Employee::Employee(int i)
{
    cout<<"Your in Para. constructor of employee"<<endl;
    id=i;
}
void Employee::Display()
{
    cout<<"ID is "<<id<<endl;
}
int main()
{

    Employee * ptr=new Wegemployee(101,5,500);
    
	cout<<"salary is "<<ptr->find_sal()<<endl;
	ptr->Display();
    

}





