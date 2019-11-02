#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector < pair <string, int> > days;
    
    days.push_back( make_pair("Monday", 1));
    days.push_back( make_pair("Tuesday", 2));
    days.push_back( make_pair("Wednesday", 3));
    days.push_back( make_pair("Thursday", 4));
    days.push_back( make_pair("Friday", 5));
    days.push_back( make_pair("Saturday", 6));
    days.push_back( make_pair("Sunday", 7));
    
    
    
    for (vector < pair<string, int> >::iterator it = days.begin();
        it != days.end();
        it++) {
        
        pair<string, int> val = *it;
        
        if (val.second < 6) {
            cout << val.second << " " << val.first << endl;
        }
    
    }
    
    
    
    
    
    
    return 0;
}