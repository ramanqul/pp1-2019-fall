#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare_points(pair<int,int> p1, pair<int, int> p2) {
    if (p1.first - p2.first != 0) {
        return  p2.first > p1.first;
    } else {
        return  p2.second > p1.second;
    }
}

int main() {
    
    vector<pair<int, int> > points;
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        int x,y;
        cin >> x >> y;
        
        points.push_back(make_pair(x,y));
    }
    
    sort(points.begin(), points.end(), compare_points);
    
    for (int i=0;i<n;i++) {
        pair<int, int> val = points[i];
        cout << val.first << " " << val.second << endl;
    }
    
    return 0;
}



