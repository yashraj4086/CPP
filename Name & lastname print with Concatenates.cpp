#include<iostream>
using namespace std;
//int,float,double,bool,string
int main (){
	
	//Name & lastname print with Concatenates
	string name;
	string lastname;
	
	cout <<"Enter Your Name:"<<endl;
	getline(cin, name);
	
	cout <<"Enter Your LastName:"<<endl;
	getline(cin, lastname);
	
	cout<< name + " " + lastname;
	//+"add a more space in this double quotes" 
	//use for a space

}