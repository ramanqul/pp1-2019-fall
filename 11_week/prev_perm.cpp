#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main() {
    int len = 4;    
    int a[] = {1,1,3,4};
    vector<int> v(a, a + len);
    //only if it's not sorted
    sort (v.rbegin(), v.rend()); //DESC
    
    do {
        cout << v[0] << ' ' << v[1] << ' ' << v[2] << " "<< v[3] << '\n';
    } while ( prev_permutation(v.begin(), v.end()) );

    cout << "After loop: " << v[0] << ' ' << v[1] 
         << ' ' << v[2] << " " << v[3] << '\n';

    
    return 0;
}