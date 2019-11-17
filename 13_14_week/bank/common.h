#include <iostream>
#include <vector>

using namespace std;

struct person {
    string firstname;
    string lastname;
    int age;
    string gender;
    int balance;
    person() {}
    person(string first, string last, int _age, string _gender) {
        firstname = first;
        lastname = last;
        age = _age;
        gender = _gender;
    }
};

void print_account(person p);
void send_money(person& sender, person& receiver, int amount);