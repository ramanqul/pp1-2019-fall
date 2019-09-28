#include <iostream>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	string key = "fox";
	/*
	if (s.find(key) != string::npos) {
		cout << "contains " << key;
	} else {
		cout << "doesn't contain " << key;
	}*/
	/*
	int startFrom = 7;
	
	if (s.find(key, startFrom) != string::npos) {
		cout << "contains " << key;
	} else {
		cout << "doesn't contain " << key;
	}
	*/
	int startFrom = 0;
	int cnt = 0;
	for ( ;startFrom > -1; ) {
		cout << startFrom << endl;
		startFrom = s.find(key, startFrom);	
		//it found something
		if (startFrom > -1) {
			startFrom++;
			cnt++;
		}
	}
	
	cout << cnt << endl;
	
	return 0;
}











