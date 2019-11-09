#include <iostream>

using namespace std;

int main () {
    int n,l,r;
    cin >> n;
    int a[n]; 
    
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    
    cin>>l>>r;
    
    for (int i=0; i<n; i++){
        if( a[i] >= l && a[i] <= r){ // same problem(D) but in this case we should print value 
            cout<<a[i]<<" ";
        }
    }
    
    return 0;
}