#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include "menu.h"

using namespace std;

mutex mtx;

Menu::Menu(){}

Menu::~Menu(){}

void Menu::displayMainMenu(){

    mtx.lock();

    string menu = "\t********** AVS Student Management **********";

    for(char x : menu){
        this_thread::sleep_for(chrono::milliseconds(40));
        cout << x << flush;
    }

    this_thread::sleep_for(chrono::milliseconds(50));
    cout << endl << endl << "\t\t\tMenu:"<< endl << endl;

    this_thread::sleep_for(chrono::milliseconds(50));
    cout << "\t\t1. Add student" << endl;
    cout << "\t\t2. Edit record" << endl;
    cout << "\t\t3. Find student" << endl;
    cout << "\t\t4. Delete student" << endl;
    cout << "\t\t5. Display all students" << endl;
    cout << "\t\t6. Quit" << endl << endl;

    string select = "\t\tSelect command: ";
    for(char x : select){
        this_thread::sleep_for(chrono::milliseconds(30));
        cout << x << flush;
    }

    mtx.unlock();

}
