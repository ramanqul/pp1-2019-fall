#include <iostream>

using namespace std;

int main() {
	int a = 10;
	int aa = 10;
	
	//post increment
	//a++; // a = a + 1;
	//++a; // a = a + 1;
	
	int b = a++ - 10; // 0
	//=================
	/*
	conveted into:
	int b = a - 10;
	a = a +1;
	*/
	cout << "b = " << b << endl;
	
	int c = ++aa - 10; // 1
	/*
	conveted into:
	a = a +1; //11
	int b = a - 10;
	*/
	
	cout << "c = " << c << endl;
	
	//post decrement: a--;
	//and pre decrement --a;
	
	int x = -a + 1;
	
	int size_of_int = sizeof(int);//4 bytes
	int size_of_ll  = sizeof(long long);
	//int size_of_word  = "hello".size();
	
	cout << "size of int is " << size_of_int << endl;
	cout << "size of long long is " << size_of_ll << endl;
	
	return 0;
}