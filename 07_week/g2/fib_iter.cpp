#include <iostream>
#define ll long long
using namespace std;


//1, 1, 2, 3, 5, 8, 13, 21, 34, ..
int main() {
	int n;
	cin >> n;

	ll prev, curr, next;
	
	prev = 1;
	curr = 1;
	
	for (int i=2;i<n;i++) {
		next = prev + curr;
		prev = curr;
		curr = next;
	}
	
	ll result = curr;
	
	cout << "result is " << result <<endl;
	
	return 0;
}








