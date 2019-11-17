#include <iostream>
#include "common.h"

using namespace std;

void print_account(person p) {
    cout << "==================" << endl;
    cout << p.firstname << " " << p.lastname << endl
         << "Balance is " << p.balance << endl;
    cout << "==================" << endl;
}