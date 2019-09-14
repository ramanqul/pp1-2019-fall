#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a[n];
	//reading into array
	for (int i=0;i<n;i++) {
		cin >> a[i];
	}
	int m = a[0];
	int index = 0;
	//finding maximum
	for (int i=0;i<n;i++) {
		if (a[i] > m) {
			m = a[i];
			index = i;
		}
	}
	
	cout << m << endl;
	cout << index << endl;
	
	return 0;
}









