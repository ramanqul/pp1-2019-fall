#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a;
	cin >> a;
	
	bool isZero = (a % 2) == 0; //even or not	
	
	//nested if statement
	if (isZero == true) {
		
		if ( (a >= 2 && a <= 5) || a > 20) {
			cout << "Not Super" << endl;
		} else if (a >= 6 && a <= 20) {
			cout << "Super" << endl;
		}
		
	} else {
		
		cout << "Super" << endl;
		
	}
	
	
	return 0;
}






