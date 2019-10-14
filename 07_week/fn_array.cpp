#include <iostream>

using namespace std;

int sum(int a[], int a_size) {
	int s = 0;
	for (int i=0;i<a_size;i++) {
		s += a[i];
	}
	return s;
}

int main() {
	int a[] = {1,2,3,4,5};
	int a_size = 5;
	int result = sum(a, a_size);
	cout << "sum = " << result << endl;
	
	return 0;
}





