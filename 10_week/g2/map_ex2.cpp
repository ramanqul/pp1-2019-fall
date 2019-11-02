#include <iostream>
#include <map>
#include <fstream>

using namespace std;

string get_name(string full_name) {
    int start = full_name.find(" ");
    int end = full_name.find(" ", start + 1);
    return full_name.substr(start+1, end - start - 1);
}

int main() {
    std::ifstream in("names.txt");

    map<string, int> names;
    string line;
    
    //string sample = "Arapbai Guldana Gabidinovna";
    //cout << "$" << get_name(sample) << "$" << endl;
    
    while (getline(in, line)) {
        string name = get_name(line);
        map<string, int>::iterator it;
        it = names.find(name);
        
        if (it != names.end()) {
            it->second++;
        } else {
            names.insert( make_pair(name, 1) );
        }
    }        
        
    for (map<string, int>::iterator it = names.begin();
        it != names.end();
        it++) {
        
        pair<string, int> val = *it;
        cout << val.first << "   " << val.second << endl;
    }
    
    
        
    
    
    return 0;
}




