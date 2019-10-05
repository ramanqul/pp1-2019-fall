#include <iostream>

using namespace std;
//custom function
int sum(int n) {
	int s = 0;
	for (int i=1;i<=n;i++) {
		s = s + i;
		//s += i;
	}
	
	return s;
}

int main() {
	int result = sum(10);
	cout << result << endl;
	return 0;
}




