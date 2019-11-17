#include <iostream>
#include <vector>

using namespace std;

//pass pointer of vector to function
void printMessage(vector<int>* v) {
    for (int i=0;i<v->size();i++) {
        cout << v->at(i) << " ";
    }
    cout << endl;
}

int main() {
    vector<int>* v; //pointer to a vector type
    
    v = new vector<int>();
    
    v->push_back(1);
    v->push_back(2);
    v->push_back(3);
    
    printMessage(v);
}







