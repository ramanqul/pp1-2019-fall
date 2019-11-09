#include <iostream>
using namespace std;

bool onlyFrom4and7(int x){  
    if (x == 0) {
        return true;
    }
    
    if ((x%10 == 4) || (x%10 == 7)) {
        return onlyFrom4and7(x/10);
    }
    
    return false;
}

int main(){
    int n;
    cin >> n;
    
    for (int i = 4; i < n; i++) {
        if (onlyFrom4and7(i)) {
            cout << i << endl;
        }
    }
}
