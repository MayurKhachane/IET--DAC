//creation of Dynamic Array of object on heap section
#include<iostream>
using namespace std;

class Student{

    int roll_no;
    char name[20];
    public:
    void accepts(){
        cout<<"Enter Roll"<<endl;
        cin>>roll_no;
        cout<<"Enter Name ";
        cin>>name;
    }

    void disp(){
        cout<<"Details are " << roll_no << " " << name<<endl;
    }

    ~Student(){
        cout<<"Distructor called"<<endl;
    }
};

int main(){
    int c;
    cout<<"Enter Array value"<<endl;
    cin>>c;
    Student* ptr = new Student[c];
    for (int i = 0; i < c; i++)
    {
        ptr[i].accepts();
    }

    for (int i = 0; i < c; i++)
    {
        (ptr + i)->disp();
    }
    delete [] ptr;
    
    

}

