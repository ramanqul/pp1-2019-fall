#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int t = 0;
	
	for ( int i=0;i<n;i++  ) {
		int k;
		cin >> k;
		
		if (k > t) {
			t = k;
		}
	}
	
	cout << t << endl;
	
}









