#include <iostream>

using namespace std;

//must not have to return a result
//1
void sayHello(string name) {
	cout << "Hello," << name << "!" << endl;
}
//2
string sayHello(string name, int n) {
	return "Hello";
}

int main() {
	
	sayHello("Bob");
	cout << sayHello("Bob", 10);
	return 0;
}








