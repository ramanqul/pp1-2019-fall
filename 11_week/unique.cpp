#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void displayVector(vector<int> &v) {
    for (int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

bool isEqual(int a, int b) {
    return a == b;
}

int main() {
    int len = 5;
    int a[len] = {9,9,1,2,2};

    vector<int> v(a, a + len);

    vector<int>::iterator bound;
    bound = unique(v.begin(), v.end());

    vector<int>::iterator it;
    for(it = v.begin(); it != bound; it++) {
        cout << (*it) << " ";
    }
    
    
    return 0;
}




