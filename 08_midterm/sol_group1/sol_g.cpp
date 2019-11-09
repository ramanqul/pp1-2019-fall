#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if (n <= 1) {
        cout << 0; 
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << i;
    }
    
    cout << endl;

    for (int i = 1; i <= n-2; i++) {
        cout << i;
        
        for (int i = 0; i < n-2; i++) {
            cout << " ";
        }
        
        cout << i + n-1 << endl;
    }
    
    for (int i = n-1; i <= (n-1)*2; i++) {
        cout << i;
    }
}
