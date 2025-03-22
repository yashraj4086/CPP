#include <iostream>
using namespace std;
 int main (){
	/*Explain the difference between length() and size() for strings.*/
	
	/*Historical Reasons: The length() function 
	was introduced to make the std::string class more 
	intuitive, as "length" is a common term for strings.

	Consistency: The size() function was added to
	 maintain consistency with other STL containers, 
 	which use size() to return the number of elements.*/

    string str = "Hello";
    cout << "Size: " << str.size() << endl; // Output: 5
    return 0;
}	
	
	
	
	
	
	
	
	
