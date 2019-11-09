#include <iostream>

using namespace std;

int main () {
    int n, i=1;  // i->round
    cin >> n; // number of brilliants

    while (true) { // endless loop. it stops when -> 1)when we use (break;) or 2)when finish the program (return 0;)
        n -= i;  // Bob takes in i^th round i brilliants
        
        if (n<=0 ) { // if we do not have brilliants then Bob is winner because he take last one
            cout << "Bob";
            return 0; // after finding finish this program
        }

        n -= 2*i;  // Nelson takes 2 times more brilliants
        if( n <= 0 ) { // same
            cout << "Nelson";
            return 0;
        }
        
        i++;  // next round
    }
    
    return 0;
}