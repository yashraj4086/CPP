#include <iostream>
using namespace std;
//int,float,double,bool,string
int main() {
	
    string city;
    string country;

    cout << "Enter Your City:" << endl;
    getline(cin, city);

    cout << "Enter Your country:" << endl;
    getline(cin, country);

    cout << city + " " + country; // Adding a space between name and lastname

    return 0;
}
