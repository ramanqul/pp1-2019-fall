#include <iostream>

using namespace std;
/*
fib(n) = fib(n-1) + fib(n-2);
0, 1, 1, 2, 3, 5, 8, 13, 21,..
*/

int main() {
	int prev, cur, next;
	prev = 0;
	cur = 1;
		
	int n;

	
	for (int i=0;i<n;i++) {
		next = cur + prev;
		prev = cur;
		cur = next;
	}
	
	cout << cur << endl;
	
	return 0;
}









