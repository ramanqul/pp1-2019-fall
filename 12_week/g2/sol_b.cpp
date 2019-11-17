#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, int> langs;
    
    for (int i=0;i<n;i++) {
        int k;
        cin >> k;
        //calculation
        for (int j=0;j<k;j++) {
            string s;
            cin >> s;
            //check if s exists in langs
            if (langs.find(s) != langs.end()) {
                langs[s]++;
            } else {
                langs[s] = 1;
            }
        }
        
        //print output
        for (map<string, int>::iterator it = langs.begin();
            it != langs.end(); 
            it++) {
            pair<string, int> l = *it;
            
            if (l.second == n) {
                cout << l.first << endl;
            }
        }   
    }
    
}
/*
int a[5];

map<int, int> mp;

a[0] - get by index
mp[key] - get by key

a[0] = 10;
mp[key] = 10;

a[0]++;
mp[key]++;

*/