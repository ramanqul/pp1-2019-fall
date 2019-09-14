#include <iostream>

using namespace std;

int main() {
	
	char c;
	cin >> c;
	
	int d1 = 'A' - c; // {A,B,C, ...} //65
	int d2 = 'a' - c; // {a,b,c, ...} //97
	
	int dm = min(d1, d2);
	//how to convert character into upper case?
	
}