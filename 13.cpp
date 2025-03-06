#include <iostream>
#include <string> // Required for std::to_string
using namespace std;

int main() {
    string x = "Hello";
    int y = 5;

    string yStr = to_string(y);

    string result = x + yStr;

    cout << result << endl; // Output: Hello5
    
    
    /*Adding a number (integer) directly to a string in C++ causes an 
	error because the + operator is not defined between a std::string and an int.*/
}