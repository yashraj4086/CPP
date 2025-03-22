#include <iostream>
using namespace std;

int main() {
	
	/* Qno1:-What is a variable in C++?
	Define a variable and explain its purpose in C++.*/

    int age = 10;  // 'age' is a variable of type 'int' that stores the value 25
    cout << "Age: " << age <<endl;  // Output the value of the variable
    
    /*Qno2:-What data type would you use to store an age in C++?
	Give an example of how to declare and initialize such a variable.*/
    
    int apple = 12;  // Declare and initialize an 'int' variable to store age
    cout << "apple: " << apple << endl;  // Output the value of the variable
    
    /*Qno3:-What does the int data type store?
	Provide an example.*/
	
    int number = 42;  // Declare and initialize an 'int' variable
    cout << "The number is: " << number << endl;  // Output the value
    
    /*Qno4:-Explain the difference between float and double data types.*/
    
    float data = 8.123456; /*float only show 6,7 decimal numbers (its depandent on your system) */
    cout << "this is value of float :" <<data <<endl;
    
    double _data = 8.123456789123456;/*double only show 13,14 decimal numbers (its depandent on your system) */
    cout << "this is the value of double : "<< _data << endl;
    
    
    
    /*Qno5:-What data type would you use to store a character?
	Provide an example of how to declare and initialize this variable.*/
	
	char letter = 'Y';  //  'char' variable store a characther.
    cout << "The character is: " << letter << endl;  // 
    
    
    /*Qno6:-What is the default value of a bool variable in C++?
	Provide a short example where true and false values are used.*/
	
	bool happy  = true;   // a bool variable with 'true'
    bool sad = false;    // a bool variable with 'false'

    cout << "happy? " << happy << endl;  // Output: 1 (true)
    cout << "sad? " << sad << endl;     // Output: 0 (false)
	
    
    /*Qno7:-Declare a variable x of type int and assign it the value of 10.*/
    int x= 10;  // 'x'  value 10 with the 'x'
    cout << "The value of x is: " << x << endl;  // 
    
    
    /*Qno8:-How do you assign one value to multiple variables in C++?
	Provide an example using variables a, b, and c.*/
	int a, b, c;
    a = b = c = 22;  // Assign the value 25 to all variables

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
		
    /*Qno9:-What is the purpose of using the const keyword in C++?
	Write a short example where a constant variable is used.*/
    
    const double PI = 3.14159;  // Declare a constant variable
    double radius = 5.0;
    double area = PI * radius * radius;  // Use the constant in a calculation
    cout << "Area of the circle: " << area << endl;
	
	
    
    /*Qno10:-What is the rule for naming variables in C++?
	List at least three naming conventions or rules for valid identifiers.*/
	// Valid variable names
    int studentAge = 20;         
    string student_name = "Mashooq Shar";
    double TotalMarks = 95.5;    

    // Output the values
    cout << "Age: " << studentAge << endl;
    cout << "Name: " << student_name << endl;
    cout << "Marks: " << TotalMarks << endl;
    
}