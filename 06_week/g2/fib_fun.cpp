#include <iostream>

using namespace std;

//[0],1,1,2,3,5,8,13,21,...
//f(n) = f(n-1)+f(n-2)

int fib(int n) {
	if (n <= 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	}
	
	return fib(n-1) + fib(n-2);
}

int main() {
	int result = fib(5);
	cout << "fib(5) = " << result << endl;
	return 0;
}