#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> students;

    int n;
    cin >> n;
    
    double avg = 0;
    
    //cout << "step 1" << endl;
    
    for (int i = 0;i<n;i++) {
        string name;
        int points;
        
        cin >> name >> points;
        avg += points;
        
        students[name] = points; //alternative inserts
    }
    
    //cout << "step 2" << endl;
    avg /= n; //calculate average
    
    for (map<string, int>::iterator it = students.begin();
        it != students.end();
        it++) {
     
        pair<string, int> val = *it;
        
        if (val.second >= avg) {
            cout << val.first << " passed"<< endl;
        } else {
            cout << val.first << " failed"<< endl;
        }
     
    }
    
    return 0;
}