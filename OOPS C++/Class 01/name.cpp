#include <iostream>
#include <string>
using namespace std;
main(){
//	string name;
//	cout<< "Enter your name: "<<endl;
//	cin>>name;
//	cout<<"Name : "<<name;
	string name;
	cout<< "Enter name: ";
	getline(cin, name);
	cout<<"Name : "<<name;
	return 0;
}
