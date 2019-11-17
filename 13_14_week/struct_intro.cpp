#include <iostream>
#include <vector>

using namespace std;

struct person {
    string firstname;
    string lastname;
    int age;
    string gender;
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
        
        cout << "New person was added!" << endl;
        people.push_back(p);
    }
}






