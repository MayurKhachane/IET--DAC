#include <iostream>
using namespace std;

class student {
    int roll_no;
    string date_of_birth;
    int total_marks;
public:
    student() {
        roll_no = 0;
        date_of_birth = "0";
        total_marks = 0;
    }
    student(int r, string dob, int m) {
        roll_no = r;
        date_of_birth = dob;
        total_marks = m;
    }
    void accept() {
        cout << "\nEnter the roll no : ";
        cin >> roll_no;
        cout << "\nEnter the DOB : ";
        cin >> date_of_birth;
        cout << "\nEnter Total Marks : ";
        cin >> total_marks;
    }
    void display() const {
        cout << "\n Roll No : " << roll_no;
        cout << "\n Date of Birth : " << date_of_birth;
        cout << "\n Total Marks : " << total_marks << endl;
    }
    int getRollNo() const {
        return roll_no;
    }
};

void sortStudents(student arr[], int n) {
  
    for(int i=0; i<n-1;i++) 
    {
        for(int j = 0; j < n-i-1; j++)
         {
            if(arr[j].getRollNo() > arr[j+1].getRollNo())
             {
                student temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter No. of students " << endl;
    cin >> n;
    student s1[n];
    for(int i = 0; i < n; i++) {
        cout << "\n Enter data for student " << i+1;
        s1[i].accept();
    }
    sortStudents(s1, n);
    cout << "\nSorted Student Data is :" << endl;
    for(int i = 0; i < n; i++) {
        s1[i].display();
    }
    return 0;
}
