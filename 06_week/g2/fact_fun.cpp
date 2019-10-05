#include <iostream>

using namespace std;

//sums numbers from 1 .. N
int factorial(int n) {
	int s = 1;
	for (int i=1;i<=n;i++) {
		s *= i;
	}
	return s;
}


int main() {
	int N;
	cin >> N;
	int result = factorial(N);
	cout << result << endl;
		
	return 0;
}











