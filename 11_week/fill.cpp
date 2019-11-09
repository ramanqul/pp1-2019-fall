#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

void displayMap(map<int, int> &mp) {
    for (map<int,int>::iterator it = mp.begin();
        it != mp.end();
        it++) {
        
        pair<int, int> val = *it;
        cout << "(" << val.first << "," 
             << val.second << ")" << endl;
        
    }
}

int main() {
/*
    vector<int> v(10, -1);
    
    displayVector(v);
    
    fill(v.begin(), v.end(), -2);
    
    displayVector(v);
*/

    map<int, int> points;
    
    //rule of map
    //map[key]=value
    
    points[-1] = -1;
    points[1] = 1;
    points[2] = 2;
    points[3] = 3;
    
    displayMap(points);
    
    //fill(points.begin(), points.end(), make_pair(0,0));
    
    
    return 0;
}



