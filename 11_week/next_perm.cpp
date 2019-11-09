#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/*
1 1 2 2 3 3

C(n, k) = n! / k!*(n-k)! = C(6, 3) = 6! / 3!*3! = 
4*5*6 / 6 = 4*5 = 20

*/
int main() {
    int len = 4;    
    int a[] = {1,2,3,4};
    vector<int> v(a, a + len);
    //only if it's not sorted
    sort (v.begin(), v.end()); //ASC
    
    do {
        cout << v[0] << ' ' << v[1] << ' ' << v[2] << " "<< v[3] << '\n';
    } while ( next_permutation(v.begin(), v.end()) );

    cout << "After loop: " << v[0] << ' ' << v[1] 
         << ' ' << v[2] << " " << v[3] << '\n';

    
    return 0;
}

/*

1)
while (false) {

}

0
============
2)
do {

} while (false)

1
=====
do while doing at least 1 time
while "while" at leat 0 time



*/