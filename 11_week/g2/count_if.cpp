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
    int len = 5;
    int a[len] = {1,4,6,-1,10}; 
    
    //a - begin pointer, a+len = end pointer
    vector<int> v(a, a+len);
    
    int cnt = count_if(v.begin(), v.end(), isEven);
    cout << cnt << endl;

    return 0;
}





