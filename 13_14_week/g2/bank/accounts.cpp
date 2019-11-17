#include "common.h"

using namespace std;

void print_person(person p) {
    cout << "============" << endl;
    cout << "Account " << p.firstname << " "
         << p.lastname << ": " << p.balance << endl;
}