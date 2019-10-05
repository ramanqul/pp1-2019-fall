#include <iostream>

using namespace std;

int main() {
	
	string s;
	getline(cin, s);
	
	string key = "fox";
	int cnt = 0;
	
	int prevPos = 0;
	
	for(  ; prevPos > -1 ;   ) {
		int pos = s.find(key, prevPos);
		cout << pos << endl;
		
		if ( pos != -1) {
			prevPos = pos + 1;
			cnt++;
		} else {
			break;
		}
	}
	
	cout << cnt << endl;
	
	
	return 0;
}