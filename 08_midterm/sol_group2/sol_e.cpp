#include <iostream>

using namespace std;

int a[26]; // array to store how many times we met each letter

int main () {
    string s;
    getline(cin,s); // to input all text and store it in one string s
    char c;

    for (int i=0; i<s.size(); i++){
        if (s[i] == ' '){
            continue; // if we have ' ' skip it
        } else {
            a[ s[i]-'a' ]++; // count how many time each letter met -> s[0] stores a, s[1] stores b and so on 
        }
    }
    
    for(int i=0; i<26; i++){
        if (i%2 == 0) { // in this problem you should print letter soon how many time this letter met if index is even
            c = 'a'+i; // convert to char
            cout << c << " " << a[i] << endl;
        } else {
            c = 'a'+i;
            cout << a[i] << " " << c <<endl;
        }
    }
    
    return 0;
}