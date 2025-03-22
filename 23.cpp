#include <iostream>
#include <cctype>  // For toupper() function
using namespace std;

int main() {
    string user_input;

    cout << "Enter a string: ";
    
    getline(cin, user_input);

    if (!user_input.empty()) {

        user_input[0] = toupper(user_input[0]);
        cout << "Modified string: " << user_input << endl;
    } else {
        cout << "The string is empty." << endl;
    }

    return 0;
}