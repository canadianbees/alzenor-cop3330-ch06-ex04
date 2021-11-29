#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

int main() {

    vector<Name_value> list;
    string x;
    set<string> records;
    int y;

    //run until user has inputted a duplicate name
    while (true) {

        //ask for user input
        cout << "Enter a name:";
        cin >> x;

        //if the name is not in the records, add it
        if (!records.count(x)) {
            records.insert(x);

        //if it is, display error message
        //break loop
        } else {
            cout << "ERROR: Duplicate name (" << x << ") found.\n";
            break;
        }

        cout << "Enter score:";
        cin >> y;
        cout << "\n";

        //make person and add them to the list
        Name_value person(x, y);
        list.push_back(person);
    }
    cout << "Printing contents of list...\n";
    //print the people in the list
    for (Name_value person : list) {
        cout << person.getName() << " " << person.getScore() << "\n";
    }
    return 0;
}