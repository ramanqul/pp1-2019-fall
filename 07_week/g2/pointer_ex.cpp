#include <iostream>

using namespace std;

int main() {
	
	int n = 100;
	//* - pointer
	//& - reference
	int* addressOfN = &n;
	
	cout << "value:" << n 
	     << endl
		 << "address:" << addressOfN
		 << endl;
	
	int nn = *addressOfN;
	cout << "value of nn:" << nn << endl;	 
		 
	return 0;
}








