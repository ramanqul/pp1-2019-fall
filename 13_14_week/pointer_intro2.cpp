#include <iostream>
#include <vector>

using namespace std;

void changeIt(int a) {
    a = 10;
}

void changeIt2(int& a) {
    a = 10;
}

void changeArray(int a[], int n) {
    a[0] = 10;
}

void changeVector(vector<int>& v) {
    v[0] = 10;
}
int main() {
    int x = 20;
    //pass by value
    changeIt(x);
    cout << x << endl;
    
    //pass by reference
    changeIt2(x);
    cout << x << endl;
    
    int z[] = {1,2,3};
    //pass by reference
    changeArray(z, 3);
    cout << z[0] << endl;
    
    int z2[] = {1,2,3};
    vector<int> y(z2, z2+3);//1,2,3
    changeVector(y);
    cout << y[0] << endl;
}




