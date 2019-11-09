#include <iostream>

using namespace std;

int main() {
    string s;
    int l,r;
    cin >> s >> l >> r;
    
    for (int i = l-1; i < r; i++) {
        s[i]+=' ';
    }
    cout << s;
}