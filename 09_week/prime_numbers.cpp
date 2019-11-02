#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    int root = sqrt(n);
    
    for (int i=2;i<=root;i++) {
        if (n % i == 0){ 
            return false;
        }
    }
    
    return true;
}


int main() {
    int t;
    cin >> t;
    
    cout << "number " << t;
    
    if (isPrime(t)) {
        cout << " is prime" << endl;
    } else {
        cout << " is not prime" << endl;
    }
    
    return 0;
}