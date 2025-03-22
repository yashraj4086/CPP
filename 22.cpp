#include <iostream>
using namespace std;

int main() {
    string user_input;
    
    cout << "Enter a string: ";
    getline(cin, user_input);  
    
    if (user_input.length() >= 3) {
        cout << "The third character is: " << user_input[2] << endl;
    } else {
        cout << "The string is too short to have a third character." << endl;
    }
    
    return 0;
}