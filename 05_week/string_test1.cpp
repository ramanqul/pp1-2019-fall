#include <iostream>

using namespace std;

int main() {
	string s; //declare a string variable
	//empty string with length zero
	
	s = "Hello"; //empty string
	
	string s2 = s; //not valid way of cloning a string
	string s3(s); //valid way of cloning
	cout << "s2=s - " << s2 << endl;
	cout << "s3(s) - " << s3 << endl;
	
	cout << "s.size=" << s.size() << endl; //5
	
	
	
	return 0;
}











