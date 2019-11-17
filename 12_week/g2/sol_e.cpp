#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> st;
    
    for (int i=0;i<n;i++) {
        
        int cmd;
        cin >> cmd;
        
        if (cmd == 1) {
            int x;
            cin >> x;
            
            st.push(x);
            cout << "Inserted!" << endl;
        } else if (cmd == 2) {
            cout << "Top " << st.top() << endl;
        } else if (cmd == 3) {
            cout << "Deleted " << st.top() << endl;
            st.pop();
        } else if (cmd == 4) {
            cout << st.size() << endl;
        }
    }
    
    while (!st.empty()) {
        int val = st.top();
        cout << val << " ";
        st.pop();
    }
    
	return 0;
}