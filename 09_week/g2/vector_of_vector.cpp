#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a[3][3];    
    vector < vector <int> > vv;

    vector<int> v0;
    v0.push_back(1);
    v0.push_back(2);
    v0.push_back(3);
    
    vector<int> v1;
    v1.push_back(11);
    v1.push_back(22);
    v1.push_back(33);
    
    vv.push_back(v0);
    vv.push_back(v1);
    
    for (int i=0;i<vv.size();i++) {
        for (int j=0;j<vv[i].size();j++) {
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}