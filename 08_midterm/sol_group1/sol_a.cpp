#include <iostream>

using namespace std;

int main() {
    int x,y;
    cin >> y >> x;

    cout << "+";
    
    for (int i = 0; i < x-2; i++) {
        cout << "-";
    }
    
    cout << "+" << endl;

    for (int i = 0; i < y-2; i++) {
        cout << "|";
        
        for (int i = 0; i < x-2; i++) {
            cout << " ";
        }
        
        cout << "|" << endl;
    }
    
    cout << "+";
    
    for (int i = 0; i < x-2; i++) {
        cout << "-";
    }
    cout << "+";
        
    return 0;
}
