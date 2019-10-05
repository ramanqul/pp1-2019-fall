#include <iostream>

using namespace std;

//1234 => 1 + 2 + 3 + 4 = 10
int sum_of_digits(int n) {
	if (n <= 0) {
		return 0;
	}
	
	return n%10 + sum_of_digits(n/10);
}

int main() {
	int n;
	cin >> n;
	
	int result = sum_of_digits(n);
	
	cout << result << endl;
	
	return 0;
}