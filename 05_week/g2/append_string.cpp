#include <iostream>

using namespace std;

int main() {
	
	string s1 = "Hi";
	string s2;
	cin >> s2;
	
	//Hi, Raman!
/*
	//first way
	string s3;
	s3.append(s1);
	s3.append(",");
	s3.append(s2);
	s3.append("!");
	
	cout << s3 << endl;
*/
	//second way
	string s3 = "Welcome!";
	s3 = s1 + "," + s2 + "!";
	
	cout << s3 <<endl;
	
	return 0;
}




