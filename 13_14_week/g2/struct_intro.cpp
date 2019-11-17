#include <iostream>
#include <vector>

using namespace std;
struct contact {
    string email;
    int phone;
    contact() {
        //empty contructor
    }
    //non-empty constructor
    contact(string _email) {
        email = _email;
    }
    contact(int _phone) {
        phone = _phone;
    }
};

struct person {
    string firstname;
    string lastname;
    int age;
    string gender;
    vector<contact> contacts;
};

void add_person(vector<person>& people) {
    person p;
    cout << "enter first name:" << endl;
    cin >> p.firstname;
    cout << "enter last name:" << endl;
    cin >> p.lastname;
    cout << "enter age:" << endl;
    cin >> p.age;
    cout << "enter gender:" << endl;
    cin >> p.gender;

    cout << "enter contact:" << endl;
    string con;
    cin >> con;
    contact c;

    p.contacts.push_back(c);
    cout << "New contact was inserted!" << endl;

    cout << "New person was inserted!" << endl;
    people.push_back(p);
}
int main() {
    //firstname, lastname, age, gender
    vector<person> people;
    int cmd = 1;
    while (cmd > 0) {
        cout << "Menu:" << endl;
        cout << "1. Add person" << endl;
        cout << "0. Exit" << endl;
        
        cin >> cmd;
        
        if (cmd == 1) {
            add_person(people);
        }
    }
    
    
    return 0;
}