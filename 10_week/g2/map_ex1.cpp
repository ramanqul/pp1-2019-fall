#include <iostream>
#include <map>
using namespace std;

int main() {
    //declare map
    // c9 => Cloud Nine Team
    // Navi => Natus Vincere
    // FCB => Football Club of Barcelona
    map<string, string> teams;
    
    //initialize/populate map
    teams.insert(
        make_pair("c9", "Cloud Nine")
    );    
    teams.insert(
        make_pair("Navi", "Natus Vincere")
    );    
    teams.insert(
        make_pair("FCB", "Football Club of Barcelona")
    );    
    
    string input;
    cin >> input;
    
    //search
    //memory O(2n)
    map<string, string>::iterator it;
    it = teams.find(input); // Big O(1) Notation Time
    
    if (it != teams.end()) {
        pair<string, string> val = *it;
        cout << "found:" << val.second << endl;
    }
    cout << "All value pairs:" <<endl;
    
    for (map<string, string>::iterator it = teams.begin();
        it != teams.end();
        it++) {
        
        pair<string, string> val = *it;
        cout << "Key:" << val.first 
             << ", Value:" << val.second << endl;

    
    }
    
    
    return 0;
}







