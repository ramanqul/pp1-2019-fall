#include <iostream>

using namespace std;

void sayHello(string name) {
	cout << "Hello," << name << "!" << endl;
}

void sayHello(string name, int n) {
	for (int i=0;i<n;i++) {
		sayHello(name);
	}
}

int main() {
	string name;
	int n;
	cin >> name;
	cin >> n;
	
	sayHello(name, n);
	
	return 0;
}