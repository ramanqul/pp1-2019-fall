#include <iostream>
#include <map>

using namespace std;


int main() {
    
    map<string, int> days; //declaration
    days.insert(make_pair("monday", 1));
    days.insert(make_pair("tuesday", 2));
    days.insert(make_pair("wednesday", 3));
    
    //search - O(1) - big O notation 
    //memory - O(2n)
    
    //asking user to input some value (key)
    string day;
    cin >> day;
    //declare iterator
    map<string, int>::iterator it;
    
    it = days.find(day);
    
    //iterator not equals to -1
    if (it != days.end() ) {
        pair<string, int> val = *it;    
        cout << "found:" << val.first << endl;
    }
    
    
    return 0;
}










