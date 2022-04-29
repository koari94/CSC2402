#include <iostream>
#include <iomanip>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

struct STAFF
{
    string name;
    int staffProf;
};

int main()
{
    
    int i = 0;
    const string SENTINEL = "done";
    int count = 0;

    STAFF* s = new STAFF[50];
    
    // SENTINEL not functioning
    while (get(input) != SENTINEL)
    {
        cout << "Please enter the staff name: ";
        getline(cin, s[ i ].name);
        cout << "Please enter the profession of " << s[ i ].name << ": ";
        cin >> s[ i ].staffProf;
        cin.ignore();

        switch (s[ i ].staffProf) {
            case 1:
                s[ i ].staffProf = "Receptionist";
                break;
            case 2:
                s[ i ].staffProf = "Administrator";
                break;
            case 3:
                s[ i ].staffProf = "Nurse";
                break;
            case 4:
                s[ i ].staffProf = "Doctor";
                break;
        i++;
        count++;
        }

    for (int i = 0; i < count; i++) {
        cout << s[ i ].name << " " << s[ i ].staffProf << endl;
    }
    }
       
    
    

  
    
    return 0;
}


