#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s; //reading a word
	
	char first = s.at(0);//first character
	//new way is s.front();
	cout << "first=" << first << endl;
	
	char last = s.at(s.size() - 1);//first character
	//for new way is s.back();
	
	cout << "last=" << last << endl;
	
	char lower_k = 'k';
	char upper_k = 'K';
	
	//loop the string for a character
	for (int i=0;i< s.size();i++ ) {
		
		char c = s.at(i);
		if (c == lower_k || c == upper_k) {
			cout << "K exists!" << endl;
			break;
		}
		
		
	}
	
	return 0;
}





