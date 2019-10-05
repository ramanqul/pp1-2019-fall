#include <iostream>
using namespace std;
//1234 => 1 + 2 + 3 + 4 = 10
//1234 => 4 + 123 => 4 + 3 + 12 =>
//     => 4 + 3 + 2 + 1
//	   => 4 + 3 + 2 + 1 + 0
	   
int sum_of_digits(int n) {
	if (n <= 0) {
		return 0;
	}
	
	return n % 10 + sum_of_digits(n/10);
}

int main() {
	int result = sum_of_digits(1234);
	cout << result << endl;
	return 0;
}




