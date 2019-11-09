 #include <iostream>

 using namespace std;

int main () {
    int n,l,r,x;
    
    cin >> n >> l >> r; //n->number of problems, l and r -> range of difficulty
    
    int a[n]; // to store each problems with their difficulty
    for (int i=0; i<n; i++){
        cin >> a[i]; //input
    }
    
    for (int i=0; i<n; i++){
        if (a[i] >= l && a[i] <= r ){ // checking if this problem in this range or not
            cout << i+1 << " "; // and output index of this problem, in problem index starts with 1
        }
    }
    
    return 0;
}