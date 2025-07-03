#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, string> directory; // store names and phone numbers

    // add some entries to the directory
    directory["John Doe"] = "555-1234";
    directory["Jane Smith"] = "555-5678";
    directory["Bob Johnson"] = "555-9012";

    // search for a phone number
    string name;
    cout << "Enter name to search: ";
    getline(cin, name);

    auto it = directory.find(name);
    if (it != directory.end()) {
        cout << "Phone number: " << it->second << endl;
    } else {
        cout << "Name not found in directory." << endl;
    }

    // add a new entry to the directory
    string new_name, phone_number;
    cout << "Enter new name: ";
    getline(cin, new_name);
    cout << "Enter phone number: ";
    getline(cin, phone_number);

    directory[new_name] = phone_number;
    cout << "New entry added to directory." << endl;

    // print out the entire directory
    for (auto entry : directory) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}
