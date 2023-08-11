#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Student{

public:

    map<int,vector<Student>> students;
    string name;
    string age;
    Student();
    Student(string n, string a);
    ~Student();
    void setName(string name);
    void setAge(string age);

};

#endif // STUDENT_H
