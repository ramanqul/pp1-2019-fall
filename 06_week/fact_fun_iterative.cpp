#include <iostream>
using namespace std;

//n!=n*(n-1)*(n-2)*....

int factorial(int n) {
	int f = 1;
	for (int i=1;i<=n;i++) {
		f = f * i;
		//f *= i;
	}
	
	return f;
}

int main() {
	int result = factorial(100);
	cout << result;
	return 0;
}




