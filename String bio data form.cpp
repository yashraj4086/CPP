#include<iostream>
using namespace std;
int main (){
	string name;
    string father_name ;
    string caste;
    string phone_num;
    string address;
    string city;
    string country;
	string postal_code;	
	
  	cout << "Enter your full Name:" <<endl<<endl;
  	cout<<"Name:-";
    getline(cin, name);

    cout << "Enter your Father's Name:" << endl<<endl;
    cout<<"Father's Name':-";
    getline(cin, father_name);
    
    cout << "Enter your caste:" << endl<<endl;
    cout<<"Caste:-";
    getline(cin, caste);
    
    cout << "Enter your Phone Number:" << endl<<endl;
    cout<<"Number:-";
    getline(cin, phone_num); 
    
    cout << "Enter your Current Address:" << endl<<endl;
    cout<<"Address:-";
    getline(cin, address);

    cout << "Enter your City Name:" << endl<<endl;
    cout<<"City:-";
    getline(cin, city); 

    cout << "Enter your Country Name:" << endl<<endl;
    cout<<"Country:-";
    getline(cin, country); 
    
    cout << "Enter your City Code:" << endl<<endl;
    cout<<"Postal Code:-";
    getline(cin,postal_code); 
    
	cout<<"Check Your BIO Data"<<name +father_name +caste +phone_num +address +city +country +postal_code <<endl;




}