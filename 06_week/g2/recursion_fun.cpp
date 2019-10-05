#include <iostream>

using namespace std;
/*
sum_n(5) =>
    5 + sum_n(4) =>
	    4 + sum_n(3) =>
		    3 + sum_n(2) =>
			    2 + sum_n(1) => 
				    1 + sum_n(0) =>
					    0
*/
int sum_n(int n) {
	if (n<=0) {
		return 0;
	}
	
	return n + sum_n(n-1);
}

int main() {
	int n;
	cin >> n;
	int result = sum_n(n);
	cout << result << endl;
	
	return 0;
}