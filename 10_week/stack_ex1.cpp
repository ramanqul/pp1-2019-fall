#include <iostream>
#include <stack>
using namespace std;
//stack - LIFO - last in first out
int main() {
    stack<string> st; //declare stack
    
    //initialize stack
    st.push("Monday");
    st.push("Tuesday");
    st.push("Wednesday");
    st.push("Thursday");
    
    cout << "size of stack is: " << st.size() << endl;
    
    int cnt = 1;
    //searching - iterating
    while (!st.empty()) {
        string val = st.top();
        
        cout << cnt << " - " << val << endl; 
        
        st.pop();
        cnt++;
    }
    
    
    
    return 0;
}





