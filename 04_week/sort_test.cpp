#include <iostream>

using namespace std;

//1,2,-4,10,8,7
//become: -4,1,2,7,8,10
int main() {
	
	int n;
	cin >> n;
	int a[n];
	for (int i=0;i<n;i++) {
		cin >> a[i];
	}
	
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			
			if (a[i] < a[j]) {
				//swap
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
			
		}
	}
	
	for (int i=0;i<n;i++) {
		cout << a[i] << " ";
	}
	
	cout << endl;
	
}








