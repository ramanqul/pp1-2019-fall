#include <iostream>
#include <queue>

using namespace std;

int main() {
    //Queue - FIFO - first in first out
    //declaration
    queue<string> q;    
    
    //initialization
    q.push("Monday");
    q.push("Tuesday");
    q.push("Wednesday");
    q.push("Thursday");
    
    //iteration
    int cnt = 1;
    while (!q.empty()) {
        string val = q.front();

        cout << cnt << " - " << val << endl;
    
        cnt++;
        q.pop();
    }
    
    
    
    return 0;
}













