#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;
    for (int i=0;i<n;i++) {
        int t;
        cin >> t; //read id
        s.insert(t);
        cin >> t; //read cash
    }
    
    cout << s.size() << endl;
}