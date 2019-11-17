#include <iostream>
#include <vector>

using namespace std;

struct contact {
    string email;
    int phone;
};

struct person {
    string firstname;
    string lastname;
    int age;
    string gender;
    vector<contact> contacts;
};
    
int main() {
    vector<person> people;
    
    while (true) {
        person p;
        cout << "enter first name: " << endl;
        cin >> p.firstname;
        cout << "enter last name: " << endl;
        cin >> p.lastname;
        cout << "enter age: " << endl;
        cin >> p.age;
        cout << "enter gender: " << endl;
        cin >> p.gender;
        
        cout << "enter phone: " << endl;
        int phone;
        cin >> phone;
        
        cout << "enter email: " << endl;
        string email;
        cin >> email;
        
        contact c;
        c.email = email;
        c.phone = phone;
        
        cout << "New contact was added!" << endl;
        p.contacts.push_back(c);
        
        cout << "New person was added!" << endl;
        people.push_back(p);
    }
}






