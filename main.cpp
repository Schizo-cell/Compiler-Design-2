#include <iostream>
using namespace std;

// Forward declarations of each program
void runLT1();
void runLT2();
void runLT3();
void runLT4();
void runLT5();
void runLT6();
void runLT7();

// Including other files directly in the main file
#include "LT-1.cpp"
#include "LT-2.cpp"
#include "LT-3.cpp"
#include "LT-4.cpp"
#include "LT-5.cpp"
#include "LT-6.cpp"
#include "LT-7.cpp"

int main() {
    int choice;

    cout << "Select the program you want to run:" << endl;
    cout << "1. LT-1" << endl;
    cout << "2. LT-2" << endl;
    cout << "3. LT-3" << endl;
    cout << "4. LT-4" << endl;
    cout << "5. LT-5" << endl;
    cout << "6. LT-6" << endl;
    cout << "7. LT-7" << endl;
    cout << "Enter your choice (1-7): ";
    cin >> choice;

    switch (choice) {
        case 1:
            runLT1();
            break;
        case 2:
            runLT2();
            break;
        case 3:
            runLT3();
            break;
        case 4:
            runLT4();
            break;
        case 5:
            runLT5();
            break;
        case 6:
            runLT6();
            break;
        case 7:
            runLT7();
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
