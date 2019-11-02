#include <iostream>
#include <vector>

using namespace std;

int main() {
    int ar[3] = {2,1,10};
    
    vector< int >  v;
    //1.How to add elements into vector v
    //v.push_back(2);
    //v.push_back(1);
    //v.push_back(10);
    
    cout << "v.size()=" << v.size() << endl;
    
    //2. Read input and store into array and vector
    for (int i=0;i<3;i++) {
        int t;
        cin >> t;
        
        ar[i] = t;
        //v[i] = t;
        v.push_back(t);
    }
    
    //3. Display elements in array and vector
    for (int i=0;i<3;i++) {
        cout << "ar[" << i << "]=" << ar[i]
             << " v[" << i << "]=" << v[i]
             << endl;
    }
    
    //Conclustion
    //Writing data into vector is not the same as for array!
    

    
    return 0;
}





