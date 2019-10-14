#include <iostream>

using namespace std;

int sum(int a, int b) {
        cout << " - sum of int" << endl;
        return a + b;
}

long sum(long a, long b) {
        cout << " - sum of long" << endl;
        return a + b;
}


int main() {
        int a, b;
        long aa,bb;
        cin >> a >> b;
        cin >> aa >> bb;

        cout << "sum of int " << sum(a, b) << endl;
        cout << "sum of long " << sum(aa ,bb) << endl;

        return 0;
}