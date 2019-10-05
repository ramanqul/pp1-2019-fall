#include <iostream>
#include <cmath>
using namespace std;

double euclidean_distance(int x1, int y1,
	int x2, int y2) {
	
	int xx = x1 - x2;
	int yy = y1 - y2;
	
	double result = sqrt(xx*xx+yy*yy);
	
	return result;
}

int main() {
	int x1,y1,x2,y2;

	cin >> x1 >> y1 >> x2 >> y2;
	
	double d = euclidean_distance(x1,y1,x2,y2);
	
	cout << "Result is " << d << endl;
	
	return 0;
}











