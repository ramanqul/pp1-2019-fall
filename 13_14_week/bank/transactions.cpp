#include <iostream>
#include "common.h"

using namespace std;

void send_money(person& sender, 
    person& receiver, int amount) {
    
    sender.balance -= amount;
    receiver.balance += amount;
    cout << "Money was send from " << sender.lastname
         << " to " << receiver.lastname << endl;
}