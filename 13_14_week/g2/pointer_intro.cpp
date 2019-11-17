#include <iostream>

using namespace std;

int main() {
    int* p1;
    cout << p1 << endl;
    
    int val = 123;
    p1 = &val; //get pointer address to that variable
    
    cout << p1 << endl;
    
    
    
    float* pf1;
    cout << sizeof(pf1) << endl;
    double* pd1;
    cout << sizeof(pd1) << endl;
    //...
    void* vp;
    cout << sizeof(vp) << endl;
}




