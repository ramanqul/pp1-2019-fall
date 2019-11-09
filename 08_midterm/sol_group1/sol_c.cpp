#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    string t(s);
    
    reverse(t.begin(), t.end());
    
    if (s == t) {
        if (s.length() % 2 == 0) {
            cout << "GoodPalindrome";
        } else {
            cout << "NotGoodPalindrome";
        }
    } else {
        cout << "NotPalindrome";
    }
    
    return 0;
}
