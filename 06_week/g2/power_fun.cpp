#include <iostream>

using namespace std;

double power(double x, int n) {
	double xx = 1;
	for (int i=0;i<n;i++) {
		xx *= x;
	}
	
	return xx;
}

int main() {
	double result = power(5, 5);
	cout << result << endl;
	return 0;
}