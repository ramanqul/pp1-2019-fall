#include <iostream>
#include <cmath>

using namespace std;

void find_diff(int size, int a[], int b[], int c[]) {
	for (int i=0;i<size;i++) {
		c[i] = abs(a[i]	- b[i]);
	}
}

int main() {
	int a[] = {1,2,3,4,5};
	int b[] = {10, 9, 8, 7, 6};
	int c[5];
	
	find_diff(5, a, b, c);
	
	for (int i=0;i<5;i++) {
		cout << c[i] << " ";
	}
	cout << endl;
	
	return 0;
}




