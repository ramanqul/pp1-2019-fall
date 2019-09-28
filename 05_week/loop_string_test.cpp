#include <iostream>

using namespace std;

int main() {
	string s = "Hello World";
	
	//cin >> s;
	
	char c = s[0];
	
	cout << "first character is " 
	     << c << endl;
	
	
	//display every character in string
	for (int i=0;i<s.size();i++) {
		cout << "i=" << i
		     << ", s[i]=" << s[i] << endl; 
	}
	
	return 0;
}











