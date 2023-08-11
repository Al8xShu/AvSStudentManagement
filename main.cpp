#include <iostream>
#include <thread>
#include "menu.h"
#include "commands.h"
#include "switcher.h"

using namespace std;

int main(){

    Menu menu;
    Switcher switcher;

    while(true) {

        clearScreen();

        thread t1(menu.displayMainMenu);

        switcher.switchMenu();

        t1.join();

    }

    return EXIT_SUCCESS;

}
