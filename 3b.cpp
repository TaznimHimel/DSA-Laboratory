#include<bits/stdc++.h>
using namespace std;
struct student
{
    int student_roll;
    char student_name[30];
    float marks;
};
int main()
{
    struct student s;
    struct student *st;
    cout << "Enter Student Roll, Student Name and Marks: ";
    cin >> s.student_roll >> s.student_name >> s.marks;
    st = &s;
    cout << "Details of the student are: " << endl;
    cout << "Student Roll : " << st->student_roll << '\n';
    cout << "Student Name : " << st->student_name << '\n';
    cout << "Student Marks: " << st->marks << '\n';
}
