#include <iostream>

using namespace std;

int main() {
	string s1;
	string s2;
	
	cin >> s1 >> s2;
	//is substring?
	
	if (s1.find(s2) != -1) {
		cout << "is substring" << endl;
	} else {
		cout << "not a substring!" << endl;
	}

	
	return 0;
}