#include <iostream>
#define ll long long
using namespace std;

int fib(int n) {
	if (n < 1) {
		return 0;
	} else if (n == 1) {
		return 1;
	}
	
	return fib(n-1) + fib(n-2);
}

ll fib2(int n, int memo[]) {
	if (n < 1) {
		return 0;
	} else if (n == 1) {
		return 1;
	}
	
	if (memo[n] != -1) {
		return memo[n];
	}
	
	ll res = fib2(n-1, memo) + fib2(n-2, memo);
	
	memo[n] = res;
	
	return res;
}

//1, 1, 2, 3, 5, 8, 13, 21, 34, ..
int main() {
	int n;
	cin >> n;
	int memo[n+1];
	
	for (int i=0;i<=n;i++) {
		memo[i] = -1;
	}
	
	//int result = fib(n);
	ll result = fib2(n, memo);
	
	cout << "result is " << result <<endl;
	
	return 0;
}








