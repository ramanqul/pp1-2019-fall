#include <iostream>
#include <map>

using namespace std;

/*
map is like an array:
you can access any element by "index",
where index is any object, where key is unique.
For example:
pair<string, int> d1 = make_pair("Monday", 1);

{ 
 "monday" => 1,
 
}

*/

int main() {
    
    map<string, int> days; //declaration
    days.insert(make_pair("monday", 1));
    days.insert(make_pair("tuesday", 2));
    days.insert(make_pair("wednesday", 3));
    
    
    
    return 0;
}





