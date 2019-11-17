#include <iostream>
#include <vector>

using namespace std;

//pass by value
void changeIt(int a) {
    a = 10;//changing copy, not original
}

//pass by reference
void changeIt2(int& a) {
    a = 10;//changing copy, not original
}

void changeArray(int a[], int n) {
    a[0] = 10;
}

void changeVector(vector<int>& v) {
    v[0] = 10;
}

int main() {
    /*
    int x = 20;
    changeIt2(x);
    cout << x << endl;
    */
    /*
    int a[5] = {1,2,3,4,5};
    cout << "before:" << a[0] << endl;    
    changeArray(a, 5);
    cout << "after: " << a[0] << endl;    
    */
    
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << "before:" << v[0] << endl;
    changeVector(v);
    cout << "after:" << v[0] << endl;
}







