#include <iostream>

using namespace std;

//sums numbers from 1 .. N
int sum_n(int n) {
	int s = 0;
	for (int i=1;i<=n;i++) {
		s += i;
	}
	return s;
}


int main() {
	int result = sum_n(10);
	cout << result << endl;
		
	return 0;
}











