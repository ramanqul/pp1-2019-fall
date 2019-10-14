#include <iostream>

using namespace std;

string** change2DArray(string** a, int rows, int cols) {
	a[0][0] = "123";
	return a;
}

int main() {
	int rows = 1;
	int cols = 7;

	string names[rows][cols] = {
		{"D", "R", "M", "F", "S", "L", "C"}
	};
	
	string** other_names = change2DArray(names, rows, cols);
	
	cout << other_names[0][0] << endl;
	
	
	return 0;
}








