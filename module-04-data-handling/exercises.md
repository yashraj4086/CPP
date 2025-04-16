🔹 Easy Exercises
1. What is a data type in C++?
A data type defines the type of value a variable can hold, such as int, float, char, bool, etc.

2. Which data type would you use to store a single character?
Answer: b) char

3. What is the size of a bool data type in C++?
Answer: 1 byte (typically)

4. Which data type is best for storing a whole number like 1000?
Answer: c) int

5. What does the float data type store?
It stores numbers with decimals (floating-point numbers) with up to ~6 digits of precision.

6. What is the difference between float and double in C++?
float: 4 bytes, ~6 decimal digits precision.

double: 8 bytes, ~15 decimal digits precision.

7. What data type would you use to store a string like "Hello, World!"?
Answer: string (from the C++ Standard Library)

8. How do you declare a bool variable that stores true in C++?
cpp
Copy
Edit
bool isActive = true;
9. Which data type would you use to store the value 9.99?
Answer: b) double

10. What is the value of a bool variable that is set to false?
Answer: false represents 0.

🔹 Medium Exercises
1. What does the char data type store in C++? Example:
It stores a single character.

cpp
Copy
Edit
char grade = 'A';
2. What is the maximum number of decimal places a float can store?
Answer: About 6-7 decimal digits.

3. Difference between int and double with examples:
cpp
Copy
Edit
int a = 10;      // whole number
double b = 10.5; // decimal number
4. How to store 3.14159 in C++?
cpp
Copy
Edit
double pi = 3.14159;
5. Program: declare age and assign 25
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    cout << "Age: " << age << endl;
}
6. Program: declare name as "Alice"
cpp
Copy
Edit
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Alice";
    cout << "Name: " << name << endl;
}
7. Declare a char variable and assign 'X':
cpp
Copy
Edit
char letter = 'X';
8. Range of int in C++
Typically: -2,147,483,648 to 2,147,483,647

9. Decimal storage in double:
Up to ~15 decimal digits.

cpp
Copy
Edit
double x = 9.87654321;
10. Program with bool isAdult = true:
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    bool isAdult = true;
    cout << "Is adult: " << isAdult << endl;
}
🔹 Hard Exercises
1. Output of:
cpp
Copy
Edit
int x = 5;
double y = 2.5;
double result = x * y;
cout << result;
Answer: 12.5

2. Program: total cost of 50 items @ 12.99 each
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    double price = 12.99;
    int quantity = 50;
    double total = price * quantity;
    cout << "Total Cost: " << total << endl;
}
3. Scientific notation example
cpp
Copy
Edit
float num = 1.23e3; // = 1230.0
4. Bool check for positive number
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    bool isPositive = (num > 0);
    cout << "Is Positive: " << isPositive << endl;
}
5. Decimal in int example
cpp
Copy
Edit
int x = 3.14;
cout << x; // Outputs: 3 (decimal is truncated)
6. Precision concept
float: less accurate, uses less memory.

double: more precise, used when accuracy is important.

7. Scientific number using float
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    float sci = 1.2e3;
    cout << "Scientific: " << sci << endl;
}
8. ASCII to char
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int ascii = 65;
    char ch = ascii;
    cout << "Character: " << ch << endl;
}
9. String in char?
cpp
Copy
Edit
char name = "John"; // ❌ ERROR: char holds one character, not a string
10. Multiply int by double
cpp
Copy
Edit
int x = 3;
double y = 2.5;
double result = x * y;
cout << result; // Output: 7.5
🔹 Bonus Challenge Questions
1. Data type to store ASCII value 65?
Use int – ASCII values are numbers.

2. Why use float over double?
When memory is limited and high precision is not needed.

3. Area of a circle
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius = 4.5;
    double area = PI * radius * radius;
    cout << "Area: " << area << endl;
}
4. int + double = ?
The result will be double due to implicit conversion.

5. Why understand data type size?
To avoid overflow, precision loss, and manage memory effectively.

6. Scientific notation with double
cpp
Copy
Edit
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double value = 123456.78;
    cout << scientific << value << endl;
}
7. Assign string to bool?
cpp
Copy
Edit
bool b = "hello"; // ❌ ERROR: invalid conversion from const char* to bool
8. Check odd/even using bool
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;
    bool isEven = (num % 2 == 0);
    cout << (isEven ? "Even" : "Odd") << endl;
}
9. int limits & solution
int max ≈ 2.1 billion. Use long long or unsigned long long for larger values.

10. Convert double to int
cpp
Copy
Edit
double d = 5.78;
int i = (int)d; // i = 5, decimal is lost