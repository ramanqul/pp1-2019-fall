#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a;
	
	cin >> a;
	
	bool isZero = (a % 2) == 0;
	if (a == 0) {
		cout << "None" << endl;
	} else if (isZero == true) {
		cout << "Even" << endl;
	} else {
		cout << "Odd" << endl;
	}
	
	return 0;
}






