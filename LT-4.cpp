#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string input;

    cout << "Enter a string to check if it is a valid identifier: ";
    cin >> input;
    if (!(isalpha(input[0]) || input[0] == '_')) {
        cout << input << " is not a valid identifier." << endl;
        return 0;
    }

    for (int i = 1; i < input.length(); i++) {
        if (!(isalnum(input[i]) || input[i] == '_')) {
            cout << input << " is not a valid identifier." << endl;
            return 0;
        }
    }

    cout << input << " is a valid identifier." << endl;

    return 0;
}

