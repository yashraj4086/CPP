#include <iostream>
using namespace std;

int main() {
    // Write a program that reads a string from the user and prints its length.
    
    string user_input;
    
    cout << "Enter a string: ";
    getline(cin, user_input);
    
    
    int string_length = user_input.length();
    cout << "The length of the string is: " << string_length << endl;
    
}