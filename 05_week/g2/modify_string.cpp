#include <iostream>

using namespace std;

int main() {
	string s = "Call me back {}";
	
	string name;
	cin >> name;
	
	s.replace(s.size()-2, name.size(), name);
	
	cout << s << endl;
	
	
	return 0;
}



