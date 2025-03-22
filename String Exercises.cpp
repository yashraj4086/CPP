#include<iostream>
using namespace std;
//int,float,double,bool,string
int main (){
	/* Q1:-write a program to declarre a string variable 
	 greeting and assign it the value "welcome" Then print the valuue of greeting .*/
	
	string a="welcome";
	cout<<"Greeting:"<<a<<endl;
	
	/*Q2:-What does the following code print?
	string name = "Alice";
	cout << name;*/
	string name="alice";
	cout << "Name:"<<name<<endl;
	
	/*Q3:-Modify the above programram 
	to ask the user for their name and then greet them by name.*/
	
	string name;
	cout<<"Enter your name:"<<name;
	cin>> name ;
	cout<<name<<" Nice To Meet You "<<endl;
	
	/*Q4:-Write a program that reads two strings from the user,
	concatenates them, and then prints the result.*/
	int main( ) {
	
    string s1= "hello ";
    string s2= "bye";
    string result  = s1 + s2;
    cout <<"print "<<result;
	
	/*Q5:-Write a program that concatenates the strings 
	"Good" and "Morning" and prints the result.*/
	
	string s1="good ",s2="Morning";
	cout<<""<<s1+s2<<endl;
	
	/*Q6:-What will the following code output?
	string firstName = "John";
	string lastName = "Doe";
	cout << firstName + lastName;*/

	string firstName = "John ";
	string lastName = "Doe";
	cout <<firstName +lastName;
	
	/*Q7:-Write a program that concatenates a user’s 
	first name and last name with a space between them.*/
	string firstname= "Yash ";
	string lastname= "Raj";
	cout << "Name:"<<firstname+lastname;
	
	/*Q8:-Write a program that adds two numbers and prints the result.*/
	int  num1,num2;
	cout<<"Enter 1st Number"<<num1<<endl;
	cin>>num1;
	cout<<"Enter 2nd Number"<<num2<<endl;
	cin>>num2;
	cout<<"Added Two Number :"<<num1+num2<<endl;
	
	/*Q9:-What will this program print?
	string x = "5";
	string y = "10";
	cout << x + y;*/
	
	string _1st  = "5";
	string _2nd = "10";
	cout<<"Print" <<_1st+_2nd<<endl;
	
	/*Q10:-Write a program that concatenates a number (converted to a string) 
	with another string and prints the result.*/
	
   /*"C++ mein bina conversion ke string aur number ko concatenate karna possible nahi hai."*/
   
   /*"C++ mein bina kisi function ke (jaise to_string() ya stringstream) tum ek int aur string ko directly + se jod nahi sakte.
	C++ strict hota hai types ko leke, aur int aur string ko mix match karke concat karne ki permission nahi deta directly."

*/
    int num;
    string text;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter a string: ";
    cin >> text;

    string result = to_string(num) + text;
    cout << "Concatenated result: " << result << endl;

	/*Q11:-What happens if you try to add an integer and a string, like this:

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
	/*Q12:-*/
	int main() {
    int number;
    string text;

    cout << "Enter an integer: ";
    cin >> number;

    cin.ignore();

    cout << "Enter a string: ";
    getline(cin, text); // Use getline to read the entire line, including spaces

    string numberStr = to_string(number);

    string result = numberStr + " " + text; // Add a space for better readability

    cout << "Concatenated result: " << result << endl;

	/*Q13:-*/
	string x = "Hello";
    int y = 5;

    string yStr = to_string(y);

    string result = x + yStr;

    cout << result << endl; // Output: Hello5
    
    
    /*Adding a number (integer) directly to a string in C++ causes an 
	error because the + operator is not defined between a std::string and an int.*/

	/*Q14:-Write a program that prints the length of the string "C++ Program*/
	
	string txt = "Lorem ipsum dolor sit amet, consectetur adipiscing elitsed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	cout << "The length of the txt string is: " << txt.length();
	
	/*Q15:-What does the following code print?
	string txt = "OpenAI";
	cout << text.length();*/
	
	string name="openAi";
	cout<<"Length of openAi"<<name.length();
	
	/*Q16:-Write a program that reads a string from the user and prints its length.*/
	string user_input;
    cout << "Enter a string: ";
    cin >> user_input;
    int string_length = user_input.length();
    cout << "The length of the string is: " << string_length << endl;
    
    /*Q17:-Explain the difference between length() and size() for strings.*/
	
	/*Historical Reasons: The length() function 
	was introduced to make the std::string class more 
	intuitive, as "length" is a common term for strings.

	Consistency: The size() function was added to
	 maintain consistency with other STL containers, 
 	which use size() to return the number of elements.*/

    string str = "Hello";
    cout << "Size: " << str.size() << endl; // Output: 5
    return 0;
    
    /*Q18:-Write a program that accesses and prints 
	the first character of the string "Computer".*/
	
	string myString = "computer";
	cout << myString[0];
	
	//Q19:- Write a program that reads a string from the user and prints its length.
    string user_input;
    cout << "Enter a string: ";
    getline(cin, user_input);
    int string_length = user_input.length();
    cout << "The length of the string is: " << string_length << endl;
    
    /*Q20:-What will the following code output?
	string greeting = "Hello";
	cout << greeting[2];*/
	string greeting = "Hello";
	cout << greeting[1];
	
	/*Q21:-Write a program that prints the last character of the string "Programming".*/
	string name ="character ";
	cout<<"last later"<<name [8];
	
	/*Q22:-*/
	string user_input;
    cout << "Enter a string: ";
    getline(cin, user_input);  
    if (user_input.length() >= 3) {
        cout << "The third character is: " << user_input[2] << endl;
    } else {
        cout << "The string is too short to have a third character." << endl;
    }
    /*Q23*/
    string user_input;
    cout << "Enter a string: ";
    getline(cin, user_input);
    if (!user_input.empty()) {

        user_input[0] = toupper(user_input[0]);
        cout << "Modified string: " << user_input << endl;
    } else {
        cout << "The string is empty." << endl;
    }
    
    /*Q24Write a program that prints a string containing a double quote ("),
	like He said, "Hello!".*/
	string doulbe = "He said, \"Hello!\"";
	cout <<doulbe<<endl;
	
	/*Q25:-What will this code print?
	string txt = "It's a beautiful day!";
	cout<< txt;*/
 	string text= "It's a beautiful day!";
	cout<<text<<endl;
	
	/*26:-Write a program that demonstrates how to use escape sequences like \\, \', and \".
	What will the following code print?
	string txt = "He said, \"Hello World!\"";
	cout << txt;*/
	string text = "He said, \"Hello World!\"";
	cout << ""<<text<<endl;
	
	
}
