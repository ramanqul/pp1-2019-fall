#include <iostream>

using namespace std;

int main () {
    int n,m;
    cin >> n >> m; // n -> row number(students), m-> columns number(problems)
    double sum, x; // mean must be in double type in order to calculate this in fraction
    
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){ // double loop for input all points of each students
            cin >> x;
            sum += x; // sum of all points 
        }
    }
    
    cout << sum/(n*m); // mean value -> ( sum of all points / number of problems ) 
    
    return 0;
}