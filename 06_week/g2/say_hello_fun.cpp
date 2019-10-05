#include <iostream>

using namespace std;

void say_hello(string name) {
	int vowels_size = 6;
	char vowels[] = {'a','i','e','o','u','y'};// - vowel letters
	int cnt = 0;
	
	for (int i=0;i<name.size();i++) {
		for (int j=0;j<vowels_size;j++) {
			if (name[i] == vowels[j]) {
				cnt++;
				break;
			}
		}
	}
	
	int non_vowels_cnt = name.size() - cnt;
	
	if (cnt >= non_vowels_cnt) {
		cout << "Hello, " << name << endl;
	} else {
		cout << "Bye, " << name << endl;
	}
}

int main() {
	string str;
	cin >> str;
	say_hello(str);
	return 0;
}