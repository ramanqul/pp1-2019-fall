#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//unique function will rearrange a vector that way,
//so first n elements will be unique
//function returns iterator as result
/*

  1,2,1,3,2
  after calling unique:
  1,2,3,1,2  

*/
int main() {
    int len = 5;
    int a[len] = {9,9,1,2,2};

    vector<int> v(a, a + len);

    vector<int>::iterator bound;
    bound = unique(v.begin(), v.end());

    vector<int>::iterator it;
    for(it = v.begin(); it != bound; it++) {
        cout << (*it) << " ";
    }

    return 0;
}





