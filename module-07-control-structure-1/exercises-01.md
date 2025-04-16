1. Relational Operators
Greater Than:
cpp
Copy
#include<iostream>
int main() {
    int num;
    std::cin >> num;
    std::cout << (num > 50);
}
Less Than:
cpp
Copy
#include<iostream>
int main() {
    int num;
    std::cin >> num;
    std::cout << (num < 100);
}
Equal To:
cpp
Copy
#include<iostream>
int main() {
    int num;
    std::cin >> num;
    std::cout << (num == 10);
}
Not Equal To:
cpp
Copy
#include<iostream>
int main() {
    int num;
    std::cin >> num;
    std::cout << (num != 0);
}
Greater Than or Equal To:
cpp
Copy
#include<iostream>
int main() {
    int num;
    std::cin >> num;
    std::cout << (num >= 75);
}
Less Than or Equal To:
cpp
Copy
#include<iostream>
int main() {
    int num;
    std::cin >> num;
    std::cout << (num <= 25);
}
Age Check:
cpp
Copy
#include<iostream>
int main() {
    int age
add std
Here are the complete solutions with std:: prefix for all standard library uses, as requested:

1. Relational Operators
Greater Than:
cpp
Copy
#include<iostream>
int main() {
    int num;
    std::cin >> num;
    std::cout << (num > 50);
}
Less Than:
cpp
Copy
#include<iostream>
int main() {
    int num;
    std::cin >> num;
    std::cout << (num < 100);
}
Equal To:
cpp
Copy
#include<iostream>
int main() {
    int num;
    std::cin >> num;
    std::cout << (num == 10);
}
Not Equal To:
cpp
Copy
#include<iostream>
int main()
don't use std::  add using namepace std
Here are the solutions with using namespace std instead of std:: prefixes:

1. Relational Operators
Greater Than:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num > 50);
}
Less Than:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num < 100);
}
Equal To:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num == 10);
}
Not Equal To:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num != 0);
}
Greater Than or Equal To:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num >= 75);
}
Less Than or Equal To:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num <= 25);
}
Age Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age;
    cin >> age;
    cout << (age == 18);
}
Temperature Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int temp;
    cin >> temp;
    cout << (temp < 0);
}
Score Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int score;
    cin >> score;
    cout << (score == 100);
}
Negative Number Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num < 0);
}
Vowel Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    cout << (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
2. Logical Operators
AND Operator (&&):
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num >= 10 && num <= 20);
}
OR Operator (||):
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num % 2 == 0 || num % 5 == 0);
}
NOT Operator (!):
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num != 0);
}
Combined AND and OR:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << ((num >= 10 && num <= 20) || (num >= 30 && num <= 40));
}
Eligibility for Voting:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age;
    bool citizenship;
    cin >> age >> citizenship;
    cout << (age >= 18 && citizenship);
}
Leap Year Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int year;
    cin >> year;
    cout << ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}
Temperature Range:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int temp;
    cin >> temp;
    cout << (temp < 0 || temp > 40);
}
Number Range:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num < 1 || num > 100);
}
Eligibility for Scholarship:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int marks, attendance;
    cin >> marks >> attendance;
    cout << (marks > 90 && attendance > 95);
}
3. Combining Relational and Logical Operators
Positive and Even:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num > 0 && num % 2 == 0);
}
Divisible by 3 and 5:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num % 3 == 0 && num % 5 == 0);
}
Age and Salary Check:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age, salary;
    cin >> age >> salary;
    cout << (age >= 21 && salary > 50000);
}
Number Range and Odd:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    cout << (num >= 10 && num <= 20 && num % 2 != 0);
}
Eligibility for Admission:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int marks, age;
    cin >> marks >> age;
    cout << (marks >= 80 && age <= 25);
}
4. Real-World Scenarios
Eligibility for Driving License:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age;
    bool hasLearnerPermit;
    cin >> age >> hasLearnerPermit;
    cout << (age >= 18 && hasLearnerPermit);
}
Eligibility for Credit Card:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age, income;
    cin >> age >> income;
    cout << (age >= 21 && income > 30000);
}
Eligibility for Movie Ticket Discount:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age;
    cin >> age;
    cout << (age < 12 || age > 60);
}
Eligibility for Gym Membership:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age;
    bool healthCheck;
    cin >> age >> healthCheck;
    cout << (age >= 16 && healthCheck);
}
Eligibility for Loan:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age, income, creditScore;
    cin >> age >> income >> creditScore;
    cout << (age >= 25 && income > 50000 && creditScore > 700);
}
Eligibility for Scholarship:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int marks, attendance;
    bool extracurricular;
    cin >> marks >> attendance >> extracurricular;
    cout << (marks > 90 && attendance > 95 && extracurricular);
}
Eligibility for Discount:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age, purchase;
    cin >> age >> purchase;
    cout << (age > 60 || purchase > 1000);
}
Eligibility for Job:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age, experience;
    bool degree;
    cin >> age >> degree >> experience;
    cout << (age >= 22 && degree && experience >= 2);
}
Eligibility for Admission:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int marks, age;
    cin >> marks >> age;
    cout << (marks >= 80 && age <= 25);
}
Eligibility for Voting:
cpp
Copy
#include<iostream>
using namespace std;
int main() {
    int age;
    bool citizenship;
    cin >> age >> citizenship;
    cout << (age >= 18 && citizenship);
}