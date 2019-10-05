#include <iostream>
using namespace std;
//recursive
//10, 5
//10, 4
//10, 3
//...
//10, 0
//10*10*10*10*..*1
int power(int x, int n) {
	if (n <= 0) {
		return 1;
	}
	
	return x * power(x, n-1);
}

int main() {
	int result = power(10, 5);
	cout << result;
	return 0;
}




