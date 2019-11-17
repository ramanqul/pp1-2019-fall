#include <iostream>
using namespace std;

//struct person
struct person {
    string firstname;
    string lastname;
    int age;
    string gender;
    int balance;
};
//function signatures
void print_person(person p);
void send_money(person& sender, person& receiver, int amount);