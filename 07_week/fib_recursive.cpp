#include <iostream>
#define MEMO_SIZE 1000
using namespace std;
/*
fib(n) = fib(n-1) + fib(n-2);
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, etc.
*/

int memo[MEMO_SIZE];


int fib(int n) {
	if (n < 1) {
		return 0;
	} else if (n == 1) {
		return 1;
	}
	
	if (memo[n] != -1) {
		return memo[n];
	}
	
	int res = fib(n-1) + fib(n-2);
	memo[n] = res;
	
	return res;
}

int main() {
	//init memo
	for (int i=0;i<MEMO_SIZE;i++) {
		memo[i] = -1;
	}
	
	int n;
	cin >> n;
	int result = fib(n);
		
	cout << result << endl;
	
	return 0;
}









