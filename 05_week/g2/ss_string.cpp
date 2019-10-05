#include <iostream>
#include <sstream>

using namespace std;

int main() {
	/*	
	string s = "Hello";
	stringstream ss;
	
	ss << s;
	ss << 2019;
	*/
	//string result = ss.str();
	//cout << result <<endl;
	
	string s = "2019";
	stringstream ss;
	ss << s;
	int year;
	ss >> year;
	
	cout << year+1 << endl;
	
	return 0;
}