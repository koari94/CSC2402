#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

// struct initiated using typedef to ensure it can be passed into a function via reference with no issue
typedef struct staffStruct
{
    string name;
    string staffChoice;
    int staffProf;
}staff;
// staff variable initialised for array reference

// function to handle displaying outputs
void printArray(int counter, staff *array)
{
    cout << "**********List of staff********" << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "Staff " << array[i].name << array[i].staffChoice << endl;
    }
    cout << "**********End of List**********";
}

int main()
{
    string SENTINEL = "done";
    int i = 0;
    int counter = 0;
    // staff struct passed into an array
    staffStruct staff[50];

    while (staff[i].name != SENTINEL && counter <= 50)
    {
        cout <<"Please enter staff name ('done' to finish inputting): ";
        getline(cin, staff[i].name);
        if (staff[i].name != SENTINEL)
        {
            cout << "Please enter the profession of " << staff[i].name << ": ";
            cin >> staff[i].staffProf;

            // janky else if statements to handle mapping strings to the integer choice the easiest
            if (staff[i].staffProf == 1)
            {
                staff[i].staffChoice = " is a Receptionist.";
            }

            else if (staff[i].staffProf == 2)
            {
                staff[i].staffChoice = " is an Administrator.";
            }

            else if (staff[i].staffProf == 3)
            {
                staff[i].staffChoice = " is a Nurse.";
            }

            else if (staff[i].staffProf == 4)
            {
                staff[i].staffChoice = " is a Doctor.";
            }

            else
            {
                // in case of wrong input, clears the name input so the loop can start fresh 
                cin.clear();
                i--;
                counter--;
                // regressing integer and counter to ensure the wrong input is overwritten
                // also for some reason if counter doesn't regress it will display the 'done' sentinel in the finished display
                cout << "Wrong Entry!" << endl;
            }
            cin.ignore(9999999, '\n');
            counter++;
            i++;
        }
    }

    printArray(counter, staff);
    return 0;
}