#include<bits\stdc++.h>
using namespace std;

// 🧾 Problem Statement 2: "Student Gradebook & Analytics System"
// 🎯 Objective:
// Build a C++ application to manage student records, calculate grades, and store data securely.

// 📌 Requirements:
// 1. OOP Design
// Class Student with:

// rollNo, name, marks in 3 subjects

// Class Gradebook to manage multiple students

// 2. Operator Overloading
// Overload ++ to increment marks (e.g., bonus marks)

// Overload > to compare students based on average marks

// 3. Exception Handling
// Throw exceptions for:

// Invalid marks (e.g., >100 or <0)

// Duplicate roll numbers

// Empty gradebook access

// 4. File Handling
// Save student records to gradebook.txt

// Load records at startup

// Allow search by roll number and update marks
class Student{
    int roll_no;
    string name;
    int marks[3];

    public: 
    Student(){
       
    }
    Student(int r, string n, int m1,int m2,int m3){
        roll_no = r;
        name = n;
        
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;   
    }

    void accept()
    {
        cout<<"Enter Student roll no."<<endl;
        cin>>roll_no;
        cin.ignore();
        cout<<"ENter Name:"<<endl;
        getline(cin, name);  
        cout<<" Marks"<<endl;
        for (int i = 0; i < 3; i++)
        {
            
            cout<<"Enter subject "<< i+1<< " Student Marks :"<<endl;
            
            cin>>marks[i];
          
            if(marks[i]<0 || marks[i]>100)
            {
                throw invalid_argument("marks will be less than 100 and Greater than 0");  
            
             }
             
         
            
         }
    }

    void display(){
        cout<<"============student detials============="<<endl;
        cout<<"RollNo "<<roll_no<<endl;
        cout<<"Name "<<name<<endl;
        for (int i = 0; i < 3; i++)
        {
            cout<<"Marks of the "<<i+1<<" Subjects "<<marks[i]<<endl;
        }

        cout<<"Total marks are : "<<getTotal()<<endl;
        cout<<"Total Average : "<<getAverage()<<endl;
    }
    int getTotal(){
        return marks[0] + marks[1]  + marks[2];
    }
    int getAverage(){
        return getTotal()/3;
    }

    Student operator++(int){
        for (int i = 0; i < 3; i++)
        {
            marks[i] = marks[i] + 1;
        }
        return *this;
    }

    bool operator>(Student& s){
        return this->getAverage()>s.getAverage();
    }
    int roll_num()
    {
        return roll_no;
    }
};
class GradeBook{
    vector<Student> std;
    public:
    void addStudent(Student& s){
        for(auto &st : std)
        {
        if(st.roll_num()==s.roll_num())
        {
            throw runtime_error("Invalid Same Roll num Not allow");
        }
        std.push_back(s);
    }
    }
    void display(){
        
            if(std.empty())
            {
                throw runtime_error("Empty file !!!!");
            }
            else{
                for(auto s : std)
                {
                    s.display();
                }

            }
        
        
        
    }
};
int main(){
    int n;
    GradeBook gb;
    cout<<"Enter no of student "<<endl;
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].accept();
        gb.addStudent(s[i]);

    }
    gb.display();

    cout<<"Add bonus marks "<<endl;
    for(int j=0;j<n;j++)
    {
        s[j]++;
    }
    cout<<"After Adding bonus marks"<<endl;
    for(int i=0;i<n;i++)
    {
        s[i].display();
    }
    if(n>=2)
    {
    cout<<"Greater than "<<endl;
    if(s[0]>s[1])
    {
        cout<<"S1 student is high marks avg  "<<s[0].getAverage()<<endl;
    }
    else
    {
        cout<<"S2 student is high marks avg "<<s[1].getAverage()<<endl;
    }

    }
    else{
    cout<<"There are only one student no comparison posiible"<<endl;
}
    

}