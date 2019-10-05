#include <iostream>
using namespace std;
//recursive
//10 - 40
//2,5 - 2, 2, 2, 5 

//144 - 240
//96 - 144
//48 - 96
//0, 48
int gcd(int a, int b) {
	if (a == 0) {
		return b;
	}
	
	return gcd(b%a, a);
}

int main() {
	int a,b;
	cin >> a >> b;
	int result = gcd(a, b);
	cout << result;
	return 0;
}




