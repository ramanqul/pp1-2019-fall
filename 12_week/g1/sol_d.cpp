#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int> dq;
    
    for (int i=0;i<n;i++) {
        string cmd;
        cin >> cmd;
        
        //check commands
        if (cmd == "pushfront") {
            //pushfront X - to add some number X at the 
            //beginning of the Deque, and output OK.
            int x;
            cin >> x;
            dq.push_front(x);
            cout << "OK" << endl;
        } else if (cmd == "pushback") {
            //pushback X - to add some number X at the end 
            //of the Deque, and output OK.
            int x;
            cin >> x;
            dq.push_back(x);
            cout << "OK" << endl;
        } else if (cmd == "popfront") {
            //popfront - to output the first element of the Deque, 
            //and then delete it. 
            //If Deque is empty just output ERROR.
            if (dq.empty()) {
                cout << "ERROR" << endl;
            } else {
                cout << dq.front() << endl;
                dq.pop_front();
            }
        } else if (cmd == "popback") {
            //popback - to output the last element of the Deque, 
            //and then delete it. 
            //If Deque is empty just output ERROR.
            if (dq.empty()) {
                cout << "ERROR" << endl;
            } else {
                cout << dq.back() << endl;
                dq.pop_back();
            }
        } else if (cmd == "front") {
            //front - to output the first element of the Deque. 
            //If Deque is empty just output ERROR.
            if (dq.empty()) {
                cout << "ERROR" << endl;
            } else {
                cout << dq.front() << endl;
            }
        } else if (cmd == "back") {
            //back - to output the last element of the Deque. 
            //If Deque is empty just output ERROR.
            if (dq.empty()) {
                cout << "ERROR" << endl;
            } else {
                cout << dq.back() << endl;
            }
        } else if (cmd == "size") {
            cout << dq.size() << endl;
        } else if (cmd == "clear") {
            dq.clear();
            cout << "OK" << endl;
        }
    }
        
    return 0;
}