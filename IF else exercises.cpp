#include<iostream>
using namespace std;
int main (){
	/*Qno;-1 if age >=18 adult else not adult*/
	 int age;
    // Ask the user to input their age
    cout << "Enter your age: ";
    cin >> age;

    // Check if the age is 18 or older
    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are not an adult." << endl;
    }
		


	/*Qno;-2  if fine < 18 good day else good evening */
	    int fine;
    // Ask the user to input a value for 'fine'
    cout << "Enter a value for 'fine': ";
    cin >> fine;

    // Check if 'fine' is less than 18
    if (fine < 18) {
        cout << "Good day!" << endl;
    } else {
        cout << "Good evening!" << endl;
										}
										
	/*Qno;-3 a=10 b=20 if a == both are equal else not equal */										
	 int a = 10; // Assign value 10 to a
    int b = 20; // Assign value 20 to b

    // Check if a and b are equal
    if (a == b) {
        cout << "Both are equal." << endl;
    } else {
        cout << "Both are not equal." << endl;
    }
	/*Qno;-4 x= 0 if x==0 equal else not equal */
	
	 int x = 0; // Assign value 0 to x

    // Check if x is equal to 0
    if (x == 0) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }
	
	
    /*Qno;- z=0 if z! =5 */
    int z = 0; // Assign value 0 to z

    // Check if z is not equal to 5
    if (z != 5) {
        cout << "z is not equal to 5." << endl;
    } else {
        cout << "z is equal to 5." << endl;
    }
    
    

    return 0;
}
	
	