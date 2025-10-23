#pragma once

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    // Encapsulation (for security  i used this)
    string name;
    int age;
    int rollNo;
    float gpa;

public:
    // Default constructor(named same as class)
    Student();

    //Parameterized 
    Student(string n, int a, int r, float g);

    
    Student(string n, int a = 18);

    // Destructor
    ~Student();

    // Settter methods (to set data safely)
    void setData(string n, int a, int r, float g);

    // Getter methods (for accessing for private data )
    string getName();
    int getAge();
    int getRollNo();
    float getGpa();

    // for displaying student information
    void showData();

    // forr grades calc
    void findGrade();
};

