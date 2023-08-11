#include <iostream>
#include "student.h"

Student::Student(){}

Student::Student(string n, string a):name(n), age(a){}

Student::~Student(){};

void Student::setName(string name){ this->name = name; }

void Student::setAge(string age){ this->age = age; }
