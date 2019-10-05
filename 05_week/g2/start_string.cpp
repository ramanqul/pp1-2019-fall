#include <iostream>
using namespace std;

int main() {
	string s; //declaration
	s = "Hello"; //initialization 
	
	cout << "s=" << s << endl;
		
	string s2 = s;
	cout << "s2=" << s2 << endl;
	string s3(s); //construction based initialization
	cout << "s3=" << s3 << endl;
	
	
	return 0;
}





