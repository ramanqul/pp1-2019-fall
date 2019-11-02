#include <iostream>
#include <queue>

using namespace std;
//queue - FIFO - first in first out
int main() {
    //declare queue
    queue<string> q;
    
    //initialize queue
    q.push("Monday");
    q.push("Tuesday");
    q.push("Wednesday");
    q.push("Thursday");
    
    //iterate
    int cnt = 1;
    
    for (string val = q.front(); 
        !q.empty() ;
        val = q.front(),
        cnt++) {
        
        cout << cnt << " - " << val << endl;
        q.pop();
    }
    
    
    
    return 0;
}





