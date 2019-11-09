#include <iostream>

using namespace std;

int main(){
	int a = 1, b = 1;
	int n;
	
	cin >> n;
	
	if (n < 0) {
        cout << "NO";
    } else if (n == 0 || n == 1) {
		cout << "YES";
	} else {
		
		while (true){
			
			int tmp = a;
			a = b;
			b += tmp;
			
            if (b == n) {
				cout << "YES";
				break;
			} else if (b > n) {
				cout << "NO";
				break;
			}
			
		}
	}
}
