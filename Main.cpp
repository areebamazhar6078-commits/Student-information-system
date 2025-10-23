
#include <iostream>
#include "Student.h"
using namespace std;

int main() {
    cout << "Student Information System " << endl;

    // pehla object Using default constructor
    Student s1("Minal", 21, 112, 2.08);
    s1.showData();
    s1.findGrade();

    cout << endl;

    // 2nd object 
    Student s2("Areeba", 20, 101, 3.7);
    s2.showData();
    s2.findGrade();

    cout << endl;

    // 3rd object U
    Student s3;
    s3.setData("Parishay", 18, 999, 2.5);
    s3.showData();
    s3.findGrade();

    cout << endl;

    // 4th  object
    Student s4;
    s4.setData("zainab", 21, 102, 2.9);
    s4.showData();
    s4.findGrade();

    cout << " " << endl;

    return 0;
}
