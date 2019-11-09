#include <iostream>
using namespace std;

int main(){
    int n, max;
    cin >> n;
    
    int arr[n], arr1[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    max = arr[0] - arr1[0];

    for (int i = 0; i < n; i++) {
        if(arr[i] - arr1[i] > max) {
            max = arr[i] - arr1[i];
        }
    }
    
    cout << max;
    
    return 0;
}