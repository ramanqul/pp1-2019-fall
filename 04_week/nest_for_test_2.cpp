#include <iostream>

using namespace std;
/*
2 6 8
4 16 32
8 24 64
*/
int main() {
	//How many times it will iterate? A: 100
	
	for (int row=1;row<=10;row++) {
		for (int col=1;col<=10;col++) {
			int product = row * col;
			cout << product << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}