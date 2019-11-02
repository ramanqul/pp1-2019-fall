#include <iostream>
#include <stack>

using namespace std;

//import - LIFO - last in first out
int main() {
    //declaration
    stack<string> st;        
        
    //initialization
    st.push("Monday");
    st.push("Tuesday");
    st.push("Wednesday");
    st.push("Thursday");
    
    //iteration
    int cnt = 1;
    while (!st.empty()) {
        string val = st.top();

        cout << cnt << " - " << val << endl;
    
        cnt++;
        st.pop();
    }
    
    
    return 0;
}




