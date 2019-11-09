#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printIt(int a) {
    cout << a << " ";
}
//http://www.cplusplus.com/reference/algorithm/for_each/
int main() {

    int len = 5;
    int a[len] = {9,9,1,2,2};

    vector<int> v(a, a + len);
    for_each(v.begin(), v.end(), printIt);

    return 0;
}




