#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void printVector( vector<int> list) {
    for (int i=0;i<list.size();i++) {
        cout << list[i] << " ";
    }
    
    cout << endl;
}

int main() {
    vector<int> v0;
    v0.push_back(2);
    v0.push_back(1);
    v0.push_back(3);
    
    printVector(v0);
    reverse(v0.begin(), v0.end());
    printVector(v0);
    
    return 0;
}