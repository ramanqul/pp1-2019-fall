#include <iostream>

using namespace std;

int main() {
	
	// int arr[rows][cols]
	
	/*
	[][][][][][]
	[][][][][][]
	[][][][][][]
	[][][][][][]
	[][][][][][]
	*/
	//arr[0][0]; //first element
	//the last element of first row:
	//arr[0][N-1]
	//the first element of second row:
	//arr[1][0]
	
	int ar[10][10];
	/*
	[
		{2,4,6,8,10,..}
		{6,9,12,15,18,..}
		...
		{18, 27, 36, ...}
	]
	*/
	/*
	2x2=4
	2x3=6
	...
	2x10=20
	
	
	*/
	int productOf = 2;
	
	for (int i=1;i<10;i++) {
		arr[0][i] = productOf * i; //2
		arr[1][i] = (productOf+1) * i; //3
		arr[2][i] = (productOf+2) * i;
		arr[3][i] = (productOf+3) * i;
		arr[4][i] = (productOf+4) * i;
		arr[5][i] = (productOf+5) * i;
		arr[6][i] = (productOf+6) * i;
		arr[7][i] = (productOf+7) * i;
	}
	
	for (int i=1;i<10;i++) {
		//TODO: print all elements of two dim array
		//without using nested for loop
	}
	
	return 0;
}




