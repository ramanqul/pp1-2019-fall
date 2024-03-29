#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    set<int> s(v.begin(), v.end());
    
    for(int i=0;i<10;i++) {
        int t;
        cin >> t;
        s.insert(t);
    }
    
    for (set< int >::iterator it = s.begin();
        it != s.end();
        it++) {
        int val = *it;
        cout << val << " ";
    }
    cout << endl;
    /*Conclustion:
        Set always stores unique values not like vector
    */
    
    return 0;
}