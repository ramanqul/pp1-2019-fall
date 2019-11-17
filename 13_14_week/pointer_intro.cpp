#include <iostream>

using namespace std;

int main() {
    int* p1; //default value 0x1
    //int val = *p1; //error, non existing address
    
    cout << p1 << endl;
    
    int val = 123;
    p1 = &val; //get pointer address to that variable
    
    cout << p1 << endl;
    
    float* pf1;
    double* pd1;
    //...
    void* vp;
    
    
}




