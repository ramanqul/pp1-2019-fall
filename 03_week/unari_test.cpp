#include <iostream>

using namespace std;

int main() {
	
	//-, ++, --, !, &, sizeof
	int a = 1;
	a = -a;
	
	bool b = false;
	
	b = !b; //true
	
	bool b2 = true;
	
	if (b & b2) {
		cout << "b and b2" << endl;
	}
	
	int x = 10;
	x = x + 1;
	x++;
	++x;
	
	/*
	Example
	int a = 10;
	int b = 20 + a++; //b = 30
	//case 1: converted into 
	int b = 20 + a;
	a = a + 1;
	
	int b = 20 + ++a; //b = 31
	//case 2: converted into 
	a = a + 1;
	int b = 20 + a;
	*/
	
	int size_of_x = sizeof(char);
	cout << "size of x is " << size_of_x << endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}











