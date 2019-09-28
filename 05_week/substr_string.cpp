#include <iostream>

using namespace std;

int main() {
	string s = "abc123123123quiz";
	int start = s.find("abc") + 3; //length of abc
	int end = s.find("quiz");
	//takes starting index and length of characters
	string result = s.substr(start, end - start);
	cout << result << endl;
	
	return 0;
}



