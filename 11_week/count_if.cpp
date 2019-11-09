#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/*
int a[10];
0,1,2,....9 - access array "a".

vector<int> v;
iterator - like indices,but no numbers.
0 - begin()
1 - begin()+1
2 - begin()+2
..

N - end()

*/
bool isEven(int n) {
    /*
    if (n % 2 == 0) {
        return true;
    } else {
        return false;
    }
    */
    //shorter way
    return n % 2 == 0;
}

int main() {
    int a[5] = {-1, 0, 10, 7, 12};
    
    vector<int> v(a, a+5); //creat vector from array
    //pass array and then end pointer of array, like a+n
    
    //count if counts elements satisfying some predicate
    //condition
    int cnt = count_if(v.begin(), v.end(), isEven);
    
    /*
    int counter = 0;
    for (int i=0;i<n;i++) {
        if (isEven(v[i])) {
            counter++;
        }
    }
    */
    cout << "counting even numbers: " << cnt << endl;
    
    return 0;
}





