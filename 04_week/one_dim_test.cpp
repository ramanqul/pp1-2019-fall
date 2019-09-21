#include <iostream>

using namespace std;

int main() {
	char alphabet[26]; //trash info
	
	char A = 'a';
	
	int A_ascii = (int) A;
	int B_ascii = A_ascii + 1;
	
	cout << "Ascii of A is " << A_ascii << endl;
	
	char B = (char) B_ascii; //casting operation
	cout << "Ascii of B is " << B_ascii
	     << " and character is " << B << endl;
	
	
	for (int i=0;i<26;i++) {
		int ascii = A_ascii + i;
		char c = (char) ascii;
		alphabet[i] = c;
	}
	
	cout << "What's inside array:" << endl;
	for (int i=0;i<26;i++) {
		cout << alphabet[i] << endl;
	}
	
	
	return 0;
}




