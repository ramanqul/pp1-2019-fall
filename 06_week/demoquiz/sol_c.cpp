#include <iostream>
using namespace std;

int main() {
	float n;
	cin >> n;
	
	int all_cents = n * 100;
	int dollars = all_cents / 100;
	int cents = all_cents % 100;
	
	cout << dollars << " " << cents << endl;
	
	return 0;
}




