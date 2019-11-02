#include <iostream>
#include <deque>

using namespace std;
//deque - FIFO and LIFO
int main() {
    string input;
    cin >> input;
    
    //declare queue
    deque<char> dq;
    for (int i=0;i<input.size();i++) {
        dq.push_back(input[i]);
    }        
    
    cout << "size of dq:" << dq.size() << endl;
    
    bool ok = true;
    
    //iterate
    //check if an input is palindrom or not
    // m a d a m
    while (!dq.empty()) {
        char first = dq.front();
        char last  = dq.back();
        cout << "f:" << first << endl;
        cout << "l:" << last << endl;
        
        dq.pop_front();
        if (dq.size() > 0) {
            dq.pop_back();
        }
        
        if (first != last) {
            ok = false;
            break;
        }
    }
    
    if (ok) {
        cout << "is palindrom" << endl;    
    } else {
        cout << "is not palindrom" << endl;
    }
    
    return 0;
}





