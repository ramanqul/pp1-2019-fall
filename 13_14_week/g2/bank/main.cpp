#include <iostream>
#include "common.h"

using namespace std;

int main() {
    
    person p1;
    p1.firstname = "Bayan";
    p1.lastname = "Kumarova";
    p1.balance = 500;
    
    person p2;
    p2.firstname = "Bulat";
    p2.lastname = "Kildibekov";
    p2.balance = 0;
    
    print_person(p1);
    print_person(p2);
    
    send_money(p1, p2, 200);
    
    print_person(p1);
    print_person(p2);
    
}