#include <iostream>
#include <sstream>

using namespace std;

int main() {
	stringstream ss;
	
	//ss << "KBTU";
	//ss << 2019;
	//string result = ss.str();
	//cout << result << endl;
	
	ss << "2019";
	
	int year;
	
	ss >> year;
	
	cout << year <<endl;
	
	
	return 0;
}



