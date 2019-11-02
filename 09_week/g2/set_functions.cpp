#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    //size() - returns the size of set
    //insert(...) - inserts element into set 
    //erase(...) - removes from range using iterator
    //find 
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    
    int t;
    cin >> t;
    /*
    if (s.find(t) != s.end()) {
        cout << "found it!";
    } else {
        cout << "not found it!";
    }
    */
    if (s.count(t) > 0) {
        cout << "found it!";
    } else {
        cout << "not found it!";
    }
    
    
    return 0;
}