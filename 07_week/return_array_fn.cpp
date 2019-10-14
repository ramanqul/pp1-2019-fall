#include <iostream>

using namespace std;

int* modifyArray(int a[], int a_size) {
	a[0] = 123;
	return a;
}

int main() {
	int a[] = {1,2,3,4,5};
	int* b = modifyArray(a, 5);
	
	if (a == b) {
		cout << "same pointer for a and b" << endl;
	} else {
		cout << "different pointers" << endl;
	}
	
	cout << b[0] << endl;
	
}








