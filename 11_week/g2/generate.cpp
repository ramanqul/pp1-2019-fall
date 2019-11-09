#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int nextRandomNumber() {
    return rand() % 10 + 1;
}

void displayVector(vector<int> &v) {
    for (int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v(10);
    
    srand(time(0));

    generate(v.begin(), v.end(), nextRandomNumber);
    displayVector(v);
    
    //sorting part
    sort(v.begin(), v.end()); //sort ASC order
    //sort(v.rbegin(), v.rend()); //sort DESC order
    displayVector(v);
    
    
    return 0;
}





