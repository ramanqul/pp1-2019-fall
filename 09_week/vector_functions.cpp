#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> &v) {
    for (int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
    
    cout << endl;
}

int main() {
    //pop_back 3.1. Create vector, push elements 
    //and print 3.2. Example of pop from vector
    //insert, erase, clear, sort, pair, vector of pairs
    vector<int> v; //declare it using empty constructor
    v.push_back(2); //append new elements
    v.push_back(1); //append new elements
    v.push_back(7); //append new elements
    v.push_back(3); //append new elements
    v.push_back(9); //append new elements
    v.push_back(8); //append new elements
    
    
    //1.pop back
    /*
    printVector(v);
    v.pop_back(); //removes last element from vector
    printVector(v);
    */
    /*
    printVector(v);
    v.insert(v.end()-1, 100); //inserts into position
    printVector(v);
    */
    /*
    printVector(v);
    //v.erase(v.begin()); //removes elements from vector
    v.erase(v.begin()+2, v.end()-1); //removes elements from vector
    printVector(v);
    */
    /*
    printVector(v);
    v.clear(); //empties whole vector
    printVector(v);
    */
    /*
    printVector(v);
    //sort in ascending order 1,2,3,4,5
    //sort(v.begin(), v.end()-2);
    //sort in descending order 1,2,3,4,5
    sort(v.rbegin()+2, v.rend()); //up to last two elements
    printVector(v);
    */
    
    vector< pair<string, int> > days;
    
    days.push_back(make_pair("Monday", 1));
    days.push_back(make_pair("Tuesday", 2));
    days.push_back(make_pair("Wednesday", 3));
    days.push_back(make_pair("Thursday", 4));
    days.push_back(make_pair("Friday", 5));
    days.push_back(make_pair("Saturday", 6));
    days.push_back(make_pair("Sunday", 7));
    
    
    //print even week days
    for (vector< pair<string, int> >::iterator it = days.begin();
        it != days.end();
        it++) {
    
        pair<string, int> val = *it;

        if (val.second % 2 == 0) {
            cout << val.second << " " << val.first << endl;
        }
    }
    
    
    
    
    
    return 0;
}