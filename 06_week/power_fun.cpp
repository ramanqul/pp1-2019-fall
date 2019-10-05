#include <iostream>
using namespace std;

//X^N

int power(int x, int n) {
	int xx = 1;
	for (int i=0;i<n;i++) {
		xx *= x;
	}
	
	return xx;
}

int main() {
	int result = power(10, 5);
	cout << result;
	return 0;
}




