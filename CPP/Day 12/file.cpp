#include<iostream>
#include<string.h>
#include<fstream>
#include<bits\stdc++.h>

using namespace std;
int main ()
{
    // ofstream file("mayur.txt");
    // file<<"My name is mayur";
    // file<<"completed BE";

    fstream file("mayur.txt", ios::in | ios::out);

    if(!file){
        cout<<"File Not Found";
        return 1;
    }
    file<<"This file is for mayuresh ";

    file.seekg(0);
    string line;
    getline(file, line);
    cout<<line;

    file.close();

}