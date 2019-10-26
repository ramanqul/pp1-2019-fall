#include <iostream>
#include <vector>

using namespace std;

int main() {
    //stl;//standard template library
    
    //consider differences between array and stl vector
    
    int ar[10]; //declare
    vector<int> v(0, -1); //declare, with initial size
    
    //1. read n elements from user using cin
    for(int i=0 ; i < 10 ; i++) {
        //inside of for loop
        int t;
        cin >> t;
        ar[i] = t;
        v.push_back(t); //puts into the end new element
    }
    //2. print out element of array and vector
    for (int i=0;i<10;i++) {
        //ar[0]=123, v[0]= 123
        cout << "ar[" << i << "]= " << ar[i]
             << ", v[" << i << "]= " << v[i] << endl;
    }
    
    //3. Get size of array and vector
    cout << "size of vector v = " << v.size() << endl;
    int size_ar = sizeof(ar) / sizeof(int);
    cout << "size of array ar = " << size_ar << endl;
    //4. Conclusion
    //vector doesn't need size
    //adding into vector happens after calling push_back function
    //reading elements from vector is the same as for array
}

















