#include <iostream>

using namespace std;

int main() {
	
	char c;
	cin >> c;
	
	int ascii_code_of_c = (int) c; //down cast to int type

	cout << "ascii code of " << c 
		 << " is " << ascii_code_of_c;
	
	
	
}