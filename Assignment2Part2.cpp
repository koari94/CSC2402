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


string getChoice(staff *array)
{
    int i = 0;
    switch (array[i].staffProf)
    {
        case 1:
            array[i].staffChoice = " is a Receptionist.";
            i++;
            break;
        case 2:
            array[i].staffChoice = " is an Administrator.";
            i++;
            break;
        case 3:
            array[i].staffChoice = " is a Nurse.";
            i++;
            break;
        case 4:
            array[i].staffChoice = " is a Doctor.";
            i++;
            break;
        default:
        {
            array[i].name.clear();
            cout << "Wrong Entry!" << endl;
        }
    }
    return array[i].staffChoice;
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
        cout <<"Please enter staff name: ";
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
                    cout << "Wrong Entry!" << endl;
                }
                // getChoice(staff);
                cin.ignore();
                counter++;
                i++;
            }
        
    }

    printArray(counter, staff);
    return 0;
}