#include <iostream>
#include <vector>

using namespace std;

struct contact {
    string email;
    int phone;
    contact() {} //empty contructor
    //non empty contructor
    contact(string _email, int _phone) {
        email = _email;
        phone = _phone;
    }
};
struct education {
    string university;
    string speciality;
    int yearEnrolled;
    int yearGraduated;
    float gpa;
};
struct person {
    string firstname;
    string lastname;
    int age;
    string gender;
    education knowlegde;
    vector<contact> contacts;
    person() {}
    person(string first, string last, int _age, string _gender) {
        firstname = first;
        lastname = last;
        age = _age;
        gender = _gender;
    }
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
        
        //contact c(email, phone);
        contact c;
        c.phone = phone;
        c.email = email;
        
        cout << "New contact was added!" << endl;
        p.contacts.push_back(c);
        
        cout << "New person was added!" << endl;
        people.push_back(p);
    }
}






