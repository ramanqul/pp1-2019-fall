#include <iostream>

using namespace std;

void print_array(int *begin) {
    for (int *p = begin; *p; ++p) {
        cout << *p << " ";
    }
    
    cout << endl;
}

int main() {
    int n = 5;
    int a[5] = {1,2,3,4,5};
    print_array(a);
}