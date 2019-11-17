#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s1;

    int a;
    cin >> a;
    for (int i=0;i<a;i++) {
        int t;
        cin >> t;
        s1.insert(t);
    }

    int b;
    cin >> b;
    for (int i=0;i<b;i++) {
        int t;
        cin >> t;
        if (s1.find(t) == s1.end()) {
            s1.insert(t);
        } else {
            s1.erase(s1.find(t));
        }
    }

    for (set<int>::iterator it = s1.begin(); it != s1.end();it++) {
        int val = *it;
        cout << val << " ";
    }        

}
















