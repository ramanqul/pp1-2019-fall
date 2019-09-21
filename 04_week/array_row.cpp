#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a[n]; //create an array of size n
	
	//2,4,6,8,...
	for (int i=1;i<=n;i++) {
		a[i-1] = 2 * i; //write data inside array
	}
	
	//printing contens of array
	for (int i=0;i<n;i++) {
		cout << a[i] <<" ";
	}
	cout << endl;
	
	
	return 0;
}




