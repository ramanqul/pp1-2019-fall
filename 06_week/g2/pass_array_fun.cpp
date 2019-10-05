#include <iostream>

using namespace std;

void print(int size_a, int a[]) {
	for (int i=0;i<size_a;i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void modify(int a, int b) {
	a += 10;
	b = 0;
}

void modify2(int size_a, int a[]) {
	a[0] = 100;
}

int main() {
	int a[] = {1,2,3,4,5,6};
	int size = 6;
	cout << "before:" << endl;
	print(size, a);
	
	modify2(size, a);
	
	cout << "after:" << endl;
	print(size, a);
	
	/*	
	int a = 100;
	int b = 50;
	
	modify(a, b);
	cout << "a=" << a << " ,b=" << b << endl;
	*/
		
	return 0;
}











