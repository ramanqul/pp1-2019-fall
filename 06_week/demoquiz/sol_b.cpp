#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int first = n / 1000;
	int last = n % 10;
	
	int sum = first + last;
	
	cout << sum;
	
	return 0;
}




