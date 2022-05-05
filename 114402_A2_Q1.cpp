#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// switch statement used for outputting based on what user entered
void printEntry (int staffProf, string name)
{
    switch (staffProf)
    {
        case 1:
            cout << "Staff " << name << " is a Receptionist." << endl;
            break;
        case 2:
            cout << "Staff " << name << " is an Administrator." << endl;
            break;
        case 3:
            cout << "Staff " << name << " is a Nurse." << endl;
            break;
        case 4:
            cout << "Staff " << name << " is a Doctor." << endl;
            break;
        default:
        {
            cin.clear();
            cout << "Wrong Entry!" << endl;
        }
    }
}

int main()
{
    string name;
    string SENTINEL = "done";
    int staffProf;
    int count = 0;
    while (name != SENTINEL && count <= 50)
    {
        // due to names commonly holding two words, getline() is used to ensure both are inputted, despite white space
        cout << "Please enter the staff name, or enter 'done' to finish inputting: ";
        getline(cin, name);

        if (name != SENTINEL && count <= 50)
        {
            cout << "Please enter the profession of " << name << ": ";
            cin >> staffProf;
            printEntry(staffProf, name);
            // due to leftovers in the input buffer, cin.ignore() tails the loop to ensure the name input starts from scratch
            cin.ignore(99999,'\n');
            count++;
        }
    }
    return 0;
}