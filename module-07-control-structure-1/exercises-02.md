1. Basic if Statements
Positive Number Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num > 0) cout << "Positive";
}
Negative Number Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num < 0) cout << "Negative";
}
Even Number Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num % 2 == 0) cout << "Even";
}
Odd Number Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num % 2 != 0) cout << "Odd";
}
Divisible by 5:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num % 5 == 0) cout << "Divisible by 5";
}
Greater Than 100:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num > 100) cout << "Greater than 100";
}
Less Than 100:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num < 100) cout << "Less than 100";
}
Equal to 100:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num == 100) cout << "Equal to 100";
}
Not Equal to 100:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num != 100) cout << "Not equal to 100";
}
Zero Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num == 0) cout << "Zero";
}
2. if-else Statements
Odd or Even:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num % 2 == 0) cout << "Even";
    else cout << "Odd";
}
Positive or Negative:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num > 0) cout << "Positive";
    else cout << "Negative";
}
Pass or Fail:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int marks;
    cin >> marks;
    if(marks >= 40) cout << "Pass";
    else cout << "Fail";
}
Leap Year Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int year;
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
        cout << "Leap year";
    else 
        cout << "Not leap year";
}
Vowel or Consonant:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        cout << "Vowel";
    else
        cout << "Consonant";
}
3. else if Statements
Grade Calculator:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int marks;
    cin >> marks;
    if(marks >= 90) cout << "A";
    else if(marks >= 80) cout << "B";
    else if(marks >= 70) cout << "C";
    else if(marks >= 60) cout << "D";
    else cout << "F";
}
Temperature Range:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int temp;
    cin >> temp;
    if(temp < 10) cout << "Cold";
    else if(temp <= 25) cout << "Moderate";
    else cout << "Hot";
}
Age Group:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age;
    cin >> age;
    if(age < 13) cout << "Child";
    else if(age <= 19) cout << "Teen";
    else if(age <= 59) cout << "Adult";
    else cout << "Senior";
}
4. Logical Operators (&&, ||, !)
Positive and Even:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num > 0 && num % 2 == 0) 
        cout << "Positive and even";
}
Divisible by 2 and 3:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num % 2 == 0 && num % 3 == 0)
        cout << "Divisible by 2 and 3";
}
Triangle Validity:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a + b > c && a + c > b && b + c > a)
        cout << "Valid triangle";
    else
        cout << "Invalid triangle";
}
5. Relational Operators
Greater Than:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num > 50) cout << "Greater than 50";
}
Less Than or Equal To:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    if(num <= 25) cout << "Less than or equal to 25";
}
Eligibility for Voting:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age;
    cin >> age;
    if(age >= 18) cout << "Eligible to vote";
    else cout << "Not eligible to vote";
}