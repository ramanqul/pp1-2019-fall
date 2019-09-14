#include <iostream>

using namespace std;

int main() {
	
	float f = 3.14;
	double d = 3.14;
	
	unsigned long long l;

	//cout << sizeof(l) << endl;
		
	int a; //int = 4 bytes = 4 * 8 bits = 32 bits
	//1 bit = 0 or 1 = 2
	//2^32 = 4294967296
	//-2147483648, 0, 2147483648
	
	int b;
	int c;
	
	cin >> a;
	cin >> b;
	
	/*
	c = a + b;
	c = c * c; //multiplication
	c = a - b; //sub
	c = a / b; //div
	c = a % b; //modulos division
	c = a ^ b; //xor
	*/
	c = a + b;
	cout << "Sum is " << c << endl;
	
	
}


