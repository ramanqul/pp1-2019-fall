#include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	
	int ab_cents = a * 100 + b;
	int cd_cents = c * 100 + d;
	//not enough
	if (ab_cents > cd_cents) {
		cout << "0 0" << endl;
		return;
	}
	
	int change_cents = cd_cents - ab_cents;
	int dollars = change_cents / 100;
	int cents = change_cents % 100;
	
	cout << dollars << " " << cents << endl;
	
	return 0;
}




