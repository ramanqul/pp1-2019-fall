#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, int> p1, pair<string, int> p2) {
    return p1.second > p2.second;
}

int main() {
    int n;
    cin >> n;
    
    vector<pair<string, int> > scores;
    
    for (int i = 0;i<n;i++) {
        string firstname;
        string lastname;
        char variant;
        int points;
        
        cin >> firstname >> lastname >> variant >> points;
        
        string key = firstname + " " + lastname + " " + variant;
        
        scores.push_back( make_pair(key, points));
        
    }
    
    sort(scores.begin(), scores.end(), cmp);
    
    for (int i=0;i<n;i++) {
        pair<string, int> val = scores[i];
        
        cout << (i+1) << ") " << val.first << " " << val.second << endl;
    }
    
    return 0;
}