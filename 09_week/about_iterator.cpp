#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int ar[5] = {4,3,5,1,7};
    
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(1);
    v.push_back(7);
    
    cout << "way 1.0" << endl;
    //1.how to iterate array
    for (int i=0;i<5;i++) {
        cout << ar[i] << " ";
    }
    cout << endl;
    
    cout << "way 2.0" << endl;
    //2.how to iterate vector
    for (/*first*/ int i=0;
        /*second*/ i<v.size();
        /*third*/ i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << "way 2.2" << endl;
    //2.2 using iterator
    for (/*first*/vector<int>::iterator it = v.begin();
        /*second*/ it != v.end();
        /*third*/ it++) {
        int val = *it;
        cout << val << " ";
    }
    
    cout << endl;

    
    return 0;
}


