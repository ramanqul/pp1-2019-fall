#include <iostream>

using namespace std;

//0, 1, 2, 3, 4 ... = n * (n + 1) / 2 = 10 * 11 / 2 = 55
int main() {
	for (int i=0;i<10;i++) {
		for (int j=0;j<i;j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}