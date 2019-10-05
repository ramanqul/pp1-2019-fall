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
	int mi = 0, mj = 0;
	
	//calculation
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (mx < a[i][j]) {
				mx = a[i][j];
				mi = i;
				mj = j;
			}
		}	
	}
	
	cout << mx << endl;
	cout << mi << " " << mj << endl;
}






