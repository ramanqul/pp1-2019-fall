#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    //0. declaration
    int a[2][2];
    vector< vector<int> > vv;
    
    //1.reading values into array and vector
    for (int i=0;i<2;i++) {
        vector<int> v;
        
        for (int j=0;j<2;j++) {
            int t;
            cin >> t;
            
            a[i][j] = t;
            v.push_back(t);
        }
        
        vv.push_back(v);
    }
    
    
    for (int i=0;i<2;i++) {
        for (int j=0;j<2;j++) {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}