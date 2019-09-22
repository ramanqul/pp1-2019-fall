#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	//declare array
	int a[n][n];
	//reading
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			cin >> a[i][j];
		}
	}
	
	int mx = a[0][0];
	//calculation
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (mx < a[i][j]) {
				mx = a[i][j];
			}
		}	
	}
	
	
	int mx2 = 0;
	
	//calculation
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (mx2 < a[i][j] && mx2 < mx && mx != a[i][j]) {
				mx2 = a[i][j];
			}
		}	
	}
	
	cout << mx2 << endl;
}






