#include <iostream>
using namespace std;

int main() {
    // 5.1 Strings Introduction
    string greeting = "Welcome";
    cout << greeting << endl;

    string name = "Alice";
    cout << name << endl;

    string userName;
    cout << "Enter your name: ";
    cin >> userName;
    cout << "Hello, " << userName << endl;

    string first, second;
    cout << "Enter two words: ";
    cin >> first >> second;
    cout << first + second << endl;

    // 5.2 String Concatenation
    string a = "Good";
    string b = "Morning";
    cout << a + b << endl;

    string firstName = "John";
    string lastName = "Doe";
    cout << firstName + lastName << endl;

    string fName, lName;
    cout << "Enter first and last name: ";
    cin >> fName >> lName;
    cout << fName + " " + lName << endl;

    // 5.3 Numbers and Strings
    int n1 = 5, n2 = 10;
    cout << n1 + n2 << endl;

    string x = "5";
    string y = "10";
    cout << x + y << endl;

    int num = 20;
    string result = "Value: " + to_string(num);
    cout << result << endl;

    string hello = "Hello";
    int number = 5;
    string mixed = hello + to_string(number);
    cout << mixed << endl;

    // 5.4 String Length
    string txt = "C++ Programming";
    cout << txt.length() << endl;

    string txt2 = "OpenAI";
    cout << txt2.length() << endl;

    string inputStr;
    cout << "Enter text: ";
    cin >> inputStr;
    cout << inputStr.length() << endl;

    // 5.5 Access Strings
    string word = "Computer";
    cout << word[0] << endl;

    string greeting2 = "Hello";
    cout << greeting2[2] << endl;

    string s3 = "Programming";
    cout << s3[s3.length() - 1] << endl;

    string userInput;
    cout << "Enter a word: ";
    cin >> userInput;
    cout << userInput[2] << endl;

    string cap = "hello";
    cap[0] = toupper(cap[0]);
    cout << cap << endl;

    // 5.6 Special Characters
    cout << "He said, \"Hello!\"" << endl;
    string beautiful = "It's a beautiful day!";
    cout << beautiful << endl;
    cout << "Path: C:\\Program Files\\App\nQuote: \"Hi!\"\nSingle: \'X\'" << endl;

    string txt4 = "He said, \"Hello World!\"";
    cout << txt4 << endl;

    cout << "It's \"great\" to learn C++!\nNew line here." << endl;

    // 5.7 User Input Strings
    string n;
    cout << "Enter your name: ";
    cin >> n;
    cout << "Your name is: " << n << endl;

    cin.ignore();
    string fullName;
    cout << "Enter full name: ";
    getline(cin, fullName);
    cout << "Hello, " << fullName << endl;

    // 5.8 String Namespace
    string s = "Hello";
    cout << s << endl;

    return 0;
}
