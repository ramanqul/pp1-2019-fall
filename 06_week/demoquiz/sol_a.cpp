#include <iostream>
using namespace std;

int main() {
	int a[6];
	//init array by zero
	for (int i=0;i<6;i++) {
		a[i] = 0;
	}
	
	int n;
	cin >> n;
	int cnt = 0;
	//6 => 011 => reverse => 110
	while(n != 0) {
		int rem = n % 2;
		a[cnt++]=rem;
		n /= 2;
	}
	
	int zeros = 0;
	for (int i=0;i<6;i++) {
		if (a[i] == 0) {
			zeros++;
		}
	}
	
	cout << zeros;
	
	return 0;
}




