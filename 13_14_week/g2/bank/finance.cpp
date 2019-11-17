#include "common.h"

using namespace std;

void send_money(person& sender, 
    person& receiver, 
    int amount) {

    sender.balance -= amount;
    receiver.balance += amount;
    cout << "=============" << endl;
    cout << "Money was sent from " << sender.lastname
         << " to " << receiver.lastname << ":" << amount
         << endl;
}