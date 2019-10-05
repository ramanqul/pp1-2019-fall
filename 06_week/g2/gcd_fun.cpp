#include <iostream>

using namespace std;

/*
27 - 81
3,3,3 - 3,3,3,3
GCD = 27
*/

int gcd(int a, int b) {
    if (a == 0) {
		return b;
	}
	
	return gcd(b%a, a);
}

int main() {
	int a, b;
	cin >> a >> b;
	
	int result = gcd(a, b);
	
	cout << result << endl;
	
	return 0;
}