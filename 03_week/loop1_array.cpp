#include <iostream>
using namespace std;

int main() {
	int n = 5;
	int a[n] = {-1,2,-3,0,5};
	int count = 0;
	
	for (int i=0;i<n;i++) {
		if (a[i] > 0) {
			cout << "number " << a[i] << " is positive" << endl;
			count++;
		} else if (a[i] < 0) {
			cout << "number " << a[i] << " is negative" << endl;
		} else {
			cout << "number " << a[i] << " is zero" << endl;
		}
			
	}
	
	cout << count << endl;
	return 0;
}