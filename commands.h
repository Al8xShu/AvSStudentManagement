#ifndef COMMANDS_H
#define COMMANDS_H

#include <unordered_map>
#include <vector>
#include "student.h"

class Commands{

public:

    Commands();
    ~Commands();

    void addStudent();
    void editRecordById();
    void findStudentById();
    void deleteStudentById();
    void displayAllStudents();

private:

    string name;
    string age;
    int id;
    int findIdNumber;
    int editIdNumber;
    int deleteIDNumber;
    unordered_map<int,vector<Student>> studentsMapContainer;

    vector<Student> vectorOfStudent;
    Student studentObject;

};

void clearScreen();

#endif // COMMANDS_H
