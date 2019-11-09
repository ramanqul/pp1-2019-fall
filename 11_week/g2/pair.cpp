#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmpStudent(pair<string, int> s1, 
    pair<string, int> s2) {
    
    
    return s1.second > s2.second;
}

void displayVector(vector<pair<string, int> > &v) {
    for (int i=0;i<v.size();i++) {
        pair<string, int> p = v[i];
        cout << p.first << " - " << p.second << endl;
    }
    cout << endl;
}

//pair class is a utility class for storing two values in one object
int main() {
    vector<pair<string, int> > v;
    int n;
    cin >> n;
    for (int i=0;i<n;i++) {
        string name;
        int point;
        cin >> name >> point;
        v.push_back(make_pair(name, point));
    }
    
    sort(v.begin(), v.end(), cmpStudent);
    displayVector(v);
    
    return 0;
}





