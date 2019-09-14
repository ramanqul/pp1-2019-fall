#include <iostream>

using namespace std;

int main() {
	int N = 2;
	
	string location[] = {"Almaty", "Astana"};
	string mood[] = {"sunny", "foggy"};
	int temp[] = {25, 10};
	
	for (int index=0;index<N;++index) {
			
		cout << "It's " << mood[index] 
			 << " in " 
			 << location[index]
			 << " with " << temp[index] 
			 << " degrees" << endl;
	}
}
















