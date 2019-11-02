#include <iostream>
#include <vector>

using namespace std;

int main() {
    //STL - Standard Template Library
    
    int ar[5]; //declaration of array,
    //5 - is size of the array ar
    
    //vector has nothing common with Math or Geometry
    //Vector = List
    //1.Empty constructor
    vector<int> v;
    //2. Fill constructor
    vector<int> v2(/*initial size*/ 5, -1);
    //3. Copy constructor
    vector<int> v3(v2);
    
    cout << "1. v.size()=" << v.size() << endl;
    cout << "2. v2.size()=" << v2.size() << endl;
    cout << "3. v3.size()=" << v3.size() << endl;
    
    
    return 0;
}





