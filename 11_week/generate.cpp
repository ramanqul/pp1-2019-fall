#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void printIt(int a) {
    cout << a << " ";
}

int nextRandomNumber() {
    return rand() % 10 + 1;
}

int main() {
    
    vector<int> v(10);

    srand(time(0));

    generate(v.begin(), v.end(), nextRandomNumber);

    for_each(v.begin(), v.end(), printIt);
    cout << endl;
    
    //sorting part
    sort(v.begin(), v.end()); //sort ASC order
    for_each(v.begin(), v.end(), printIt);
    cout << endl;
    
    sort(v.rbegin(), v.rend()); //sort ASC order
    for_each(v.begin(), v.end(), printIt);
    cout << endl;
        
    
    return 0;
}