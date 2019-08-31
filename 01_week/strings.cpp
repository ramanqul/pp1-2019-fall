#include <iostream>

using namespace std;

//https://ascii.cl/

int main() {
	
	string str; //declaration
	
	cin >> str; //reading input from cmd/cli
	
	int size_init1 = sizeof(str); //capture the size of str 
	cout << "init size of " << str << " is equal to " << size_init1 << endl;

	cin >> str; //reading input from cmd/cli

	
	int size_init2 = sizeof(str); //capture the size of str 
	cout << "init size of " << str << " is equal to " << size_init2 << endl;
	
}


