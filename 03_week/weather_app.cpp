#include <iostream>
using namespace std;

int main() {
	int temp[] = {30, 15};
	string mood[] = {"sunny", "foggy"};
	string location[] = {"Almaty", "Astana"};
	
	int index = 1;
	//index [0:n)
	
	cout << "It's " << mood[index] << endl
		 << "Tempreture in " << location[index]
         << " is " << temp[index] << endl;	
	
	return 0;
}
