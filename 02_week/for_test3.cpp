#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int amount = 0;
	
	for ( int i=0;i<n;i++  ) {
		int k;
		cin >> k;
		//k=100
		while (k != 0) {
			int d = k % 10; //1
			if (d == 0) {
				amount++; //2
			}
			
			k = k / 10; //k=0
		}			
	}
	
	cout << amount << endl;
	
}









