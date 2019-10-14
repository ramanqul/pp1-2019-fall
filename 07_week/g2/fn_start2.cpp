#include <iostream>

using namespace std;

//must not have to return a result
//1
void sayHello(string name) {
	cout << "Hello," << name << "!" << endl;
}

void sayHello(string name, int n) {
	for (int i=0;i<n;i++) {
		sayHello(name);
	}
}

int main() {
	
	//sayHello("Bob");
	sayHello("Bob", 10);
	return 0;
}








