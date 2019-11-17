#include <iostream>
#include <map>

using namespace std;

int main(){
    //name, scores
    map<string, int> m1;
    int n;
    cin >> n;
    
    for (int i=0;i<n;i++) {
        string name;
        int score;
        cin >> name >> score;
        
        if (m1.find(name) != m1.end()) {
            m1[name] += score;
        } else {
            m1[name] = score;
        }
    }
    map<int, string> m2;
    for (map<string, int>::iterator it = m1.begin();
        it != m1.end();
        it++) {
        pair<string, int> val = *it;
        m2.insert( make_pair(val.second, val.first));
    }
    
    for (map<int, string>::reverse_iterator it = m2.rbegin();
        it != m2.rend();
        it++) {
        pair<int, string> val = *it;
        
        cout << val.second << " " << val.first << endl;
    }
    
    
	return 0;
}