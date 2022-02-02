#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int rollNo;
    string name;
    float marks;

    void printData()
    {
        cout << "Roll no : " << rollNo << " " << endl;
        cout << "Name    : " << name << " " << endl;
        cout << "Marsk   : " << marks << " " << endl;
    }
    Student(int rn, string nm, int mk)
    {
        rollNo = rn;
        name = nm;
        marks = mk;
    }
    Student()
    {
    }
};
int main()
{
    Student s1[5];

    // Data of five students
    s1[0].rollNo = 25;
    s1[0].name = "dipak";
    s1[0].marks = 93.20;
    s1[0].printData();

    cout << endl;

    s1[1].rollNo = 125;
    s1[1].name = "dipak";
    s1[1].marks = 93.20;
    s1[1].printData();

    Student *s2 = new Student(); // dynamicaly allocate memort and return refferance to it
    cout << "s2 : " << s2 << endl;

    Student s3();
    cout << "s3  : " << s3 << endl;

    Student *s4;
    s4 = new Student();
    cout << "s4  : " << s4 << endl;

    Student s5(15, "dd", 99);
    cout << "marsks : " << s5.marks << endl;

    return 0;
}