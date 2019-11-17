#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s1;
    set<int> s2;
    set<int> s3;

    int a;
    cin >> a;
    for (int i=0;i<a;i++) {
        int t;
        cin >> t;
        s1.insert(t);
        s3.insert(t);
    }

    int b;
    cin >> b;
    for (int i=0;i<b;i++) {
        int t;
        cin >> t;
        s2.insert(t);
        s3.insert(t);
    }

    for (set<int>::iterator it = s3.begin(); it != s3.end();it++) {
        int val = *it;
        
        if (s1.find(val) == s1.end() ||
            s2.find(val) == s2.end()) {
            
            cout << val << " ";
        
        }

    }        

}
















