#include <iostream>
#include <fstream>

using namespace std;

void IdentifierCheck()
{
    string c;
    cout << "Taking context from the txt file sample: " << endl;
    cout << endl;
    ifstream MyReadFile("read.txt");

    while(getline(MyReadFile, c))
    {
        cout << c << endl;
        cout << "Checking if line is a valid identifier... " << endl;

        if(!((c[0] >= 'A' && c[0] <= 'Z') || (c[0] >= 'a' && c[0] <= 'z') || c[0] == '_'))
        {
            cout << "Not a valid identifier." << endl;
            cout << endl;

        }

        if(c == "int" || c == "float" || c == "double" || c == "string" || c == "bool" || c == "const")
        {
            cout << "Not a valid identifier." << endl;
            cout << endl;

        }

        bool isValid = true;
        for(int i = 1; i < c.length(); i++)
        {
            if(c[i] == ' ') {
                cout << "Not a valid identifier." << endl;
                isValid = false;
                cout << endl;
                break;
            }

            if(!((c[i] >= 'A' && c[i] <= 'Z') ||
                 (c[i] >= 'a' && c[i] <= 'z') ||
                 (c[i] >= '0' && c[i] <= '9') ||
                 c[i] == '_'))
            {
                cout << "Not a valid identifier." << endl;
                isValid = false;
                cout << endl;
                break;
            }
        }

        if(isValid)
        {
            cout << "It is a valid identifier." << endl;
            cout << endl;
        }
    }
}

int main()
{
    IdentifierCheck();
    return 0;
}
