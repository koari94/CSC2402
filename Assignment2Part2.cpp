#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

typedef struct staffStruct
{
    string name;
    string staffChoice;
    int staffProf;
}staff;



void printArray(int counter, staff *array)
{
    for (int i = 0; i < counter; i++)
    {
        cout << array[i].name << array[i].staffChoice << endl;
    }
}

int main()
{
    string name;
    string SENTINEL = "done";
    int i = 0;
    int counter = 0;
    staffStruct staff[50];

    while (staff[i].name != SENTINEL && counter <= 50)
    {
        cout <<"Please enter staff name ('done' to finish inputting): ";
        getline(cin, staff[i].name);
        if (staff[i].name != SENTINEL)
        {
            cout << "Please enter staff profession: ";
            cin >> staff[i].staffProf;
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
                staff[i].name.clear();
                i--;
                counter--;
                cout << "Wrong Entry!" << endl;
            }
            cin.ignore();
            counter++;
            i++;
        }
    }

    printArray(counter, staff);
    return 0;
}