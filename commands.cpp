#include <iostream>
#include "commands.h"

using namespace std;

Commands::Commands():id(0){}

Commands::~Commands(){}

void Commands::addStudent(){

    clearScreen();

    cout << endl << "\t********** Add Student **********" << endl << endl;

    cout << "\t\tID: ";
    cout << ++id << endl;

    cout << "\t\tName: ";
    cin >> name;

    cout << "\t\tAge: ";
    cin >> age;

    studentObject.setName(name);
    studentObject.setAge(age);

    studentsMapContainer[id].push_back(studentObject);

    cout << endl <<"Student was successful added in base" << endl;
    cout << endl <<"To return in main menu, press Enter! ";

    cin.get();
    cin.get();

}

void Commands::editRecordById(){

    clearScreen();

    cout << endl << "\t********** Edit Student By ID **********" << endl << endl;

    cout << "\t\tEnter ID number to edit record: ";
    cin >> editIdNumber;

    auto itr = studentsMapContainer.find(editIdNumber);

    if(itr != studentsMapContainer.end()){

        cout << "\t\tName: ";
        cin >> name;

        cout << "\t\tAge: ";
        cin >> age;

        itr->second[0].name = name;
        itr->second[0].age = age;

        cout << endl << "Student " << name << " with ID ";
        cout << editIdNumber <<" was successful edit! " << endl;
        cout << endl << "To return in main menu, press Enter! ";

    }else{

        cout << endl << "Student with ID " << editIdNumber << " was not found! " << endl;
        cout << endl << "To return in main menu, press Enter! ";

    }

    cin.get();
    cin.get();

}

void Commands::findStudentById(){

    clearScreen();

    cout << endl << "\t********** Find Student By ID **********" << endl << endl;

    cout << "\t\tEnter ID number to find student: ";
    cin >> findIdNumber;

    auto itr = studentsMapContainer.find(findIdNumber);

    if(itr != studentsMapContainer.end()){

        cout << endl << "Find results: " << "ID " << itr->first << " ";
        cout << itr->second[0].name << " " << itr->second[0].age << endl;
        cout << endl << "To return in main menu, press Enter! ";

    }else{

        cout << endl << "Student with ID " << deleteIDNumber << " was not found! " << endl;
        cout << endl << "To return in main menu, press Enter! ";

    }

    cin.get();
    cin.get();

}

void Commands::deleteStudentById(){

    clearScreen();

    cout << endl << "\t********** Delete Student By ID **********" << endl << endl;

    cout << "\t\tEnter ID number to delete student: ";
    cin >> deleteIDNumber;

    auto itr = studentsMapContainer.find(deleteIDNumber);

    if(itr != studentsMapContainer.end()){

        studentsMapContainer.erase(itr);

        cout << endl << "Student " << itr->second[0].name << " with ID ";
        cout << deleteIDNumber <<" was successful deleted! " << endl;
        cout << endl << "To return in main menu, press Enter! ";

    }else{

        cout << endl << "Student with ID " << deleteIDNumber << " was not found! " << endl;
        cout << endl << "To return in main menu, press Enter! ";

    }

    cin.get();
    cin.get();

}

void Commands::displayAllStudents(){

    clearScreen();

    cout << endl << "\t********** Display All Students **********" << endl << endl;

    if(!studentsMapContainer.empty()){

        for (auto iter = studentsMapContainer.begin(); iter != studentsMapContainer.end() ;iter++) {

            cout << "\tID " << iter->first << ": ";

            vectorOfStudent = iter->second;

            for(int i = 0; i < vectorOfStudent.size(); i++){

                cout << vectorOfStudent[i].name << " " << vectorOfStudent[i].age << "." << endl;

            }

            cout << endl;

        }
    }else{
        cout << "The base of students is empty! " << endl;
    }

    cout << endl << "To return in main menu, press Enter! ";
    cin.get();

}

void clearScreen(){

#if defined _WIN32
    system("cls");
#elif defined (__APPLE__)
    system("clear");
#endif

}
