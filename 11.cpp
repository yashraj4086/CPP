#include <iostream>
using namespace std;
 int main (){


/*What happens if you try to add an integer and a string, like this:

	string x = "Hello";
	int y = 5;
	string result = x + y;*/
	
	string x = "Hello";
	int y = 5;
	string result = x + y;
	/*its will be show an Error */
	
	
	/*Incompatible Types:
The + operator is not defined between a std::string and an int. The + operator for std::string only works with:

Another std::string.

A C-style string (const char*).

A character (char).

No Implicit Conversion:

C++ does not automatically convert an int to a std::string. You need to explicitly convert the integer to a string before concatenation.

*/
	}
