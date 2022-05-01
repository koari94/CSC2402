#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void printEntry (int staffChoice, string name)
{
    switch (staffChoice)
    {
        case 1:
            cout << name << " is a Receptionist." << endl;
            break;
        case 2:
            cout << name << " is an Administrator." << endl;
            break;
        case 3:
            cout << name << " is a Nurse." << endl;
            break;
        case 4:
            cout << name << " is a Doctor." << endl;
            break;
        default:
        {
            cout << "Wrong Entry!" << endl;
        }
    }
}

int main()
{
    string name;
    string SENTINEL = "done";
    int staffChoice;
    int count = 0;
    while (name != SENTINEL && count <= 50)
    {
        cout << "Please enter the staff name, or enter 'done' to finish inputting: ";
        getline(cin, name);

        if (name != SENTINEL && count <= 50)
        {
            cout << "Please enter the profession of " << name << ": ";
            cin >> staffChoice;
            printEntry(staffChoice, name);
            cin.ignore();
            count++;
        }
    }
    return 0;
}