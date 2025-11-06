#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    getline(cin, input);
    if (input.find("//") == 0) {
        cout << "This is a single-line comment." << endl;
    }
    else if (input.find("/*") == 0 && input.find("*/") != string::npos) {
        cout << "This is a multi-line comment." << endl;
    }
    else {
        cout << "This is not a comment." << endl;
    }
    return 0;
}

