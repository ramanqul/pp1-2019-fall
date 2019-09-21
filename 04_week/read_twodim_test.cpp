#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	//declare array n x n
	int a[n][n];
	
	//reading
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cin >> a[i][j];
		}
	}
	
	//printing
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}		
	
	
	
	return 0;
}