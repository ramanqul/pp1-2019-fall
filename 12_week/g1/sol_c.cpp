#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;    
    
    map<int, int> stats; //is like array
    
    for (int i=0;i<n;i++) {
        string t;
        int points;
        cin >> t >> points;
        
        //if key exists
        if (stats.find(points) != stats.end()) {
            //increment amount of repetitions
            stats[points]++;
        } else {
            //insert pair with repetitions as 1
            stats[points] = 1;
        }
    }
    //print output     
    for (map<int, int>::iterator it = stats.begin();
        it != stats.end();
        it++) {
    
        pair<int, int> val = *it;
        
        cout << val.first << ": " << val.second << endl;   
    }
}




