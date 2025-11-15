
// #include <iostream>
// #include<algorithm>
// using namespace std;

// class student{
//     int roll_no;
//     string date_of_birth;
//     int total_marks;
//     public:
//     student();
//     student(int,string,int);
//     void accept();
//     void display(student);

// };

// student::student(){
//     roll_no=0;
//     date_of_birth='0';
//     total_marks=0;
// }

// student::student(int r, string dob, int m){
//     roll_no=r;
//     date_of_birth=dob;
//     total_marks=m;
// }

// void student::accept(){
//     cout<<"\nEnter the roll no : ";
//     cin>>roll_no;
//     cout<<"\nEnter the DOB : ";
//     cin>>date_of_birth;
//     cout<<"\nEnter Total Marks : ";
//     cin>>total_marks;
// }

// void student:: display(student s ){
//     cout<<"\n Roll No : "<<s.roll_no;
//     cout<<"\n Date of Birth : "<<s.date_of_birth;
//     cout<<"\n Total Marks : "<<s.total_marks;
//     cout<<endl;
// }

// int main(){
//     int n ;
//     cout<<"Enter No. of student "<<endl;
//     cin>>n;
//     student s1[n];
//     for (int i=0;i<n;i++){
//         cout<<"\n Enter data for student "<<i+1;
//         s1[i].accept();
//     }
//     cout<<"\nEnter Student Data is :"<<endl;
//     for (int i=0;i<n;i++){
//         s1[i].display(s1[i]);
//     }



// }
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class student {
    int roll_no;
    string date_of_birth;
    int total_marks;
public:
    student();
    student(int, string, int);
    void accept();
    void display();

    int get_roll_no()
    { 
        return roll_no;
    }
};

student::student() {
    roll_no=0;
    date_of_birth="0";
    total_marks= 0;
}

student::student(int r, string dob, int m) 
{
    roll_no=r;
    date_of_birth=dob;
    total_marks=m;
}

void student::accept() 
{
    cout << "\nEnter the roll no";
    cin >> roll_no;
    cout << "\nEnter the DOB ";
    cin >> date_of_birth;
    cout << "\nEnter Total Marks : ";
    cin >> total_marks;
}

void student::display() {
    cout << "\nRoll No : " <<roll_no;
    cout << "\nDate of Birth : " <<date_of_birth;
    cout << "\nTotal Marks : " <<total_marks << endl;
}


int sortbyrollno(student &a,student &b) 
{
    return a.get_roll_no()<b.get_roll_no();
}

int main()
 {
    int n;
    cout <<"Enter No. of student "<<endl;
    cin >> n;
    student s1[50]; 
    for(int i = 0; i < n; i++)
    {
        cout <<"\nEnter data for student"<< i + 1;
        s1[i].accept();
    }
  
    sort(s1,s1+n,sortbyrollno);

    cout<<"\nStudent Data "<<endl;
    for(int i = 0; i < n; i++)
    {
        s1[i].display();
    }
    
 
}
