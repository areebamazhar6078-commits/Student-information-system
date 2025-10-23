
#include "Student.h"

// Default constructor
Student::Student() {
    name = " ";
    age = 0;
    rollNo = 0;
    gpa = 0.0;
    cout << "Default constructor called." << endl;
}

// Parameterized constructor
Student::Student(string n, int a, int r, float g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
    cout << "Parameterized constructor called for " << name << endl;
}

// use of scope resolution operator (to create a link)
Student::Student(string n, int a) {
    name = n;
    age = a;
    rollNo = 999;   
    gpa = 2.5;
    cout << "Constructor with default argument called for " << name << endl;
}

// Destructor(incase you want to remove permanently)
Student::~Student() {
    cout << "Destructor is called for " << name << endl;
}

// Setter
void Student::setData(string n, int a, int r, float g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
}

// Getters
string Student::getName() { return name; }
int Student::getAge() { return age; }
int Student::getRollNo() { return rollNo; }
float Student::getGpa() { return gpa; }

// Display student inforrmation
void Student::showData() {
    
    cout << "Name: " << name << "  Age: " << age
        << " Roll No: " << rollNo << "  GPA: " << gpa << endl;
}

// Calculate thegrade acccording to GPA
void Student::findGrade() {
    char grade;
    if (gpa >= 3.5)
        grade = 'A';
    else if (gpa >= 3.0)
        grade = 'B';
    else if (gpa >= 2.5)
        grade = 'C';
    else if (gpa >= 2.0)
        grade = 'D';
    else
        grade = 'F';

    cout << "Grade: " << grade << endl;
}
