#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//it's like next_permutation function except it does it in DESC order

void displayVector(vector<int> &v) {
    for (int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

//next_permutation function will shuffle vector to create
//a new permutation of it
int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(3);
    v.push_back(3);
    //sort DESC
    sort(v.rbegin(), v.rend());
    
    do {
        
        displayVector(v);    
        
    } while ( prev_permutation(v.begin(), v.end()) );
    
    
    return 0;
}







