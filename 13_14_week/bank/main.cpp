#include <iostream>
#include "common.h"

using namespace std;

int main() {
    person p1;
    p1.firstname = "Abzal";
    p1.lastname = "Kaben";
    p1.balance = 200;
    
    person p2;
    p2.firstname = "Juldyz";
    p2.lastname = "Tleubergen";
    p2.balance = 0;
    
    print_account(p1);
    print_account(p2);
    
    send_money(p1, p2, 100);
    
    print_account(p1);
    print_account(p2);

    return 0;
}