🔹 Descriptive Questions
1. What is a variable in C++?
A variable is a container for storing data values. It represents a named memory location used to store data that can change during program execution.

2. Define a variable and explain its purpose in C++.
A variable allows you to store and work with data in your program.

cpp
Copy
Edit
int number = 5; // Stores the value 5 in an integer variable
3. What data type would you use to store an age in C++?
cpp
Copy
Edit
int age = 20;
Use int to store age since it's a whole number.

4. What does the int data type store?
It stores whole numbers (both positive and negative).

cpp
Copy
Edit
int students = 30;
5. Explain the difference between float and double data types.
float is a single-precision floating-point type (about 6 decimal digits).

double is a double-precision type (about 15 decimal digits), more accurate than float.

6. What data type would you use to store a character?
cpp
Copy
Edit
char grade = 'A';
Use char to store a single character.

7. What is the default value of a bool variable in C++?
In local scope, bool variables have an undefined default value. When global or static, default is false.

cpp
Copy
Edit
bool isPassed = true;
bool isFailed = false;
8. Declare a variable x of type int and assign it the value of 10.
cpp
Copy
Edit
int x = 10;
9. How do you assign one value to multiple variables in C++?
cpp
Copy
Edit
int a, b, c;
a = b = c = 5;
10. What is the purpose of using the const keyword in C++?
const makes a variable constant, meaning its value cannot be changed after initialization.

cpp
Copy
Edit
const float PI = 3.14;
// PI = 3.14159; // This would cause an error
11. Rules for naming variables in C++:
Must begin with a letter or underscore (_)

Can contain letters, digits, and underscores

Cannot use reserved keywords (like int, return, etc.)

🔹 Code Examples
1. Declare and print an integer variable
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    cout << "Value: " << num << endl;
}
2. Perimeter of a Rectangle
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int length = 10, width = 5;
    int perimeter = 2 * (length + width);
    cout << "Perimeter: " << perimeter << endl;
}
3. Changing a constant variable (causes error)
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    const int value = 100;
    // value = 200; // Uncommenting this will cause a compile error
    cout << "Value: " << value << endl;
}
4. Store and print your name
cpp
Copy
Edit
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "John";
    cout << "Name: " << name << endl;
}
5. Calculate total student fee
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    double tuition = 5000.75, hostel = 1000.50, books = 300.20;
    double total = tuition + hostel + books;
    cout << "Total Fee: " << total << endl;
}
6. Area of Triangle
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    double base = 6.0, height = 4.0;
    double area = 0.5 * base * height;
    cout << "Area: " << area << endl;
}
7. Display float with 2 decimal places
cpp
Copy
Edit
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float x = 7.3456;
    cout << fixed << setprecision(2) << "Value: " << x << endl;
}
8. Difference between char and string
cpp
Copy
Edit
#include <iostream>
#include <string>
using namespace std;

int main() {
    char grade = 'A';
    string name = "Alice";
    cout << "Char: " << grade << ", String: " << name << endl;
}
9. Sum of x, y, z
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10, z = 20;
    int sum = x + y + z;
    cout << "Sum: " << sum << endl;
}
10. Area and Circumference of a Circle
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    int radius = 7;
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;
    cout << "Area: " << area << "\nCircumference: " << circumference << endl;
}
11. Add two integers from user
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << a + b << endl;
}
12. Average of three numbers
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    double avg = (a + b + c) / 3;
    cout << "Average: " << avg << endl;
}
13. Volume of Cylinder
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    int radius = 5, height = 10;
    double volume = PI * radius * radius * height;
    cout << "Volume: " << volume << endl;
}
14. Area using const PI and user radius
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    double area = PI * radius * radius;
    cout << "Area: " << area << endl;
}
15. Simple Interest Calculation
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    double principal = 1000, rate = 5, time = 3;
    double interest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << interest << endl;
}
16. Fahrenheit to Celsius
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    float fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    float celsius = (fahrenheit - 32) * 5 / 9;
    cout << "Celsius: " << celsius << endl;
}
17. Area of rectangle, square, triangle
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int length = 10, width = 5, side = 6, base = 4, height = 3;
    cout << "Rectangle Area: " << length * width << endl;
    cout << "Square Area: " << side * side << endl;
    cout << "Triangle Area: " << 0.5 * base * height << endl;
}
18. Print ASCII of a char
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "ASCII Value: " << int(ch) << endl;
}
19. Factorial using loop
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    cout << "Factorial: " << fact << endl;
}
20. Student info
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    int id = 101, age = 20;
    char grade = 'A';
    float fees = 2500.50;
    cout << "ID: " << id << "\nAge: " << age << "\nGrade: " << grade << "\nFees: " << fees << endl;
}
21. Total cost with tax
cpp
Copy
Edit
#include <iostream>
using namespace std;

int main() {
    double cost = 50.75;
    double taxRate = 8.5;
    double total = cost + (cost * taxRate / 100);
    cout << "Total Cost: " << total << endl;
}