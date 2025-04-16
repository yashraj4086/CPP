Multiple Else If Questions
1. Student Grading System
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Marks: ";
    cin >> marks;
    
    if (marks >= 90) {
        cout << "Grade: A";
    }
    else if (marks >= 75) {
        cout << "Grade: B";
    }
    else if (marks >= 50) {
        cout << "Grade: C";
    }
    else {
        cout << "Grade: D";
    }
    
    return 0;
}
2. Age Category
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Age: ";
    cin >> age;
    
    if (age <= 12) {
        cout << "Category: Child";
    }
    else if (age <= 19) {
        cout << "Category: Teenager";
    }
    else if (age <= 65) {
        cout << "Category: Adult";
    }
    else {
        cout << "Category: Senior Citizen";
    }
    
    return 0;
}
3. Number Comparison
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    
    if (a >= b && a >= c) {
        cout << "Largest Number: " << a;
    }
    else if (b >= a && b >= c) {
        cout << "Largest Number: " << b;
    }
    else {
        cout << "Largest Number: " << c;
    }
    
    return 0;
}
4. Loan Approval System
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int creditScore;
    cout << "Credit Score: ";
    cin >> creditScore;
    
    if (creditScore >= 750) {
        cout << "Loan Approval: High Priority Approval";
    }
    else if (creditScore >= 600) {
        cout << "Loan Approval: Medium Priority Approval";
    }
    else {
        cout << "Loan Approval: Low Priority or Denied";
    }
    
    return 0;
}
5. Temperature Evaluation
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int temperature;
    cout << "Temperature: ";
    cin >> temperature;
    
    if (temperature <= 0) {
        cout << "Temperature Status: Freezing";
    }
    else if (temperature <= 15) {
        cout << "Temperature Status: Cold";
    }
    else if (temperature <= 30) {
        cout << "Temperature Status: Warm";
    }
    else {
        cout << "Temperature Status: Hot";
    }
    
    return 0;
}
Short Hand If Else Questions
1. Parity Check
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Number: ";
    cin >> num;
    
    cout << (num % 2 == 0 ? "Even" : "Odd");
    
    return 0;
}
2. Voting Eligibility
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Age: ";
    cin >> age;
    
    cout << (age >= 18 ? "Eligible to vote" : "Not eligible to vote");
    
    return 0;
}
3. Positive or Negative
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Number: ";
    cin >> num;
    
    cout << (num >= 0 ? "Positive" : "Negative");
    
    return 0;
}
4. Check Divisibility
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Number: ";
    cin >> num;
    
    cout << (num % 3 == 0 && num % 5 == 0 ? "Divisible by both 3 and 5" : "Not divisible by both");
    
    return 0;
}
5. Find Maximum of Two Numbers
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    
    cout << "Maximum Number: " << (a > b ? a : b);
    
    return 0;
}
Switch Case Questions
1. Weekday Finder
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Day Number: ";
    cin >> day;
    
    switch(day) {
        case 1: cout << "Day: Monday"; break;
        case 2: cout << "Day: Tuesday"; break;
        case 3: cout << "Day: Wednesday"; break;
        case 4: cout << "Day: Thursday"; break;
        case 5: cout << "Day: Friday"; break;
        case 6: cout << "Day: Saturday"; break;
        case 7: cout << "Day: Sunday"; break;
        default: cout << "Invalid day number";
    }
    
    return 0;
}
2. Simple Calculator
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    
    cout << "First Number: ";
    cin >> num1;
    cout << "Second Number: ";
    cin >> num2;
    cout << "Operator: ";
    cin >> op;
    
    switch(op) {
        case '+': cout << "Result: " << num1 + num2; break;
        case '-': cout << "Result: " << num1 - num2; break;
        case '*': cout << "Result: " << num1 * num2; break;
        case '/': 
            if (num2 != 0) {
                cout << "Result: " << num1 / num2;
            } else {
                cout << "Cannot divide by zero";
            }
            break;
        default: cout << "Invalid operator";
    }
    
    return 0;
}
3. Menu Selection
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Drink Option: ";
    cin >> choice;
    
    switch(choice) {
        case 1: cout << "Selected Drink: Coffee"; break;
        case 2: cout << "Selected Drink: Tea"; break;
        case 3: cout << "Selected Drink: Juice"; break;
        case 4: cout << "Selected Drink: Water"; break;
        default: cout << "Invalid option";
    }
    
    return 0;
}
4. Grade Classification
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Grade: ";
    cin >> grade;
    
    switch(toupper(grade)) {
        case 'A': cout << "Grade Message: Excellent"; break;
        case 'B': cout << "Grade Message: Good"; break;
        case 'C': cout << "Grade Message: Average"; break;
        case 'D': cout << "Grade Message: Below Average"; break;
        case 'F': cout << "Grade Message: Fail"; break;
        default: cout << "Invalid grade";
    }
    
    return 0;
}
5. Days in a Month
cpp
Copy
#include <iostream>
using namespace std;

int main() {
    int month, year;
    cout << "Month: ";
    cin >> month;
    
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "Days: 31"; break;
        case 4: case 6: case 9: case 11:
            cout << "Days: 30"; break;
        case 2:
            cout << "Year: ";
            cin >> year;
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                cout << "Days in February: 29 (leap year)";
            } else {
                cout << "Days in February: 28";
            }
            break;
        default: cout << "Invalid month";
    }
    
    return 0;
}