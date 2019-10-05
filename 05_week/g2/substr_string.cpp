#include <iostream>

using namespace std;

int main() {
	string s = "alsjdal<a>Hello World!<a>asjdhakjs!ad a";
	
	//string s2 = s.substr(0, 3); //als
	//string s2 = s.substr(5, 5); //al<a>
	
	
	int start = s.find("<a>");
	int end = s.find("<a>", start+1);
	
	string data = s.substr(start+3, end-start-3);
	cout << data << endl;

	return 0;
}