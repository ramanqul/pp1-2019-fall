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
int main() {
    int a[5] = {-1, 0, 10, 7, 12};
    
    vector<int> v(a, a+5); //creat vector from array
    
    displayVector(v);
    //rotate(v.begin(), v.begin()+2, v.end()); //left side rotation
    rotate(v.begin(), v.end()-1, v.end()); //right side rotation
    displayVector(v);
    
    return 0;
}





