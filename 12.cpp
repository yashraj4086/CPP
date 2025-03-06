#include <iostream>
#include <string> // Include the string header for std::string and std::to_string
using namespace std;

int main() {
    int number;
    string text;

    cout << "Enter an integer: ";
    cin >> number;

    cin.ignore();

    cout << "Enter a string: ";
    getline(cin, text); // Use getline to read the entire line, including spaces

    string numberStr = to_string(number);

    string result = numberStr + " " + text; // Add a space for better readability

    cout << "Concatenated result: " << result << endl;

    return 0;
}