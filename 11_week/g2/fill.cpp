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

//fill() functions will fill vector with some values
int main() {
    int n = 5;
    vector<int> v(n, -1);
    
    displayVector(v);    
    
    fill(v.begin()+1, v.end()-1, 10);
    
    displayVector(v); 
    
    return 0;
}





