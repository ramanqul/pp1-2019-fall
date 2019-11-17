#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    int mx;
    cin >> mx;
    v.push_back(mx);
    for (int i=0;i<n-1;i++) {
        int t;
        cin >> t;
        v.push_back(t);
        
        mx = max(mx, t);
    }
    
    int cnt = count(v.begin(), v.end(), mx);
    cout << mx << " " << cnt << endl;
}