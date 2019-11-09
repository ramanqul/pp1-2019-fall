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

void fun1(int& a) {
    a = 10;
    cout << a << " ";
}

//for each function loops iterator and applies a function to it
int main() {
    vector<int> v(10);
    
    for_each(v.begin(), v.end(), fun1); 
    cout << endl;
    
    displayVector(v);
    
    cout << endl;
    
    return 0;
}





