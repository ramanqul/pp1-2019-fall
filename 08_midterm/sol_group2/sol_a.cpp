#include <iostream>

using namespace std;

int main () {
    string s;  
    cin >> s;
    
    for (int i=0; i<s.size(); i++){  // loop to refer each letter
        if ((int) s[i] % 2 == 0 ){  // transfer each letter into (int) type and check if this even or not
            cout<<s[i];
        }
    }
    
    return 0;
}