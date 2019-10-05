#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	string s1 = "UTBK";
	cout <<s1<<endl;
	reverse(s1.begin(), s1.end());
	
	cout << s1;
		
	return 0;
}