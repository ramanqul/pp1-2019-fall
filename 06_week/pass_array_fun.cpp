#include <iostream>
using namespace std;

void pass_array(int a[], int a_size) {
	for (int i=0;i<a_size;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int b[] = {1,2,3,4,5};
	pass_array(b, 5);
	
	return 0;
}




