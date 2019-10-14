#include <iostream>

using namespace std;

void printArray(string arr[], int arr_size) {
	//int size = sizeof(arr)/sizeof(int);
	for (int i=0;i<arr_size;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

string* changeArray(string a[], int a_size) {
	a[0] = "123";
	return a;
}

int main() {
	string names[] = {"D", "R", "M", "F", "S", "L", "C"};
	int names_size = 7;
	
	printArray(names, names_size);
	
	string* other_names = changeArray(names, names_size);
	
	cout << "the first element is " << other_names[0] << endl;
	
	printArray(other_names, names_size);
	
	//compare the pointers
	if (names == other_names) {
		cout << "arrays are equal" << endl;
	}
	
	
	
	return 0;
}








