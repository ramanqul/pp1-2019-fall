#include <iostream>
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;
	
	int ss[26];
	int tt[26];
	//init arrays
	for (int i=0;i<26;i++) {
		ss[i] = 0;
		tt[i] = 0;
	}	

	//calc amount of letters in s
	for (int i=0;i<s.size();i++) {
		int index = s[i] - 'a';
		ss[index]++;
	}
	//calc amount of letters in t
	for (int i=0;i<t.size();i++) {
		int index = t[i] - 'a';
		tt[index]++;		
	}
	
	bool ok = true;
	//compares two arrays
	for (int i=0;i<26;i++) {
		if (ss[i] != tt[i]) {
			ok = false;
			break;
		}
	}
	
	if (ok) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}




