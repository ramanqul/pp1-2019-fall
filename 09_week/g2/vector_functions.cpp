#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector( vector<int> list) {
    for (int i=0;i<list.size();i++) {
        cout << list[i] << " ";
    }
    
    cout << endl;
}

int main() {
    vector< int > v;
    v.push_back(10);
    v.push_back(5);
    v.push_back(2);
    v.push_back(4);
    v.push_back(4);
    v.push_back(1);
    /*
    printVector(v);
    cout << "v.size()=" << v.size() << endl;
    v.push_back(30);
    cout << "v.size()=" << v.size() << endl;
    printVector(v);
    */
    /*
    printVector(v);
    v.pop_back();
    printVector(v);
    */
    /*
    printVector(v);
    v.insert(v.begin(), 40); //insert into begin of vector
    printVector(v);
    v.insert(v.end(), -10); //insert into end of vector
    printVector(v);
    v.insert(v.end()-1, 9); //insert into prelast position of vector
    printVector(v);
    */
    /*
    printVector(v);
    v.erase(v.begin()); //removes first element from v
    printVector(v);
    v.erase(v.begin()); //removes first element from v
    printVector(v);
    v.erase(v.begin()+1, v.end()-1); //removes first element from v
    printVector(v);
    */
    /*
    printVector(v);
    v.clear(); //cleans up all elements
    printVector(v);
    */
    /*
    printVector(v);
    sort(v.begin(), v.end()); //sorts in Ascending order
    printVector(v);
    */
    /*
    printVector(v);
    sort(v.rbegin(), v.rend());
    printVector(v);
    */
    /*
    printVector(v);
    sort(v.begin(), v.end()-3); //paritally sorts first 3 elements in Ascending order
    printVector(v);
    */
    printVector(v);
    sort(v.rbegin()+2, v.rend()); //paritally sorts last 3 elements in Descending order
    printVector(v);
    
    
    return 0;
}





