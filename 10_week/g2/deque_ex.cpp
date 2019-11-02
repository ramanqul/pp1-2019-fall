#include <iostream>
#include <deque>

using namespace std;

int main() {
    //double ended queue = deque
    //palindrom - madam
    deque<char> dq;    
    
    string input;
    cin >> input;
    
    //initializing    
    for (int i=0;i<input.size();i++) {
        dq.push_back(input[i]);
    }
    bool ok = true;
    //d
    while (!dq.empty()) {
        char first = dq.front();
        char last  = dq.back();
        
        dq.pop_front(); //yes
        if (dq.size() > 0) {
            dq.pop_back();
        }
        
        if (first != last) {
            ok = false;
            break;
        }
    }
    
    if (ok) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}





