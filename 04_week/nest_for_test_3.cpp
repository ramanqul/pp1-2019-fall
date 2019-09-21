#include <iostream>

using namespace std;

/*
1+2+3+4+....+n
Sum(n) = n*(n+1)/2;
Sum(10) = 10 * 11 / 2 = 55;

*/

int main() {
	int count = 1;
	//55/2 = at most 27
	for (int i=0;i<10;i++) {
		for (int j=0;j<i;j+=2) {
			count++;
		}
	}		
	cout << count << endl;
	
	return 0;
}





